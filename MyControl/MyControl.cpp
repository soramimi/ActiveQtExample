#include "MyControl.h"
#include "ui_MyControl.h"
#include <QMessageBox>

MyControl::MyControl(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MyControl)
{
	ui->setupUi(this);

	ui->menuBar->setFont(QFont("Meiryo", 9));
	ui->statusBar->setFont(QFont("Meiryo", 9));
	ui->statusBar->addWidget(new QLabel("Hello, world"));

	counter = 0;
}

MyControl::~MyControl()
{
	delete ui;
}

void MyControl::on_action_test_triggered()
{
	counter++;
	ui->label->setText(QString::number(counter));

    emit OnButtonClickedEvent();
}

void MyControl::on_action_file_open_triggered()
{
	QMessageBox::information(qobject_cast<QWidget *>(parent()), qApp->applicationName(), "open triggered");

}

void MyControl::on_pushButton_clicked()
{
}
