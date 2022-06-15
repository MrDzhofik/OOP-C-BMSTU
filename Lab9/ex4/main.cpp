#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Win w;
    w.Widget->show();
    return a.exec();
}
