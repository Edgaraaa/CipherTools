#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui/QLabel>
#include <QMessageBox>
#include <QtGui/QAction>
#include <QtGui/QDialog>
#include <QtGui/QButtonGroup>
#include <QDebug>
namespace Ui {
class MainWindow;
}
class QAction;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void abortMe();
    int slots_type_of_cipher();
    void En_cipher();
    void De_cipher();
private:
    Ui::MainWindow *ui;
    QAction *abortAction;
    QButtonGroup *groupButton1;

};

#endif // MAINWINDOW_H
