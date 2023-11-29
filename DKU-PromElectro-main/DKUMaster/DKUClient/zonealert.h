#ifndef ZONEALERT_H
#define ZONEALERT_H

#include <QWidget>

namespace Ui {
class zoneAlert;
}

class zoneAlert : public QWidget
{
    Q_OBJECT

public:
    explicit zoneAlert(QWidget *parent = nullptr);
    ~zoneAlert();

private:
    Ui::zoneAlert *ui;
};

#endif // ZONEALERT_H
