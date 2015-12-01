#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qApp->setQuitOnLastWindowClosed(true); // important!
    return a.exec();
}
