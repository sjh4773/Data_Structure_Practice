#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsTest.h"

class QtWidgetsTest : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsTestClass ui;

public slots:
    void on_btn_run(); // 버튼을 눌렀을 때 연결하는 함수
    void on_radio_run();
    void on_checkbox_run();
};
