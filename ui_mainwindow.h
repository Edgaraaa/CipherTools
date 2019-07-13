/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBase64;
    QAction *actionBacon;
    QAction *actionCasor;
    QAction *actionHex;
    QAction *actionRail_fence;
    QAction *actionAbort;
    QAction *actionRight;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(831, 485);
        actionBase64 = new QAction(MainWindow);
        actionBase64->setObjectName(QString::fromUtf8("actionBase64"));
        actionBacon = new QAction(MainWindow);
        actionBacon->setObjectName(QString::fromUtf8("actionBacon"));
        actionCasor = new QAction(MainWindow);
        actionCasor->setObjectName(QString::fromUtf8("actionCasor"));
        actionHex = new QAction(MainWindow);
        actionHex->setObjectName(QString::fromUtf8("actionHex"));
        actionRail_fence = new QAction(MainWindow);
        actionRail_fence->setObjectName(QString::fromUtf8("actionRail_fence"));
        actionAbort = new QAction(MainWindow);
        actionAbort->setObjectName(QString::fromUtf8("actionAbort"));
        actionRight = new QAction(MainWindow);
        actionRight->setObjectName(QString::fromUtf8("actionRight"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(640, 140, 111, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(640, 190, 111, 41));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 20, 551, 141));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(70, 220, 551, 141));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 71, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 180, 71, 21));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(70, 400, 91, 16));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(150, 400, 101, 16));
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(220, 400, 101, 16));
        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(300, 400, 101, 16));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(320, 180, 113, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 180, 54, 12));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 370, 291, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(630, 250, 191, 171));
        label_5->setStyleSheet(QString::fromUtf8("image:url(:/new/prefix1/2.jpg)"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 831, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionBase64->setText(QApplication::translate("MainWindow", "base64", 0, QApplication::UnicodeUTF8));
        actionBacon->setText(QApplication::translate("MainWindow", "bacon", 0, QApplication::UnicodeUTF8));
        actionCasor->setText(QApplication::translate("MainWindow", "casor", 0, QApplication::UnicodeUTF8));
        actionHex->setText(QApplication::translate("MainWindow", "hex", 0, QApplication::UnicodeUTF8));
        actionRail_fence->setText(QApplication::translate("MainWindow", "rail fence", 0, QApplication::UnicodeUTF8));
        actionAbort->setText(QApplication::translate("MainWindow", "Abort...", 0, QApplication::UnicodeUTF8));
        actionRight->setText(QApplication::translate("MainWindow", "right", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\247\243\345\257\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\230\216\346\226\207", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\345\257\206\346\226\207", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "base64", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "bacon", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "reilfence", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MainWindow", "casor", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "offset", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\346\263\250\346\204\217\357\274\232bacon\345\217\252\345\256\236\347\216\260\344\272\206\345\212\240\345\257\206\357\274\214\350\247\243\345\257\206\346\232\202\346\227\266\350\277\230\346\262\241....", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
