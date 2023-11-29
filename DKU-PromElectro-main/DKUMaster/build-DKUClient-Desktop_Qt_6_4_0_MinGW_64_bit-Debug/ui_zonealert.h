/********************************************************************************
** Form generated from reading UI file 'zonealert.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZONEALERT_H
#define UI_ZONEALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zoneAlert
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *zoneAlert)
    {
        if (zoneAlert->objectName().isEmpty())
            zoneAlert->setObjectName("zoneAlert");
        zoneAlert->resize(506, 285);
        widget = new QWidget(zoneAlert);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 70, 338, 128));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gilroy")});
        font.setPointSize(36);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(zoneAlert);

        QMetaObject::connectSlotsByName(zoneAlert);
    } // setupUi

    void retranslateUi(QWidget *zoneAlert)
    {
        zoneAlert->setWindowTitle(QCoreApplication::translate("zoneAlert", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("zoneAlert", "\320\237\320\276\320\265\320\267\320\264 \320\262 \320\267\320\276\320\275\320\265 0", nullptr));
        label->setText(QCoreApplication::translate("zoneAlert", "\320\222\320\235\320\230\320\234\320\220\320\235\320\230\320\225!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zoneAlert: public Ui_zoneAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZONEALERT_H
