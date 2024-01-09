/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QPlainTextEdit *pTE_port1Recieved;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lE_port1Port;
    QLineEdit *lE_port1IP;
    QPushButton *pB_port1Open;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *lE_port2Port;
    QPushButton *pB_port1Close;
    QLineEdit *lE_port2IP;
    QLabel *label_7;
    QLabel *lb_port1Status;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(361, 534);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(26);
        label_11->setFont(font);
        label_11->setLayoutDirection(Qt::LeftToRight);
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_11);

        pTE_port1Recieved = new QPlainTextEdit(centralwidget);
        pTE_port1Recieved->setObjectName("pTE_port1Recieved");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pTE_port1Recieved->sizePolicy().hasHeightForWidth());
        pTE_port1Recieved->setSizePolicy(sizePolicy1);
        pTE_port1Recieved->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_5->addWidget(pTE_port1Recieved);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(6);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        lE_port1Port = new QLineEdit(centralwidget);
        lE_port1Port->setObjectName("lE_port1Port");

        gridLayout_2->addWidget(lE_port1Port, 3, 1, 1, 1);

        lE_port1IP = new QLineEdit(centralwidget);
        lE_port1IP->setObjectName("lE_port1IP");

        gridLayout_2->addWidget(lE_port1IP, 2, 1, 1, 1);

        pB_port1Open = new QPushButton(centralwidget);
        pB_port1Open->setObjectName("pB_port1Open");

        gridLayout_2->addWidget(pB_port1Open, 16, 0, 1, 3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 1, 4, 1, 1);

        label_1 = new QLabel(centralwidget);
        label_1->setObjectName("label_1");

        gridLayout_2->addWidget(label_1, 1, 0, 1, 3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 4, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        lE_port2Port = new QLineEdit(centralwidget);
        lE_port2Port->setObjectName("lE_port2Port");

        gridLayout_2->addWidget(lE_port2Port, 5, 1, 1, 1);

        pB_port1Close = new QPushButton(centralwidget);
        pB_port1Close->setObjectName("pB_port1Close");

        gridLayout_2->addWidget(pB_port1Close, 17, 0, 1, 3);

        lE_port2IP = new QLineEdit(centralwidget);
        lE_port2IP->setObjectName("lE_port2IP");

        gridLayout_2->addWidget(lE_port2IP, 4, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        lb_port1Status = new QLabel(centralwidget);
        lb_port1Status->setObjectName("lb_port1Status");

        gridLayout_2->addWidget(lb_port1Status, 6, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 361, 21));
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
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\225\321\201\321\202\321\214 \320\277\320\276\320\265\320\267\320\264 \320\270\320\273\320\270 \320\275\320\265\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "IP \320\260\320\264\321\200\320\265\321\201\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        pB_port1Open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\201\320\276\320\272\320\265\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        label_5->setText(QString());
        label_1->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\201\320\265\321\202\320\265\320\262\320\276\320\263\320\276 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "IP \320\260\320\264\321\200\320\265\321\201 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "UDP \320\277\320\276\321\200\321\202 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        pB_port1Close->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \321\201\320\276\320\272\320\265\321\202", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "UDP \320\277\320\276\321\200\321\202 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        lb_port1Status->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
