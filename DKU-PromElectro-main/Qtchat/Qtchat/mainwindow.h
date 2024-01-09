#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pB_port1Open_clicked();

    void on_pB_port1Close_clicked();

    void on_pB_port1Send_clicked();

    void ReadyRead();

private:
    Ui::MainWindow *ui;
    QUdpSocket* m_socket;
};

#endif // MAINWINDOW_H
