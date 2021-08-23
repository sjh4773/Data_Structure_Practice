/********************************************************************************
** Form generated from reading UI file 'QtWidgetsMy.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSMY_H
#define UI_QTWIDGETSMY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_QtWidgetsMyClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *btn_run;
    QSpinBox *spinBox;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_1;
    QRadioButton *radio_2;
    QRadioButton *radio_3;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *chk_1;
    QCheckBox *chk_2;
    QCheckBox *chk_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsMyClass)
    {
        if (QtWidgetsMyClass->objectName().isEmpty())
            QtWidgetsMyClass->setObjectName(QString::fromUtf8("QtWidgetsMyClass"));
        QtWidgetsMyClass->resize(600, 400);
        centralWidget = new QWidget(QtWidgetsMyClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 220, 381, 16));
        btn_run = new QPushButton(centralWidget);
        btn_run->setObjectName(QString::fromUtf8("btn_run"));
        btn_run->setGeometry(QRect(200, 320, 200, 23));
        btn_run->setCheckable(true);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(180, 10, 181, 22));
        spinBox->setMaximum(95);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 20, 56, 12));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 40, 401, 61));
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

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 250, 401, 16));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 120, 401, 80));
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

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 280, 401, 16));
        QtWidgetsMyClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsMyClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtWidgetsMyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsMyClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtWidgetsMyClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsMyClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtWidgetsMyClass->setStatusBar(statusBar);

        retranslateUi(QtWidgetsMyClass);

        QMetaObject::connectSlotsByName(QtWidgetsMyClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsMyClass)
    {
        QtWidgetsMyClass->setWindowTitle(QCoreApplication::translate("QtWidgetsMyClass", "QtWidgetsMy", nullptr));
        label->setText(QCoreApplication::translate("QtWidgetsMyClass", "\353\202\230\354\235\264", nullptr));
        btn_run->setText(QCoreApplication::translate("QtWidgetsMyClass", "\353\262\204\355\212\274", nullptr));
        label_2->setText(QCoreApplication::translate("QtWidgetsMyClass", "\353\202\230\354\235\264 \354\204\240\355\203\235 :", nullptr));
        radio_1->setText(QCoreApplication::translate("QtWidgetsMyClass", "\353\214\200\352\265\254", nullptr));
        radio_2->setText(QCoreApplication::translate("QtWidgetsMyClass", "\352\262\275\353\266\201", nullptr));
        radio_3->setText(QCoreApplication::translate("QtWidgetsMyClass", "\352\270\260\355\203\200", nullptr));
        label_3->setText(QCoreApplication::translate("QtWidgetsMyClass", "\354\202\254\353\212\224\352\263\263", nullptr));
        chk_1->setText(QCoreApplication::translate("QtWidgetsMyClass", "\354\212\244\355\202\244", nullptr));
        chk_2->setText(QCoreApplication::translate("QtWidgetsMyClass", "\353\223\261\354\202\260", nullptr));
        chk_3->setText(QCoreApplication::translate("QtWidgetsMyClass", "\354\232\224\355\212\270", nullptr));
        label_4->setText(QCoreApplication::translate("QtWidgetsMyClass", "\354\267\250\353\257\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsMyClass: public Ui_QtWidgetsMyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSMY_H
