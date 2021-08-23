#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsMy.h"

class QtWidgetsMy : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsMy(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsMyClass ui;


public slots:
    void on_btn_run(); // 버튼을 눌렀을 때 연결하는 함수
    void on_radio_run();
    void on_checkbox_run();
};
