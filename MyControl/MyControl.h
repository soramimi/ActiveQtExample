#ifndef MYCONTROL_H
#define MYCONTROL_H

#include <QMainWindow>

namespace Ui {
class MyControl;
}

class MyControl : public QMainWindow
{
	Q_OBJECT
	Q_CLASSINFO("ClassID", "{CB5671E7-7A8A-419c-BE3A-82ABE55A35E3}");
	Q_CLASSINFO("InterfaceID", "{DD73BC05-2706-431c-821B-F896FEA0B9E7}");
	Q_CLASSINFO("EventsID", "{41D3CFA8-69AD-4b9f-A209-44D92AEEFEDE}");
private:
	int counter;
public:
	explicit MyControl(QWidget *parent = 0);
	~MyControl();

private slots:
	void on_action_test_triggered();
	void on_action_file_open_triggered();
    void on_pushButton_clicked();

private:
	Ui::MyControl *ui;

signals:
    void OnButtonClickedEvent();
};

#endif // MYCONTROL_H
