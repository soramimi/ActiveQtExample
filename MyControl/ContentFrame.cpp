#include "ContentFrame.h"
#include <QPainter>

ContentFrame::ContentFrame(QWidget *parent)
	: QFrame(parent)
{

}

void ContentFrame::paintEvent(QPaintEvent *)
{
	QPainter pr(this);
	pr.drawEllipse(0, 0, width() - 1, height() - 1);
}
