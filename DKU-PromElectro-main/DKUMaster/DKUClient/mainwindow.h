#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qcheckbox.h"
#include <QMainWindow>
#include <QModbusRtuSerialClient>
#include <QModbusReply>
#include <QTimer>
#include <zonealert.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    zoneAlert form;
    QModbusRtuSerialClient client;
    QModbusReply *repl;
    std::clock_t start_time;
    std::clock_t finish_time;
    int buff_time;
    std::vector<QCheckBox*> checks;

private slots:
    void readrequest();
    void replyread();
    void on_connect_clicked();
    void on_zone0Alert_released();
};
#endif // MAINWINDOW_H
