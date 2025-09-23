#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHeaderView>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , selectedRow(-1)
    , darkTheme(false)
{
    ui->setupUi(this);

    // Find UI elements
    nameEdit = findChild<QLineEdit*>("nameEdit");
    platformCombo = findChild<QComboBox*>("platformCombo");
    subscribersSpin = findChild<QSpinBox*>("subscribersSpin");
    contentTypeEdit = findChild<QLineEdit*>("contentTypeEdit");
    searchEdit = findChild<QLineEdit*>("searchEdit");
    addButton = findChild<QPushButton*>("addButton");
    updateButton = findChild<QPushButton*>("updateButton");
    deleteButton = findChild<QPushButton*>("deleteButton");
    themeButton = findChild<QPushButton*>("themeButton");
    exportButton = findChild<QPushButton*>("exportButton");
    clearButton = findChild<QPushButton*>("clearButton");
    creatorTable = findChild<QTableWidget*>("creatorTable");
    stackedWidget = findChild<QStackedWidget*>("stackedWidget");
    managementButton = findChild<QPushButton*>("managementButton");
    financeButton = findChild<QPushButton*>("financeButton");
    contentCreatorButton = findChild<QPushButton*>("contentCreatorButton");
    sponsorButton = findChild<QPushButton*>("sponsorButton");
    dealButton = findChild<QPushButton*>("dealButton");
    employeeButton = findChild<QPushButton*>("employeeButton");

    // Setup table
    if (!creatorTable) {
        QMessageBox::critical(this, "Error", "Table widget not found!");
        return;
    }
    creatorTable->setColumnCount(4);
    creatorTable->setHorizontalHeaderLabels({"Name", "Platform", "Subscribers", "Content Type"});
    creatorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    creatorTable->setSelectionMode(QAbstractItemView::SingleSelection);
    creatorTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(creatorTable, &QTableWidget::cellClicked, this, &MainWindow::handleTableRowSelected);

    // Connect buttons and search
    if (addButton) {
        connect(addButton, &QPushButton::clicked, this, &MainWindow::handleAddButtonClicked);
    } else {
        QMessageBox::critical(this, "Error", "Add button not found!");
    }
    if (updateButton) {
        connect(updateButton, &QPushButton::clicked, this, &MainWindow::handleUpdateButtonClicked);
    } else {
        QMessageBox::critical(this, "Error", "Update button not found!");
    }
    if (deleteButton) {
        connect(deleteButton, &QPushButton::clicked, this, &MainWindow::handleDeleteButtonClicked);
    } else {
        QMessageBox::critical(this, "Error", "Delete button not found!");
    }
    if (searchEdit) {
        connect(searchEdit, &QLineEdit::textChanged, this, &MainWindow::handleSearchTextChanged);
    }
    if (themeButton) {
        connect(themeButton, &QPushButton::clicked, this, &MainWindow::handleThemeButtonClicked);
    }
    if (exportButton) {
        connect(exportButton, &QPushButton::clicked, this, &MainWindow::handleExportButtonClicked);
    }
    if (clearButton) {
        connect(clearButton, &QPushButton::clicked, this, &MainWindow::handleClearButtonClicked);
    }

    // Connect sidebar buttons to stacked widget
    if (managementButton) {
        connect(managementButton, &QPushButton::clicked, this, [this]() { stackedWidget->setCurrentWidget(ui->managementPage); });
    }
    if (financeButton) {
        connect(financeButton, &QPushButton::clicked, this, [this]() { stackedWidget->setCurrentWidget(ui->financePage); });
    }
    if (contentCreatorButton) {
        connect(contentCreatorButton, &QPushButton::clicked, this, [this]() { stackedWidget->setCurrentWidget(ui->contentCreatorPage); });
    }
    if (sponsorButton) {
        connect(sponsorButton, &QPushButton::clicked, this, [this]() { stackedWidget->setCurrentWidget(ui->sponsorPage); });
    }
    if (dealButton) {
        connect(dealButton, &QPushButton::clicked, this, [this]() { stackedWidget->setCurrentWidget(ui->dealPage); });
    }
    if (employeeButton) {
        connect(employeeButton, &QPushButton::clicked, this, [this]() { stackedWidget->setCurrentWidget(ui->employeePage); });
    }

    // Set default page
    if (stackedWidget) {
        stackedWidget->setCurrentWidget(ui->contentCreatorPage);
    }

    updateTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::handleAddButtonClicked()
{
    if (!nameEdit || !contentTypeEdit || !platformCombo || !subscribersSpin || !creatorTable) {
        QMessageBox::critical(this, "Error", "UI elements missing!");
        return;
    }

    QString name = nameEdit->text().trimmed();
    if (name.isEmpty() || contentTypeEdit->text().isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Name and Content Type are required!");
        return;
    }
    if (name.length() > 50) {
        QMessageBox::warning(this, "Input Error", "Name must be 50 characters or less!");
        return;
    }
    if (!isNameUnique(name)) {
        QMessageBox::warning(this, "Input Error", "Name must be unique!");
        return;
    }

    Creator creator;
    creator.name = name;
    creator.platform = platformCombo->currentText();
    creator.subscribers = subscribersSpin->value();
    creator.contentType = contentTypeEdit->text().trimmed();

    creators.append(creator);

    nameEdit->clear();
    platformCombo->setCurrentIndex(0);
    subscribersSpin->setValue(0);
    contentTypeEdit->clear();
    selectedRow = -1;

    updateTable();
}

void MainWindow::handleUpdateButtonClicked()
{
    if (!nameEdit || !contentTypeEdit || !platformCombo || !subscribersSpin || !creatorTable) {
        QMessageBox::critical(this, "Error", "UI elements missing!");
        return;
    }

    if (selectedRow < 0 || selectedRow >= creators.size()) {
        QMessageBox::warning(this, "Selection Error", "Please select a creator to update!");
        return;
    }

    QString name = nameEdit->text().trimmed();
    if (name.isEmpty() || contentTypeEdit->text().isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Name and Content Type are required!");
        return;
    }
    if (name.length() > 50) {
        QMessageBox::warning(this, "Input Error", "Name must be 50 characters or less!");
        return;
    }
    QString oldName = creators[selectedRow].name;
    if (!isNameUnique(name, oldName)) {
        QMessageBox::warning(this, "Input Error", "Name must be unique!");
        return;
    }

    creators[selectedRow].name = name;
    creators[selectedRow].platform = platformCombo->currentText();
    creators[selectedRow].subscribers = subscribersSpin->value();
    creators[selectedRow].contentType = contentTypeEdit->text().trimmed();

    nameEdit->clear();
    platformCombo->setCurrentIndex(0);
    subscribersSpin->setValue(0);
    contentTypeEdit->clear();
    selectedRow = -1;

    updateTable();
}

void MainWindow::handleDeleteButtonClicked()
{
    if (!creatorTable) {
        QMessageBox::critical(this, "Error", "Table widget not found!");
        return;
    }

    if (selectedRow < 0 || selectedRow >= creators.size()) {
        QMessageBox::warning(this, "Selection Error", "Please select a creator to delete!");
        return;
    }

    creators.removeAt(selectedRow);
    if (nameEdit) nameEdit->clear();
    if (platformCombo) platformCombo->setCurrentIndex(0);
    if (subscribersSpin) subscribersSpin->setValue(0);
    if (contentTypeEdit) contentTypeEdit->clear();
    selectedRow = -1;

    updateTable();
}

void MainWindow::handleTableRowSelected(int row, int column)
{
    Q_UNUSED(column);
    if (!creatorTable || !nameEdit || !platformCombo || !subscribersSpin || !contentTypeEdit) {
        QMessageBox::critical(this, "Error", "UI elements missing!");
        return;
    }

    selectedRow = row;
    if (selectedRow >= 0 && selectedRow < creators.size()) {
        nameEdit->setText(creators[selectedRow].name);
        platformCombo->setCurrentText(creators[selectedRow].platform);
        subscribersSpin->setValue(creators[selectedRow].subscribers);
        contentTypeEdit->setText(creators[selectedRow].contentType);
    }
}

void MainWindow::handleSearchTextChanged(const QString &text)
{
    Q_UNUSED(text);
    if (!creatorTable) {
        QMessageBox::critical(this, "Error", "Table widget not found!");
        return;
    }
    updateTable();
}

void MainWindow::handleExportButtonClicked()
{
    if (!creatorTable) {
        QMessageBox::critical(this, "Error", "Table widget not found!");
        return;
    }

    QFile file("creators_export.csv");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Export Error", "Cannot save CSV file!");
        return;
    }

    QTextStream out(&file);
    out << "Name,Platform,Subscribers,Content Type\n";
    for (int i = 0; i < creatorTable->rowCount(); i++) {
        if (creatorTable->item(i, 0) && creatorTable->item(i, 1) &&
            creatorTable->item(i, 2) && creatorTable->item(i, 3)) {
            out << creatorTable->item(i, 0)->text() << ","
                << creatorTable->item(i, 1)->text() << ","
                << creatorTable->item(i, 2)->text() << ","
                << creatorTable->item(i, 3)->text() << "\n";
        }
    }
    file.close();
    QMessageBox::information(this, "Success", "Exported to creators_export.csv");
}

