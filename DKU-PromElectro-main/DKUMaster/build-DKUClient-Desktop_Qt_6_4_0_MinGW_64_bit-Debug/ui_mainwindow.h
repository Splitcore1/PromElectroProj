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
#include <QtWidgets/QDial>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QComboBox *comports;
    QLabel *label_2;
    QLineEdit *sen_adr;
    QDial *zone_2;
    QDial *zone_0;
    QLabel *label_6;
    QLabel *label_11;
    QLineEdit *tm_disp;
    QLabel *slow_pass;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_5;
    QSlider *Speedom;
    QLabel *label_9;
    QLabel *label_10;
    QCheckBox *r32_4;
    QCheckBox *r32_3;
    QLabel *negative_pass;
    QLabel *positive_pass;
    QDial *zone_1;
    QPushButton *connect;
    QLabel *label;
    QLineEdit *axis_counter;
    QLineEdit *Speed_in;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *r32_12;
    QCheckBox *r32_14;
    QCheckBox *r32_13;
    QCheckBox *r32_2;
    QCheckBox *r32_10;
    QCheckBox *r32_8;
    QCheckBox *r32_11;
    QCheckBox *r32_9;
    QDial *zone0Alert;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(888, 632);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(888, 632));
        MainWindow->setMaximumSize(QSize(888, 632));
        QFont font;
        font.setPointSize(10);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 42, 62);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(9, 107, 371, 22));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        comports = new QComboBox(centralwidget);
        comports->setObjectName("comports");
        comports->setGeometry(QRect(66, 39, 221, 26));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comports->sizePolicy().hasHeightForWidth());
        comports->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        comports->setFont(font2);
        comports->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 129, 182);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(9, 9, 871, 26));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tahoma")});
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setUnderline(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        sen_adr = new QLineEdit(centralwidget);
        sen_adr->setObjectName("sen_adr");
        sen_adr->setGeometry(QRect(305, 40, 261, 25));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sen_adr->sizePolicy().hasHeightForWidth());
        sen_adr->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setPointSize(10);
        sen_adr->setFont(font4);
        sen_adr->setStyleSheet(QString::fromUtf8("color: rgb(191, 191, 191);"));
        zone_2 = new QDial(centralwidget);
        zone_2->setObjectName("zone_2");
        zone_2->setGeometry(QRect(400, 420, 91, 91));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(zone_2->sizePolicy().hasHeightForWidth());
        zone_2->setSizePolicy(sizePolicy5);
        QFont font5;
        font5.setKerning(true);
        zone_2->setFont(font5);
        zone_2->setStyleSheet(QString::fromUtf8(""));
        zone_2->setMinimum(50);
        zone_2->setMaximum(50);
        zone_2->setSliderPosition(50);
        zone_2->setOrientation(Qt::Horizontal);
        zone_2->setInvertedAppearance(false);
        zone_2->setInvertedControls(false);
        zone_2->setNotchesVisible(false);
        zone_0 = new QDial(centralwidget);
        zone_0->setObjectName("zone_0");
        zone_0->setGeometry(QRect(164, 418, 91, 91));
        sizePolicy5.setHeightForWidth(zone_0->sizePolicy().hasHeightForWidth());
        zone_0->setSizePolicy(sizePolicy5);
        QFont font6;
        font6.setPointSize(9);
        font6.setKerning(true);
        zone_0->setFont(font6);
        zone_0->setStyleSheet(QString::fromUtf8(""));
        zone_0->setSliderPosition(0);
        zone_0->setOrientation(Qt::Horizontal);
        zone_0->setNotchesVisible(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(133, 509, 621, 31));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);
        QFont font7;
        font7.setPointSize(17);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setUnderline(true);
        font7.setStrikeOut(true);
        font7.setKerning(false);
        font7.setStyleStrategy(QFont::PreferDefault);
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));
        label_6->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(410, 80, 301, 23));
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);
        QFont font8;
        font8.setPointSize(11);
        font8.setBold(true);
        label_11->setFont(font8);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tm_disp = new QLineEdit(centralwidget);
        tm_disp->setObjectName("tm_disp");
        tm_disp->setGeometry(QRect(711, 80, 91, 30));
        sizePolicy1.setHeightForWidth(tm_disp->sizePolicy().hasHeightForWidth());
        tm_disp->setSizePolicy(sizePolicy1);
        QFont font9;
        font9.setPointSize(13);
        tm_disp->setFont(font9);
        tm_disp->setCursor(QCursor(Qt::ArrowCursor));
        tm_disp->setStyleSheet(QString::fromUtf8("color: rgb(186, 186, 186);"));
        slow_pass = new QLabel(centralwidget);
        slow_pass->setObjectName("slow_pass");
        slow_pass->setGeometry(QRect(440, 290, 391, 20));
        slow_pass->setFont(font1);
        slow_pass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        slow_pass->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(650, 550, 41, 18));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        QFont font10;
        font10.setPointSize(10);
        font10.setBold(true);
        label_8->setFont(font10);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(190, 550, 41, 18));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font10);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(449, 191, 181, 23));
        QFont font11;
        font11.setPointSize(13);
        font11.setBold(true);
        label_5->setFont(font11);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Speedom = new QSlider(centralwidget);
        Speedom->setObjectName("Speedom");
        Speedom->setEnabled(false);
        Speedom->setGeometry(QRect(393, 232, 481, 20));
        sizePolicy1.setHeightForWidth(Speedom->sizePolicy().hasHeightForWidth());
        Speedom->setSizePolicy(sizePolicy1);
        Speedom->setFont(font9);
        Speedom->setMaximum(200);
        Speedom->setOrientation(Qt::Horizontal);
        Speedom->setTickPosition(QSlider::TicksBelow);
        Speedom->setTickInterval(10);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(393, 260, 16, 23));
        label_9->setFont(font9);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(850, 260, 27, 23));
        label_10->setFont(font9);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        r32_4 = new QCheckBox(centralwidget);
        r32_4->setObjectName("r32_4");
        r32_4->setEnabled(true);
        r32_4->setGeometry(QRect(10, 390, 71, 24));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(r32_4->sizePolicy().hasHeightForWidth());
        r32_4->setSizePolicy(sizePolicy6);
        r32_4->setFont(font4);
        r32_3 = new QCheckBox(centralwidget);
        r32_3->setObjectName("r32_3");
        r32_3->setEnabled(true);
        r32_3->setGeometry(QRect(10, 430, 71, 24));
        sizePolicy6.setHeightForWidth(r32_3->sizePolicy().hasHeightForWidth());
        r32_3->setSizePolicy(sizePolicy6);
        r32_3->setFont(font4);
        negative_pass = new QLabel(centralwidget);
        negative_pass->setObjectName("negative_pass");
        negative_pass->setGeometry(QRect(380, 380, 69, 26));
        sizePolicy3.setHeightForWidth(negative_pass->sizePolicy().hasHeightForWidth());
        negative_pass->setSizePolicy(sizePolicy3);
        QFont font12;
        font12.setPointSize(14);
        font12.setBold(true);
        font12.setItalic(false);
        font12.setStrikeOut(false);
        negative_pass->setFont(font12);
        negative_pass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        negative_pass->setAlignment(Qt::AlignCenter);
        positive_pass = new QLabel(centralwidget);
        positive_pass->setObjectName("positive_pass");
        positive_pass->setGeometry(QRect(440, 380, 69, 26));
        sizePolicy3.setHeightForWidth(positive_pass->sizePolicy().hasHeightForWidth());
        positive_pass->setSizePolicy(sizePolicy3);
        positive_pass->setFont(font12);
        positive_pass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        positive_pass->setAlignment(Qt::AlignCenter);
        zone_1 = new QDial(centralwidget);
        zone_1->setObjectName("zone_1");
        zone_1->setGeometry(QRect(640, 420, 91, 91));
        sizePolicy5.setHeightForWidth(zone_1->sizePolicy().hasHeightForWidth());
        zone_1->setSizePolicy(sizePolicy5);
        zone_1->setFont(font5);
        zone_1->setSliderPosition(0);
        zone_1->setOrientation(Qt::Horizontal);
        zone_1->setInvertedAppearance(true);
        zone_1->setNotchesVisible(false);
        connect = new QPushButton(centralwidget);
        connect->setObjectName("connect");
        connect->setGeometry(QRect(580, 40, 221, 26));
        sizePolicy4.setHeightForWidth(connect->sizePolicy().hasHeightForWidth());
        connect->setSizePolicy(sizePolicy4);
        connect->setFont(font10);
        connect->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(76, 95, 170);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 150, 181, 23));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font11);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        axis_counter = new QLineEdit(centralwidget);
        axis_counter->setObjectName("axis_counter");
        axis_counter->setGeometry(QRect(640, 150, 191, 30));
        sizePolicy1.setHeightForWidth(axis_counter->sizePolicy().hasHeightForWidth());
        axis_counter->setSizePolicy(sizePolicy1);
        axis_counter->setFont(font9);
        axis_counter->setCursor(QCursor(Qt::ArrowCursor));
        axis_counter->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        Speed_in = new QLineEdit(centralwidget);
        Speed_in->setObjectName("Speed_in");
        Speed_in->setGeometry(QRect(640, 190, 191, 30));
        sizePolicy1.setHeightForWidth(Speed_in->sizePolicy().hasHeightForWidth());
        Speed_in->setSizePolicy(sizePolicy1);
        Speed_in->setFont(font9);
        Speed_in->setCursor(QCursor(Qt::ArrowCursor));
        Speed_in->setStyleSheet(QString::fromUtf8("color: rgb(186, 186, 186);"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 140, 351, 236));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        r32_12 = new QCheckBox(verticalLayoutWidget);
        r32_12->setObjectName("r32_12");
        r32_12->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_12->sizePolicy().hasHeightForWidth());
        r32_12->setSizePolicy(sizePolicy1);
        r32_12->setFont(font4);
        r32_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_12);

        r32_14 = new QCheckBox(verticalLayoutWidget);
        r32_14->setObjectName("r32_14");
        r32_14->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_14->sizePolicy().hasHeightForWidth());
        r32_14->setSizePolicy(sizePolicy1);
        r32_14->setFont(font4);
        r32_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_14);

        r32_13 = new QCheckBox(verticalLayoutWidget);
        r32_13->setObjectName("r32_13");
        r32_13->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_13->sizePolicy().hasHeightForWidth());
        r32_13->setSizePolicy(sizePolicy1);
        r32_13->setFont(font4);
        r32_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_13);

        r32_2 = new QCheckBox(verticalLayoutWidget);
        r32_2->setObjectName("r32_2");
        r32_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_2->sizePolicy().hasHeightForWidth());
        r32_2->setSizePolicy(sizePolicy1);
        r32_2->setFont(font4);
        r32_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_2);

        r32_10 = new QCheckBox(verticalLayoutWidget);
        r32_10->setObjectName("r32_10");
        r32_10->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_10->sizePolicy().hasHeightForWidth());
        r32_10->setSizePolicy(sizePolicy1);
        r32_10->setFont(font4);
        r32_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_10);

        r32_8 = new QCheckBox(verticalLayoutWidget);
        r32_8->setObjectName("r32_8");
        r32_8->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_8->sizePolicy().hasHeightForWidth());
        r32_8->setSizePolicy(sizePolicy1);
        r32_8->setFont(font4);
        r32_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_8);

        r32_11 = new QCheckBox(verticalLayoutWidget);
        r32_11->setObjectName("r32_11");
        r32_11->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_11->sizePolicy().hasHeightForWidth());
        r32_11->setSizePolicy(sizePolicy1);
        r32_11->setFont(font4);
        r32_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_11);

        r32_9 = new QCheckBox(verticalLayoutWidget);
        r32_9->setObjectName("r32_9");
        r32_9->setEnabled(true);
        sizePolicy1.setHeightForWidth(r32_9->sizePolicy().hasHeightForWidth());
        r32_9->setSizePolicy(sizePolicy1);
        r32_9->setFont(font4);
        r32_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(r32_9);

        zone0Alert = new QDial(centralwidget);
        zone0Alert->setObjectName("zone0Alert");
        zone0Alert->setGeometry(QRect(710, 340, 50, 64));
        zone0Alert->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 4);\n"
