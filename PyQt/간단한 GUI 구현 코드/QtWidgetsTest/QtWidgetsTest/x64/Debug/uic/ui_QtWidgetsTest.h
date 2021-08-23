/********************************************************************************
** Form generated from reading UI file 'QtWidgetsTest.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSTEST_H
#define UI_QTWIDGETSTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsTestClass
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_1;
    QRadioButton *radio_2;
    QRadioButton *radio_3;
    QPushButton *btn_run;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *chk_1;
    QCheckBox *chk_2;
    QCheckBox *chk_3;
    QCheckBox *chk_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_output1;
    QLabel *label_output2;
    QLabel *label_output3;
    QLabel *label_output4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsTestClass)
    {
        if (QtWidgetsTestClass->objectName().isEmpty())
            QtWidgetsTestClass->setObjectName(QString::fromUtf8("QtWidgetsTestClass"));
        QtWidgetsTestClass->resize(600, 400);
        centralWidget = new QWidget(QtWidgetsTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 30, 76, 22));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(290, 30, 81, 22));
        spinBox->setMinimum(1900);
        spinBox->setMaximum(2021);
        spinBox->setValue(1990);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(120, 100, 421, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radio_1 = new QRadioButton(horizontalLayoutWidget);
        radio_1->setObjectName(QString::fromUtf8("radio_1"));

        horizontalLayout->addWidget(radio_1);

        radio_2 = new QRadioButton(horizontalLayoutWidget);
        radio_2->setObjectName(QString::fromUtf8("radio_2"));

        horizontalLayout->addWidget(radio_2);

        radio_3 = new QRadioButton(horizontalLayoutWidget);
        radio_3->setObjectName(QString::fromUtf8("radio_3"));

        horizontalLayout->addWidget(radio_3);

        btn_run = new QPushButton(centralWidget);
        btn_run->setObjectName(QString::fromUtf8("btn_run"));
        btn_run->setGeometry(QRect(450, 30, 75, 23));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 170, 271, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chk_1 = new QCheckBox(verticalLayoutWidget);
        chk_1->setObjectName(QString::fromUtf8("chk_1"));

        verticalLayout->addWidget(chk_1);

        chk_2 = new QCheckBox(verticalLayoutWidget);
        chk_2->setObjectName(QString::fromUtf8("chk_2"));

        verticalLayout->addWidget(chk_2);

        chk_3 = new QCheckBox(verticalLayoutWidget);
        chk_3->setObjectName(QString::fromUtf8("chk_3"));

        verticalLayout->addWidget(chk_3);

        chk_4 = new QCheckBox(verticalLayoutWidget);
        chk_4->setObjectName(QString::fromUtf8("chk_4"));

        verticalLayout->addWidget(chk_4);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 56, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 40, 56, 12));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 56, 12));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 111, 51));
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 280, 561, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_output1 = new QLabel(horizontalLayoutWidget_2);
        label_output1->setObjectName(QString::fromUtf8("label_output1"));

        horizontalLayout_2->addWidget(label_output1);

        label_output2 = new QLabel(horizontalLayoutWidget_2);
        label_output2->setObjectName(QString::fromUtf8("label_output2"));

        horizontalLayout_2->addWidget(label_output2);

        label_output3 = new QLabel(horizontalLayoutWidget_2);
        label_output3->setObjectName(QString::fromUtf8("label_output3"));

        horizontalLayout_2->addWidget(label_output3);

        label_output4 = new QLabel(horizontalLayoutWidget_2);
        label_output4->setObjectName(QString::fromUtf8("label_output4"));

        horizontalLayout_2->addWidget(label_output4);

        QtWidgetsTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtWidgetsTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsTestClass->setStatusBar(statusBar);

        retranslateUi(QtWidgetsTestClass);

        QMetaObject::connectSlotsByName(QtWidgetsTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsTestClass)
    {
        QtWidgetsTestClass->setWindowTitle(QCoreApplication::translate("QtWidgetsTestClass", "\354\204\234\354\247\200\355\233\210", nullptr));
        radio_1->setText(QCoreApplication::translate("QtWidgetsTestClass", "\352\262\275\352\270\260", nullptr));
        radio_2->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\204\234\354\232\270", nullptr));
        radio_3->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\266\251\354\262\255", nullptr));
        btn_run->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\227\205\353\215\260\354\235\264\355\212\270", nullptr));
        chk_1->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\230\201\355\231\224\353\263\264\352\270\260", nullptr));
        chk_2->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\232\264\353\217\231", nullptr));
        chk_3->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\235\214\354\225\205\352\260\220\354\203\201", nullptr));
        chk_4->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\225\240\354\231\204\353\217\231\353\254\274", nullptr));
        label_2->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\204\261\353\263\204:", nullptr));
        label_3->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\266\234\354\203\235\353\205\204\353\217\204", nullptr));
        label_4->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\266\234\354\203\235\354\247\200:", nullptr));
        label_5->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\267\250\353\257\270(\353\263\265\354\210\230\354\204\240\355\203\235\352\260\200\353\212\245)", nullptr));
        label_output1->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\204\261\353\263\204", nullptr));
        label_output2->setText(QCoreApplication::translate("QtWidgetsTestClass", "\353\202\230\354\235\264", nullptr));
        label_output3->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\266\234\354\203\235\354\247\200", nullptr));
        label_output4->setText(QCoreApplication::translate("QtWidgetsTestClass", "\354\267\250\353\257\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsTestClass: public Ui_QtWidgetsTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSTEST_H
