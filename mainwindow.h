#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QSpinBox>
#include <QPushButton>
#include <QList>
#include <QStackedWidget>
#include <QSettings>

    QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Creator {
    QString name;
    QString platform;
    int subscribers;
    QString contentType;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleAddButtonClicked();
    void handleUpdateButtonClicked();
    void handleDeleteButtonClicked();
    void handleTableRowSelected(int row, int column);
    void handleSearchTextChanged(const QString &text);
    void handleExportButtonClicked();
    void handleThemeButtonClicked();
    void handleClearButtonClicked();

private:
    void updateTable();
    bool isNameUnique(const QString &name, const QString &oldName = "");
private:
    void loadTheme();
    void saveTheme();


    Ui::MainWindow *ui;
    QLineEdit *nameEdit;
    QComboBox *platformCombo;
    QSpinBox *subscribersSpin;
    QLineEdit *contentTypeEdit;
    QLineEdit *searchEdit;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *themeButton;
    QPushButton *exportButton;
    QPushButton *clearButton;
    QTableWidget *creatorTable;
    QStackedWidget *stackedWidget;
    QPushButton *managementButton;
    QPushButton *financeButton;
    QPushButton *contentCreatorButton;
    QPushButton *sponsorButton;
    QPushButton *dealButton;
    QPushButton *employeeButton;
    QList<Creator> creators;
    int selectedRow;
    bool darkTheme;
};

#endif
