#ifndef MYCONTROL_H
#define MYCONTROL_H

#include <QAxWidget>

namespace Ui {
class MyControl;
}

class MyControl : public QWidget
{
	Q_OBJECT
	Q_CLASSINFO("ClassID", "{CB5671E7-7A8A-419c-BE3A-82ABE55A35E3}");
	Q_CLASSINFO("InterfaceID", "{DD73BC05-2706-431c-821B-F896FEA0B9E7}");
	Q_CLASSINFO("EventsID", "{41D3CFA8-69AD-4b9f-A209-44D92AEEFEDE}");
public:
	explicit MyControl(QWidget *parent = 0);
	~MyControl();

	virtual void paintEvent(QPaintEvent *);

private:
	Ui::MyControl *ui;
};

#endif // MYCONTROL_H
