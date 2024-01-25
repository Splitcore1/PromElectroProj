/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lE_port1IP;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lE_port1Port;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lE_port2IP;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lE_port2Port;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *lb_port1Status;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *trainStatus;
    QPushButton *colorIndicate;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pB_port1Open;
    QPushButton *pB_port1Close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(570, 940);
        MainWindow->setMinimumSize(QSize(570, 940));
        MainWindow->setMaximumSize(QSize(570, 940));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 21, 25);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(61, 602, 464, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(160, 17));
        label_6->setMaximumSize(QSize(160, 17));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Inter")});
        font1.setPointSize(10);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_6);

        lE_port1IP = new QLineEdit(widget);
        lE_port1IP->setObjectName("lE_port1IP");
        lE_port1IP->setMinimumSize(QSize(300, 35));
        lE_port1IP->setMaximumSize(QSize(300, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Inter")});
        lE_port1IP->setFont(font2);
        lE_port1IP->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"border-radius: 5;"));

        horizontalLayout_2->addWidget(lE_port1IP);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(160, 17));
        label_7->setMaximumSize(QSize(160, 17));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_7);

        lE_port1Port = new QLineEdit(widget);
        lE_port1Port->setObjectName("lE_port1Port");
        lE_port1Port->setMinimumSize(QSize(300, 35));
        lE_port1Port->setMaximumSize(QSize(300, 35));
        lE_port1Port->setFont(font2);
        lE_port1Port->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"border-radius: 5;"));

        horizontalLayout_3->addWidget(lE_port1Port);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(160, 17));
        label_2->setMaximumSize(QSize(160, 17));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_2);

        lE_port2IP = new QLineEdit(widget);
        lE_port2IP->setObjectName("lE_port2IP");
        lE_port2IP->setMinimumSize(QSize(300, 35));
        lE_port2IP->setMaximumSize(QSize(300, 35));
        lE_port2IP->setFont(font2);
        lE_port2IP->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"border-radius: 5;"));

        horizontalLayout_4->addWidget(lE_port2IP);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(160, 17));
        label_8->setMaximumSize(QSize(160, 17));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_8);

        lE_port2Port = new QLineEdit(widget);
        lE_port2Port->setObjectName("lE_port2Port");
        lE_port2Port->setMinimumSize(QSize(300, 35));
        lE_port2Port->setMaximumSize(QSize(300, 35));
        lE_port2Port->setFont(font2);
        lE_port2Port->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"border-radius: 5;"));

        horizontalLayout_5->addWidget(lE_port2Port);


        verticalLayout->addLayout(horizontalLayout_5);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(60, 520, 382, 66));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(widget1);
        label_1->setObjectName("label_1");
        label_1->setMinimumSize(QSize(380, 34));
        label_1->setMaximumSize(QSize(380, 34));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Inter SemiBold")});
        font3.setPointSize(16);
        label_1->setFont(font3);
        label_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_1, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(69, 22));
        label_3->setMaximumSize(QSize(69, 22));
        label_3->setSizeIncrement(QSize(69, 22));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Inter SemiBold")});
        font4.setPointSize(13);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lb_port1Status = new QLabel(widget1);
        lb_port1Status->setObjectName("lb_port1Status");
        lb_port1Status->setMinimumSize(QSize(69, 22));
        lb_port1Status->setMaximumSize(QSize(69, 22));
        lb_port1Status->setSizeIncrement(QSize(69, 22));
        lb_port1Status->setFont(font4);
        lb_port1Status->setStyleSheet(QString::fromUtf8("color: rgb(238, 87, 87);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lb_port1Status);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(60, 50, 462, 437));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        trainStatus = new QPushButton(widget2);
        trainStatus->setObjectName("trainStatus");
        trainStatus->setMinimumSize(QSize(460, 45));
        trainStatus->setMaximumSize(QSize(460, 45));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Inter SemiBold")});
        font5.setPointSize(18);
        trainStatus->setFont(font5);
        trainStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: 2px solid white;\n"
"border-radius: 20px;"));

        verticalLayout_2->addWidget(trainStatus);

        colorIndicate = new QPushButton(widget2);
        colorIndicate->setObjectName("colorIndicate");
        colorIndicate->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorIndicate->sizePolicy().hasHeightForWidth());
        colorIndicate->setSizePolicy(sizePolicy);
        colorIndicate->setMinimumSize(QSize(460, 360));
        colorIndicate->setMaximumSize(QSize(460, 360));
        colorIndicate->setSizeIncrement(QSize(0, 0));
        colorIndicate->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background-image: url(:/new/icons/Icons/No_train.svg);\n"
""));

        verticalLayout_2->addWidget(colorIndicate);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(60, 810, 462, 52));
        horizontalLayout_6 = new QHBoxLayout(widget3);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pB_port1Open = new QPushButton(widget3);
        pB_port1Open->setObjectName("pB_port1Open");
        pB_port1Open->setMinimumSize(QSize(225, 50));
        pB_port1Open->setMaximumSize(QSize(225, 50));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Inter SemiBold")});
        font6.setPointSize(10);
        pB_port1Open->setFont(font6);
        pB_port1Open->setCursor(QCursor(Qt::PointingHandCursor));
        pB_port1Open->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 126, 207);\n"
"border-radius: 5;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 214, 255);\n"
"color: rgb(20, 20, 20);\n"
"border-radius: 5;\n"
"}"));

        horizontalLayout_6->addWidget(pB_port1Open);

        pB_port1Close = new QPushButton(widget3);
        pB_port1Close->setObjectName("pB_port1Close");
        pB_port1Close->setMinimumSize(QSize(225, 50));
        pB_port1Close->setMaximumSize(QSize(225, 50));
        pB_port1Close->setFont(font6);
        pB_port1Close->setCursor(QCursor(Qt::PointingHandCursor));
        pB_port1Close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 126, 207);\n"
"border-radius: 5;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 214, 255);\n"
"color: rgb(20, 20, 20);\n"
"border-radius: 5;\n"
"}"));

        horizontalLayout_6->addWidget(pB_port1Close);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 570, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "IP \320\260\320\264\321\200\320\265\321\201\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "UDP \320\277\320\276\321\200\321\202 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "IP \320\260\320\264\321\200\320\265\321\201 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "UDP \320\277\320\276\321\200\321\202 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\201\320\265\321\202\320\265\320\262\320\276\320\263\320\276 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        lb_port1Status->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202", nullptr));
        trainStatus->setText(QCoreApplication::translate("MainWindow", "\320\237\320\236\320\225\320\227\320\224\320\220 \320\235\320\225\320\242 \320\235\320\220 \320\243\320\247\320\220\320\241\320\242\320\232\320\225 \320\224\320\232\320\243", nullptr));
        colorIndicate->setText(QString());
        pB_port1Open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\201\320\276\320\272\320\265\321\202", nullptr));
        pB_port1Close->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \321\201\320\276\320\272\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
