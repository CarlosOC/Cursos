#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Reloj Digital");
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::showTime);
    timer->start(1000);//ms

    showTime();


  //  resize(150, 60);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    ui->lcdNumber->display(text);

}
