#include "QtWidgetsMy.h"

static int cnt = 0;
static int cnt2 = 0;

QtWidgetsMy::QtWidgetsMy(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    
    // 디자인 파일의 객체(동작)와 C++ 함수(SLOT)를 연결
    
    connect(ui.btn_run, SIGNAL(clicked()), this, SLOT(on_btn_run()));
    
    
    connect(ui.radio_1, SIGNAL(clicked()), this, SLOT(on_radio_run));
    connect(ui.radio_2, SIGNAL(clicked()), this, SLOT(on_radio_run));
    connect(ui.radio_3, SIGNAL(clicked()), this, SLOT(on_radio_run));
    

    connect(ui.chk_1, SIGNAL(clicked()), this, SLOT(on_checkbox_run));
    connect(ui.chk_2, SIGNAL(clicked()), this, SLOT(on_checkbox_run));
    connect(ui.chk_3, SIGNAL(clicked()), this, SLOT(on_checkbox_run));




    // comboBox에 들어갈 메뉴를 추가
    //ui.comboBox->addItem("Option 1");
    //ui.comboBox->addItem("Option 2");
    //ui.comboBox->addItem("Option 3");
    //ui.comboBox->addItem("Option 4");
    //ui.comboBox->addItem("Option 5");
}



// 헤더 파일에서 선언한 함수를 정의
void QtWidgetsMy::on_btn_run()
{


    //cnt++;
    //cnt2 += 2;
    //ui.label->setNum(cnt);
    //ui.label->setText(QString::number(cnt));
    //ui.label->setText(QString("%1 %2").arg(cnt).arg(cnt2));
    

    //QString str;
    //str.sprintf("%d %d", cnt, cnt2);
    //ui.label->setText(str);

    
    // toggle
    //if (ui.btn_run->isChecked()) {
    //    ui.label->setText("Button State:Active");
    //}
    //else {
    //    ui.label->setText("Button State:unActive");
    //}


    
 
    //QString str; // string 타입으로 변수 선언
   


    // 선택한 콤보 박스 위치를 입력 받음
    // ui.comboBox->currentIndex()
    //str.sprintf("position : %d", ui.comboBox->currentIndex());
    //ui.label->setText(str);
    

    // comboBox
    //ui.label->setText(ui.comboBox->currentText());
 

    // comboBox
    //str.sprintf("position : %d", ui.comboBox->currentIndex());
    //ui.label->setText(str);
    //ui.label_2->setText(ui.comboBox->currentText());

    
    // comboBox
    //ui.label->setText(QString("position : %1 test : %2").arg(ui.comboBox->currentIndex()).arg(ui.comboBox->currentText()));

    
    
    // spinBox
    //ui.label->setText(ui.spinBox->cleanText());
    
    // spinBox
    //ui.label->setText(QString("Your age is %1 old").arg(ui.spinBox->cleanText()));


    // comboBox

    QString str1;
    str1.append(QString::fromLocal8Bit("당신의 나이는"));
    str1.append(QString("%1").arg(ui.spinBox->cleanText()));
    str1.append(QString::fromLocal8Bit("살 입니다."));
    ui.label_3->setText(str1);


    // Radio Box

    QString str2;

    if (ui.radio_1->isChecked()) {
        str2.append(QString::fromLocal8Bit("당신은 대구 출생입니다"));
    }

    if (ui.radio_2->isChecked()) {
        str2.append(QString::fromLocal8Bit("당신은 경북 출생입니다"));
    }

    if (ui.radio_3->isChecked()) {
        str2.append(QString::fromLocal8Bit("당신은 기타지역 출생입니다"));
    }

    ui.label->setText(str2);


    // Check Box

    QString str3;

    if (ui.chk_1->isChecked()) {
        str3.append(QString::fromLocal8Bit("당신의 취미는 스키입니다"));
    }

    if (ui.chk_2->isChecked()) {
        str3.append(QString::fromLocal8Bit("당신의 취미는 등산입니다"));
    }

    if (ui.chk_3->isChecked()) {
        str3.append(QString::fromLocal8Bit("당신의 취미는 요트입니다"));
    }

    ui.label_4->setText(str3);


}

void QtWidgetsMy::on_radio_run()
{

}

void QtWidgetsMy::on_checkbox_run()
{

}