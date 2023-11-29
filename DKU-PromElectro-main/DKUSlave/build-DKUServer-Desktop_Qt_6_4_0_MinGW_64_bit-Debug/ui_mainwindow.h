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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *speedEdit;
    QCheckBox *r32_2;
    QCheckBox *r32_9;
    QCheckBox *r32_12;
    QCheckBox *r32_8;
    QCheckBox *r32_15;
    QLabel *label_3;
    QCheckBox *r32_14;
    QCheckBox *r32_0;
    QCheckBox *r32_3;
    QLineEdit *script_address;
    QCheckBox *r32_11;
    QLabel *label_2;
    QComboBox *comports;
    QPushButton *connect;
    QLabel *label;
    QPushButton *choose_file;
    QCheckBox *r32_13;
    QLineEdit *axis_amount;
    QCheckBox *r32_4;
    QCheckBox *r32_1;
    QCheckBox *r32_10;
    QLineEdit *sen_adr;
    QPushButton *initialize;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(545, 623);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        speedEdit = new QLineEdit(centralwidget);
        speedEdit->setObjectName("speedEdit");
        speedEdit->setAutoFillBackground(false);
        speedEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(speedEdit, 3, 1, 1, 1);

        r32_2 = new QCheckBox(centralwidget);
        r32_2->setObjectName("r32_2");
        r32_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_2, 8, 0, 1, 2);

        r32_9 = new QCheckBox(centralwidget);
        r32_9->setObjectName("r32_9");
        r32_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_9, 12, 0, 1, 2);

        r32_12 = new QCheckBox(centralwidget);
        r32_12->setObjectName("r32_12");
        r32_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_12, 15, 0, 1, 2);

        r32_8 = new QCheckBox(centralwidget);
        r32_8->setObjectName("r32_8");
        r32_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_8, 11, 0, 1, 2);

        r32_15 = new QCheckBox(centralwidget);
        r32_15->setObjectName("r32_15");
        r32_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_15, 18, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 19, 0, 1, 4);

        r32_14 = new QCheckBox(centralwidget);
        r32_14->setObjectName("r32_14");
        r32_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_14, 17, 0, 1, 2);

        r32_0 = new QCheckBox(centralwidget);
        r32_0->setObjectName("r32_0");
        r32_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_0, 4, 0, 1, 2);

        r32_3 = new QCheckBox(centralwidget);
        r32_3->setObjectName("r32_3");
        r32_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_3, 9, 0, 1, 2);

        script_address = new QLineEdit(centralwidget);
        script_address->setObjectName("script_address");
        script_address->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(script_address, 20, 0, 1, 1);

        r32_11 = new QCheckBox(centralwidget);
        r32_11->setObjectName("r32_11");
        r32_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_11, 14, 0, 1, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        comports = new QComboBox(centralwidget);
        comports->setObjectName("comports");
        comports->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(comports, 0, 0, 1, 1);

        connect = new QPushButton(centralwidget);
        connect->setObjectName("connect");
        connect->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(connect, 1, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        choose_file = new QPushButton(centralwidget);
        choose_file->setObjectName("choose_file");
        choose_file->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(choose_file, 20, 1, 1, 1);

        r32_13 = new QCheckBox(centralwidget);
        r32_13->setObjectName("r32_13");
        r32_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_13, 16, 0, 1, 2);

        axis_amount = new QLineEdit(centralwidget);
        axis_amount->setObjectName("axis_amount");
        axis_amount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(axis_amount, 2, 1, 1, 1);

        r32_4 = new QCheckBox(centralwidget);
        r32_4->setObjectName("r32_4");
        r32_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_4, 10, 0, 1, 2);

        r32_1 = new QCheckBox(centralwidget);
        r32_1->setObjectName("r32_1");
        r32_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_1, 7, 0, 1, 2);

        r32_10 = new QCheckBox(centralwidget);
        r32_10->setObjectName("r32_10");
        r32_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(r32_10, 13, 0, 1, 2);

        sen_adr = new QLineEdit(centralwidget);
        sen_adr->setObjectName("sen_adr");
        sen_adr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(sen_adr, 0, 1, 1, 1);

        initialize = new QPushButton(centralwidget);
        initialize->setObjectName("initialize");
        initialize->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(initialize, 21, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 545, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\224\320\232\320\243-02 \320\255\320\274\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        r32_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\321\207\320\265\321\202\320\260", nullptr));
        r32_9->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\224\320\232\320\243", nullptr));
        r32_12->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\276\321\200\320\276\320\275\320\275\320\265\320\265 \320\262\320\276\320\267\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 \320\275\320\260 \320\224\320\232\320\243", nullptr));
        r32_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260", nullptr));
        r32_15->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\264\320\273\320\265\320\275\320\275\320\276\320\265 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\320\265 \320\272\320\276\320\273\320\265\321\201\320\260 \320\275\320\260\320\264 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\274", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \320\270\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270 .json \321\201\320\272\321\200\320\270\320\277\321\202\320\276\320\262", nullptr));
        r32_14->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265 \321\201\320\270\320\263\320\275\320\260\320\273\320\276\320\262 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\276\320\262 \320\276\321\202 \320\275\320\276\321\200\320\274\321\213", nullptr));
        r32_0->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\272\320\276\320\273\320\265\321\201\320\260 \320\262 \320\267\320\276\320\275\320\265 0", nullptr));
        r32_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\276 \320\277\320\276\320\273\320\276\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\321\205\320\276\320\264\320\260 \320\272\320\276\320\273\320\265\321\201\320\260", nullptr));
        r32_11->setText(QCoreApplication::translate("MainWindow", "\320\247\321\203\320\262\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\275\320\270\320\266\320\265 \320\275\320\276\321\200\320\274\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270:", nullptr));
        comports->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 COM-\320\277\320\276\321\200\321\202", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\264\320\273\321\217 \321\201\321\207\320\265\321\202\321\207\320\270\320\272\320\260 \320\276\321\201\320\265\320\271:", nullptr));
        choose_file->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273...", nullptr));
        r32_13->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\277\320\276\321\201\321\202\320\276\321\200\320\276\320\275\320\275\320\265\320\263\320\276 \320\274\320\265\321\202\320\260\320\273\320\273\320\260 \320\262 \320\267\320\276\320\275\320\265 \320\224\320\232\320\243", nullptr));
        r32_4->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\276 \320\276\321\202\321\200\320\270\321\206\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\321\205\320\276\320\264\320\260 \320\272\320\276\320\273\320\265\321\201\320\260", nullptr));
        r32_1->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\272\320\276\320\273\320\265\321\201\320\260 \320\262 \320\267\320\276\320\275\320\265 1", nullptr));
        r32_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\212\320\265\320\274 \320\224\320\232\320\243", nullptr));
        sen_adr->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201 \321\201\320\265\320\275\321\201\320\276\321\200\320\260", nullptr));
        initialize->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\270\321\206\320\270\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