void MainWindow::loadTheme() {
    QSettings settings("MyCompany", "ContentCreatorManager");
    darkTheme = settings.value("darkTheme", false).toBool();
    setProperty("darkTheme", darkTheme);
    style()->unpolish(this);
    style()->polish(this);
    if (themeButton) themeButton->setText(darkTheme ? "Light Theme" : "Dark Theme");
}

void MainWindow::saveTheme() {
    QSettings settings("MyCompany", "ContentCreatorManager");
    settings.setValue("darkTheme", darkTheme);
}

void MainWindow::handleThemeButtonClicked() {
    darkTheme = !darkTheme;
    saveTheme();
    setProperty("darkTheme", darkTheme);
    style()->unpolish(this);
    style()->polish(this);
    if (themeButton) {
        themeButton->setText(darkTheme ? "Light Theme" : "Dark Theme");
    }
}
void MainWindow::handleClearButtonClicked()
{
    if (nameEdit) nameEdit->clear();
    if (platformCombo) platformCombo->setCurrentIndex(0);
    if (subscribersSpin) subscribersSpin->setValue(0);
    if (contentTypeEdit) contentTypeEdit->clear();
    selectedRow = -1;
}

void MainWindow::updateTable()
{
    if (!creatorTable) {
        QMessageBox::critical(this, "Error", "Table widget not found!");
        return;
    }

    creatorTable->setRowCount(0);
    QString search = searchEdit ? searchEdit->text().toLower() : "";
    QList<Creator> filteredCreators = creators; // Create a copy to sort
    // Sort by subscribers in descending order
    std::sort(filteredCreators.begin(), filteredCreators.end(), [](const Creator& a, const Creator& b) {
        return a.subscribers > b.subscribers;
    });

    for (int i = 0; i < filteredCreators.size(); i++) {
        if (!search.isEmpty() &&
            !filteredCreators[i].name.toLower().contains(search) &&
            !filteredCreators[i].platform.toLower().contains(search)) {
            continue;
        }
        int row = creatorTable->rowCount();
        creatorTable->insertRow(row);
        creatorTable->setItem(row, 0, new QTableWidgetItem(filteredCreators[i].name));
        creatorTable->setItem(row, 1, new QTableWidgetItem(filteredCreators[i].platform));
        creatorTable->setItem(row, 2, new QTableWidgetItem(QString::number(filteredCreators[i].subscribers)));
        creatorTable->setItem(row, 3, new QTableWidgetItem(filteredCreators[i].contentType));
    }
}

bool MainWindow::isNameUnique(const QString &name, const QString &oldName)
{
    for (int i = 0; i < creators.size(); i++) {
        if (creators[i].name == name && creators[i].name != oldName) {
            return false;
        }
    }
    return true;
}

