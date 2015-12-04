#ifndef CONTENTFRAME_H
#define CONTENTFRAME_H

#include <QFrame>

class ContentFrame : public QFrame
{
	Q_OBJECT
public:
	explicit ContentFrame(QWidget *parent = 0);

	void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // CONTENTFRAME_H
