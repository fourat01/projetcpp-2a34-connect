/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_10;
    QLabel *label_5;
    QWidget *tab_2;
    QLabel *label_11;
    QLabel *label_12;
    QDateEdit *dateEdit_3;
    QLineEdit *lineEdit_7;
    QLabel *label_13;
    QLineEdit *lineEdit_5;
    QLabel *label_14;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_2;
    QLabel *label_15;
    QLabel *label_16;
    QDateEdit *dateEdit_4;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_11;
    QLabel *label_18;
    QListView *listView;
    QLabel *label_19;
    QLineEdit *lineEdit_12;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(907, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("/* ===== Global ===== */\n"
"QWidget {\n"
"    background-color: #E3F2FD;   /* very light blue background */\n"
"    color: #1B5E20;              /* dark green text */\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"/* ===== QPushButton ===== */\n"
"QPushButton {\n"
"    background-color: #4CAF50;   /* green */\n"
"    color: white;\n"
"    border: 2px solid #388E3C;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2196F3;   /* blue on hover */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1976D2;   /* darker blue when clicked */\n"
"}\n"
"\n"
"/* ===== QLineEdit / QTextEdit ===== */\n"
"QLineEdit, QTextEdit {\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #2196F3;   /* blue border */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    color: #1B5E20;              /* dark green text */\n"
"}\n"
"QLineEdit:focus, QTextEdit:focus {\n"
"    border: 2px solid #4CAF50;   /* green border on focu"
                        "s */\n"
"}\n"
"\n"
"/* ===== QLabel ===== */\n"
"QLabel {\n"
"    color: #0D47A1;              /* deep blue text */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* ===== QComboBox ===== */\n"
"QComboBox {\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #4CAF50;\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"}\n"
"QComboBox:hover {\n"
"    border: 2px solid #2196F3;\n"
"}\n"
"\n"
"/* ===== QTableWidget / QTreeWidget ===== */\n"
"QHeaderView::section {\n"
"    background-color: #2196F3;   /* blue header */\n"
"    color: white;\n"
"    padding: 6px;\n"
"    border: none;\n"
"}\n"
"QTableWidget, QTreeWidget {\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #4CAF50;\n"
"    gridline-color: #2196F3;\n"
"}\n"
"\n"
"/* ===== QScrollBar ===== */\n"
"QScrollBar:vertical {\n"
"    background: #E3F2FD;\n"
"    width: 12px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #4CAF50;\n"
"    border-radius: 6px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #2196F3;"
                        "\n"
"}\n"
"QScrollBar:horizontal {\n"
"    background: #E3F2FD;\n"
"    height: 12px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: #4CAF50;\n"
"    border-radius: 6px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover {\n"
"    background: #2196F3;\n"
"}\n"
"\n"
"/* ===== QProgressBar ===== */\n"
"QProgressBar {\n"
"    border: 2px solid #2196F3;\n"
"    border-radius: 8px;\n"
"    text-align: center;\n"
"}\n"
"QProgressBar::chunk {\n"
"    background-color: #4CAF50;   /* green progress */\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"/* ===== QTabWidget ===== */\n"
"QTabWidget::pane {\n"
"    border: 2px solid #2196F3;   /* blue border around content */\n"
"    border-radius: 8px;\n"
"    background: #FFFFFF;\n"
"}\n"
"QTabBar::tab {\n"
"    background: #BBDEFB;         /* light blue tab */\n"
"    color: #1B5E20;              /* dark green text */\n"
"    border: 1px solid #2196F3;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"    margin-right: 4px;\n"
"}\n"
"QTabBar::tab:selected {\n"
""
                        "    background: #4CAF50;         /* green when selected */\n"
"    color: white;\n"
"}\n"
"QTabBar::tab:hover {\n"
"    background: #2196F3;         /* blue on hover */\n"
"    color: white;\n"
"}\n"
"QDateEdit {\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #2196F3;   /* blue border */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    color: #1B5E20;              /* dark green text */\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border: 2px solid #4CAF50;   /* green border when focused */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"    background-color: #FFFFFF;\n"
"    selection-background-color: #4CAF50; /* green selected day */\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QListWidget {\n"
"    background-color: #FFFFFF;\n"
"    border: 2px solid #2196F3;   /* blue border */\n"
"    border-radius: 6px;\n"
"    padding: 4px;\n"
"    color: #1B5E20;              /* dark green text */\n"
"}\n"
"\n"
"QListView::item {\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QListView::item:s"
                        "elected {\n"
"    background-color: #4CAF50;   /* green when selected */\n"
"    color: white;\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background-color: #2196F3;   /* blue when hovered */\n"
"    color: white;\n"
"}\n"
"/* Fond g\303\251n\303\251ral de l'onglet */\n"
"QTabWidget, QTabWidget::pane {\n"
"    background-color: #FFFFFF; /* blanc */\n"
"    border: 1px solid #BFA2DB; /* bordure mauve claire pour d\303\251limiter */\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Fond des onglets (onglets non s\303\251lectionn\303\251s) */\n"
"QTabBar::tab {\n"
"    background-color: #D6C1E9; /* mauve pastel */\n"
"    color: #4B0082; /* violet fonc\303\251 */\n"
"    padding: 8px 15px;\n"
"    border: 1px solid #BFA2DB;\n"
"    border-bottom: none;\n"
"    border-top-left-radius: 5px;\n"
"    border-top-right-radius: 5px;\n"
"    margin-right: 2px;\n"
"}\n"
"\n"
"/* Onglet s\303\251lectionn\303\251 */\n"
"QTabBar::tab:selected {\n"
"    background-color: #FFFFFF; /* blanc */\n"
"    color: #4B0082;\n"
"    bor"
                        "der: 1px solid #9D65C9;\n"
"    border-bottom: 1px solid #FFFFFF; /* pour fusionner avec le panneau */\n"
"}\n"
"\n"
"/* Onglet au survol */\n"
"QTabBar::tab:hover {\n"
"    background-color: #9D65C9;\n"
"    color: #FFFFFF;\n"
"}\n"
"/* Bouton poussoir principal */\n"
"QPushButton {\n"
"    background-color: #9D65C9;       /* Mauve vif */\n"
"    color: #FFFFFF;                  /* Texte blanc */\n"
"    border: 2px solid #4B0082;      /* Bordure violet fonc\303\251 */\n"
"    border-radius: 10px;            /* Bords arrondis */\n"
"    padding: 10px 20px;             /* Espacement interne */\n"
"    font-size: 16px;                /* Taille du texte */\n"
"    font-weight: bold;\n"
"    cursor: pointer;\n"
"    transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"/* Bouton poussoir au survol */\n"
"QPushButton:hover {\n"
"    background-color: #7A3EA1;       /* Mauve plus fonc\303\251 */\n"
"}\n"
"\n"
"/* Bouton poussoir enfonc\303\251 (clic) */\n"
"QPushButton:pressed {\n"
"    background-color: #5B2E80; "
                        "      /* Mauve tr\303\250s fonc\303\251 */\n"
"    border-color: #3B1E59;           /* Bordure plus fonc\303\251e */\n"
"}\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 351, 321));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 79, 254);\n"
"QTabWidget::pane {\n"
"    border: 2px solid white;    /* Bordure blanche autour de la zone de contenu */\n"
"    background: #f0f0f0;        /* Fond clair (\303\240 adapter) */\n"
"}\n"
"\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 141, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 61, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 37, 12));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 130, 201, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 160, 121, 20));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 190, 121, 20));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 40, 113, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 70, 113, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(120, 100, 113, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(120, 190, 111, 20));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(120, 130, 110, 22));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateEdit_2 = new QDateEdit(tab);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(120, 160, 110, 22));
        dateEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(129, 227, 101, 41));
        lineEdit_10 = new QLineEdit(tab);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(120, 10, 113, 20));
        lineEdit_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 16, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_11 = new QLabel(tab_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 193, 81, 16));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 73, 71, 16));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        dateEdit_3 = new QDateEdit(tab_2);
        dateEdit_3->setObjectName("dateEdit_3");
        dateEdit_3->setGeometry(QRect(120, 163, 110, 22));
        dateEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(120, 193, 113, 20));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 43, 101, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(120, 43, 113, 20));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 163, 101, 16));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(120, 103, 113, 20));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 220, 121, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("button {\n"
"	background-color: rgb(255, 255, 255);\n"
"  background-color: white;\n"
"  color: black;\n"
"  border: 1px solid #ccc;\n"
"}\n"
""));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 103, 37, 12));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 133, 101, 16));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"QPushButton* button = new QPushButton(\"Mon Bouton\");\n"
"button->setStyleSheet(\"background-color: white; color: black; border: 1px solid gray;\");\n"
""));
        dateEdit_4 = new QDateEdit(tab_2);
        dateEdit_4->setObjectName("dateEdit_4");
        dateEdit_4->setGeometry(QRect(120, 133, 110, 22));
        dateEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(120, 73, 113, 20));
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_11 = new QLineEdit(tab_2);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(120, 10, 113, 20));
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 10, 101, 16));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, QString());
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(370, 50, 311, 271));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(380, 10, 71, 21));
        lineEdit_12 = new QLineEdit(centralwidget);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(470, 10, 113, 31));
        lineEdit_12->setStyleSheet(QString::fromUtf8("color: rgb(196, 159, 255);\n"
"\n"
"alternate-background-color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(700, 50, 141, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(196, 159, 255);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(700, 100, 121, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(196, 159, 255);"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(700, 150, 121, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(196, 159, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 907, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom de sponsor", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Categorie", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Debut de contrat", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Fin de contrat", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Budget", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\342\200\215ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Budget", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Categorie", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Nom de sponsor", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Fin de contrat", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Debut de contrat", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\342\200\215ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Trie par nom", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
