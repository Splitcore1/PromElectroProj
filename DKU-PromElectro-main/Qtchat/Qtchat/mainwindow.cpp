#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_socket =new QUdpSocket(this);
    connect(m_socket,&QUdpSocket::readyRead,this,&MainWindow::ReadyRead);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pB_port1Open_clicked()
{
    QString Port;
     bool result;
    //считываем номер UDP-порта, введенный пользователем
     Port=ui->lE_port1Port->text();
    //считываем IP-адрес своего компьютера
     QHostAddress Address(ui->lE_port1IP->text());
    //пытаемся открыть сокет
     result=m_socket->bind(Address, Port.toInt());
    //если открыли успешно, то вывод сообщения
     if(result)
     {
        ui->lb_port1Status->setText("Открыт");
        ui->lb_port1Status->setStyleSheet("color: rgb(71, 255, 90)");
     }
     else
     {
        ui->lb_port1Status->setText("Ошибка");
        ui->lb_port1Status->setStyleSheet("color: rgb(238, 87, 87);");
     }
}


void MainWindow::on_pB_port1Close_clicked()
{
    m_socket->close();
     ui->lb_port1Status->setText("Закрыт");
     ui->lb_port1Status->setStyleSheet("color: rgb(238, 87, 87);");
}


void MainWindow::on_pB_port1Send_clicked()
{
    QString RemotePort;
     QByteArray mass;
     QString message, str;
    //взяли IP-адрес компьютера, которому хотим отправить сообщение
     QHostAddress RemoteAddress(ui->lE_port2IP->text());
    //взяли номер UDP-порта сокета на этом компьютере
     RemotePort =ui->lE_port2Port->text();
    //преобразовали введенные пользователем символы в последовательность байт
     mass = message.toUtf8();
    //отправили последовательность байт через сокет по адресу
     m_socket->writeDatagram(mass, RemoteAddress, RemotePort.toInt());
    //сформировать сообщение для показа в окне принятых и отправленных
    str = "Sended to "+RemoteAddress.toString()+":"+message;
    //показать отправленное сообщение в окне принятых и отправленных
     //ui->pTE_port1Recieved->appendPlainText(str);
}
void MainWindow::ReadyRead()
{
 QByteArray mass;
 unsigned short SenderPort;
 QHostAddress SenderAddress;
 QString ReadedData, str;
//узнать, сколько байт содержит принятый пакет и выделить под него место
 mass.resize(m_socket->pendingDatagramSize());
//считать содержимое пришедшего пакета в массив байтов
m_socket->readDatagram(mass.data(), mass.size(),&SenderAddress,&SenderPort);
if(mass.size()>0)
{
//преобразовать пришедшую последовательность байт в символы
 ReadedData=QString::fromUtf8(mass);
//сформировать сообщение для показа в окне принятых и отправленных
str = "Received from "+SenderAddress.toString()+":"+ReadedData;
//показать отправленное сообщение в окне принятых и отправленных
 //ui->pTE_port1Recieved->appendPlainText(ReadedData);
 if(ReadedData == "1")
 {
     ui->colorIndicate->setStyleSheet("background-image: url(:/new/icons/Icons/With_train.svg); border-radius: 30px;");
     ui->trainStatus->setText("ПОЕЗД НА УЧАСТКЕ ДКУ");
 }
 if(ReadedData == "0")
 {
     ui->colorIndicate->setStyleSheet("background-image: url(:/new/icons/Icons/No_train.svg); border-radius: 30px;");
     ui->trainStatus->setText("ПОЕЗДА НЕТ НА УЧАСТКЕ ДКУ");
 }
}
}
