/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    QComboBox *mapSelect;
    QLabel *locationDisplay;
    QPushButton *dropButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vboxLayout = new QVBoxLayout(centralWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        mapSelect = new QComboBox(centralWidget);
        mapSelect->setObjectName(QString::fromUtf8("mapSelect"));
        mapSelect->setStyleSheet(QString::fromUtf8(""));

        vboxLayout->addWidget(mapSelect);

        locationDisplay = new QLabel(centralWidget);
        locationDisplay->setObjectName(QString::fromUtf8("locationDisplay"));
        locationDisplay->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 143, 143);"));

        vboxLayout->addWidget(locationDisplay);

        dropButton = new QPushButton(centralWidget);
        dropButton->setObjectName(QString::fromUtf8("dropButton"));
        dropButton->setStyleSheet(QString::fromUtf8(""));

        vboxLayout->addWidget(dropButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Battle Royale Drop Randomizer", nullptr));
        locationDisplay->setText(QApplication::translate("MainWindow", "Select Game", nullptr));
        dropButton->setText(QApplication::translate("MainWindow", "Drop", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "Game Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
