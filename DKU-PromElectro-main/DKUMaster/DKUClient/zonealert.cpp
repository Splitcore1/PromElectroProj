#include "zonealert.h"
#include "ui_zonealert.h"

zoneAlert::zoneAlert(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zoneAlert)
{
    ui->setupUi(this);
}

zoneAlert::~zoneAlert()
{
    delete ui;
}
