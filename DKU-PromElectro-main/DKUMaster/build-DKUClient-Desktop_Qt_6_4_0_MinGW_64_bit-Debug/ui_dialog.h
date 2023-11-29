/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zoneAlert_0
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *zoneAlert_0)
    {
        if (zoneAlert_0->objectName().isEmpty())
            zoneAlert_0->setObjectName("zoneAlert_0");
        zoneAlert_0->resize(620, 300);
        buttonBox = new QDialogButtonBox(zoneAlert_0);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(220, 230, 161, 51));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(zoneAlert_0);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 40, 540, 180));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(zoneAlert_0);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, zoneAlert_0, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, zoneAlert_0, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(zoneAlert_0);
    } // setupUi

    void retranslateUi(QDialog *zoneAlert_0)
    {
        zoneAlert_0->setWindowTitle(QCoreApplication::translate("zoneAlert_0", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("zoneAlert_0", "\320\237\320\236\320\225\320\227\320\224 \320\222 \320\227\320\236\320\235\320\225 0!", nullptr));
        label_2->setText(QCoreApplication::translate("zoneAlert_0", "\320\222\320\235\320\230\320\234\320\220\320\235\320\230\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zoneAlert_0: public Ui_zoneAlert_0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
