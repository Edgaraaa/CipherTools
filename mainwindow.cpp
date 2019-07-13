#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui/QAction>
#include <QtGui/QMenu>
#include <QtGui/QLabel>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QMessageBox>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include "base_64.h"
#include "malloc.h"
#include <cstring>
#include "bacon.h"
#include "rail.h"
#include "QImage"
#include "casor.h"
#include <stdio.h>
#include <QTime>
#include <QTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    abortAction=new QAction(tr("&Abort"),this);
    abortAction->setStatusTip(tr("Abort Me"));
    connect(abortAction,SIGNAL(triggered()),this,SLOT(abortMe()));

    QMenu *abo = menuBar()->addMenu(tr("&Abort"));
    abo->addAction(abortAction);

    QToolBar *toolBar = addToolBar(tr("&Abort"));
    toolBar->addAction(abortAction);
    ui->setupUi(this);
    groupButton1=new QButtonGroup(this);
    groupButton1->addButton(ui->radioButton,0);
    groupButton1->addButton(ui->radioButton_2,1);
    groupButton1->addButton(ui->radioButton_3,2);
    groupButton1->addButton(ui->radioButton_4,3);
    ui->radioButton->setChecked(true);

    connect(ui->radioButton,SIGNAL(clicked(bool)),this,SLOT(slots_type_of_cipher()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(slots_type_of_cipher()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),this,SLOT(slots_type_of_cipher()));
    connect(ui->radioButton_4,SIGNAL(clicked(bool)),this,SLOT(slots_type_of_cipher()));


    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(En_cipher()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(De_cipher()));
}
void MainWindow::abortMe()
{
    QLabel *abme;
    abme=new QLabel;
    abme->resize(600,200);
    abme->move(abme->x() + abme->width() + 2, 10);
    abme->setStyleSheet(QString("image:url(:/new/prefix1/1.jpg);color:rgb(0,0,0);"));
    abme->setText("Construct By ZuoQinyuan \n ShiYiNan \n WangShenghang \n For Dad Zhan!");
    abme->show();
}
int MainWindow::slots_type_of_cipher()
{
    switch(groupButton1->checkedId())
    {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    }
}
void MainWindow::En_cipher()
{
    int i=groupButton1->checkedId();
    QString sendstr=ui->textEdit->toPlainText();
    QString outstring;
    QByteArray ba=sendstr.toLatin1();
    char *proin;
    char *outstr=(char*)malloc(1024*sizeof(char));
    bacon bacona;
    rail_fence raill;
    casor casora;
    const int offsett=ui->lineEdit->text().toInt();
    switch(i)
    {
    case 0:
        int outlen;
        ba=sendstr.toLatin1();
        proin=ba.data();
        enBase64(proin,strlen(proin),outstr,outlen);
        outstring=QString(QLatin1String(outstr));
        break;
    case 1:
        bacona.get_encode(sendstr);
        outstring=bacona.en_cypto();
        break;
    case 2:
        raill.get_en_code(sendstr);
        outstring=raill.en_cypto(offsett);
        break;
    case 3:
        casora.get_en_string(sendstr);
        outstring=casora.en_cypto(offsett);
        break;
    }
    ui->textEdit_2->setText(outstring);
}
void MainWindow::De_cipher()
{
    int i=groupButton1->checkedId();
    QString sendstr=ui->textEdit_2->toPlainText();
    QString outstring;
    QByteArray ba=sendstr.toLatin1();
    char *proin;
    char *outstr=(char*)malloc(1024*sizeof(char));
    rail_fence raill;
    casor casora;
    const int offsett=ui->lineEdit->text().toInt();
    switch(i)
    {
    case 0:
        int outlen;
        ba=sendstr.toLatin1();
        proin=ba.data();
        deBase64(proin,strlen(proin),outstr,outlen);
        outstring=QString(QLatin1String(outstr));
        break;
    case 1:
        ui->textEdit->setText(tr("sorry!!"));
        break;
    case 2:
        raill.get_de_code(sendstr);
        outstring=raill.de_cypto(offsett);
        break;
    case 3:
        casora.get_de_string(sendstr);
        outstring=casora.de_cypto(offsett);
        break;
    }
    ui->textEdit->setText(outstring);
}
MainWindow::~MainWindow()
{
    delete ui;
}
