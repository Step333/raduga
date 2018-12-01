#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *e)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int width = this->width();
    int height = this->height();
    QPainter painter(this);
    int d = height;
    QColor mas[] = {QColor::fromRgb(255,0,0), QColor::fromRgb(255,120,0), QColor::fromRgb(255,255,0), QColor::fromRgb(0,255,36), QColor::fromRgb(0,255,255), QColor::fromRgb(0,0,255), QColor::fromRgb(65,0,65)};
    for (int i = 0; i < 7; i++) {

        painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
        painter.setBrush(QBrush(mas[i]));
        painter.drawEllipse(0 + a, 0 + b, width + c, height + d);
        a += width / 14;
        b += height / 7;
        c -= 2 * width / 14;
        d -= height / 7;
    }
/*
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    painter.setBrush(QBrush(QColor::fromRgb(120,40,0)));
    painter.drawEllipse(0 + width / 14, 0 + height / 7, width - 2* width / 14, 2* height - height / 7);

    QPainter painter3(this);
    painter3.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    painter3.setBrush(QBrush(QColor::fromRgb(120,40,50)));
    painter3.drawEllipse(0 + height / 7 * 2, 0 + height / 14 * 2, width - height / 14 * 2, height + height - height / 7 * 2);

    QPainter painter4(this);
    painter4.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    painter4.setBrush(QBrush(QColor::fromRgb(120,40,50)));
    painter4.drawEllipse(0 + height / 7 * 3, 0 + height / 14 * 3, width - height / 14 * 3, height + height - height / 7 * 3);*/
}