"color: rgb(255, 0, 4);\n"
"alternate-background-color: rgb(255, 0, 4);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 888, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\224\320\232\320\243-02 \320\232\320\273\320\270\320\265\320\275\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\320\260\320\263\320\275\320\276\321\201\321\202\320\270\320\272\320\260 \320\270 \321\215\320\272\321\201\320\277\320\273\321\203\320\260\321\202\320\260\321\206\320\270\320\276\320\275\320\275\321\213\320\265 \320\277\321\200\320\270\320\267\320\275\320\260\320\272\320\270:", nullptr));
        comports->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 COM-\320\277\320\276\321\200\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\220\320\242\320\247\320\230\320\232 \320\232\320\236\320\233\320\225\320\241\320\220 \320\243\320\235\320\230\320\244\320\230\320\246\320\230\320\240\320\236\320\222\320\220\320\235\320\235\320\253\320\231 \320\224\320\232\320\243-02", nullptr));
        sen_adr->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201 \320\264\320\260\321\202\321\207\320\270\320\272\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "---------------------------------------------------------------------", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201 \320\274\320\276\320\274\320\265\320\275\321\202\320\260 \320\267\320\260\320\277\321\203\321\201\320\272\320\260 \320\264\320\260\321\202\321\207\320\270\320\272\320\260 (\321\201\320\265\320\272):", nullptr));
        slow_pass->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\264\320\273\320\265\320\275\320\275\320\276\320\265 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\320\265 \320\272\320\276\320\273\320\265\321\201\320\260 \320\275\320\260\320\264 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\274!", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\275\320\260 1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\275\320\260 0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 :", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        r32_4->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\276 \320\276\321\202\321\200\320\270\321\206\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\321\205\320\276\320\264\320\260 \320\272\320\276\320\273\320\265\321\201\320\260", nullptr));
        r32_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\276 \320\277\320\276\320\273\320\276\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\321\205\320\276\320\264\320\260 \320\272\320\276\320\273\320\265\321\201\320\260", nullptr));
        negative_pass->setText(QCoreApplication::translate("MainWindow", "<-------", nullptr));
        positive_pass->setText(QCoreApplication::translate("MainWindow", "------->", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \320\276\321\201\320\265\320\271:", nullptr));
        r32_12->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\276\321\200\320\276\320\275\320\275\320\265\320\265 \320\262\320\276\320\267\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265 \320\275\320\260 \320\224\320\232\320\243", nullptr));
        r32_14->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265 \321\201\320\270\320\263\320\275\320\260\320\273\320\276\320\262 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\276\320\262 \320\276\321\202 \320\275\320\276\321\200\320\274\321\213", nullptr));
        r32_13->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\277\320\276\321\201\321\202\320\276\321\200\320\276\320\275\320\275\320\265\320\263\320\276 \320\274\320\265\321\202\320\260\320\273\320\273\320\260 \320\262 \320\267\320\276\320\275\320\265 \320\224\320\232\320\243", nullptr));
        r32_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\321\207\320\265\321\202\320\260", nullptr));
        r32_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\212\320\265\320\274 \320\224\320\232\320\243", nullptr));
        r32_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260", nullptr));
        r32_11->setText(QCoreApplication::translate("MainWindow", "\320\247\321\203\320\262\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\275\320\270\320\266\320\265 \320\275\320\276\321\200\320\274\321\213", nullptr));
        r32_9->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\270\321\201\320\277\321\200\320\260\320\262\320\275\320\276\321\201\321\202\321\214 \320\224\320\232\320\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
