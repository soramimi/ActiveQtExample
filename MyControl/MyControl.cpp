#include "MyControl.h"
#include "ui_MyControl.h"
#include <QPainter>

MyControl::MyControl(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::MyControl)
{
	ui->setupUi(this);
}

MyControl::~MyControl()
{
	delete ui;
}

void MyControl::paintEvent(QPaintEvent *)
{
	QPainter pr(this);
	pr.drawEllipse(0, 0, width() - 1, height() - 1);
}
