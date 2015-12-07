#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
    button_clicked_count = 0;
}

MainWindow::~MainWindow()
{
	delete ui;
}


void MainWindow::on_axWidget_OnButtonClickedEvent()
{
    button_clicked_count++;
    setWindowTitle(QString::number(button_clicked_count));
}
