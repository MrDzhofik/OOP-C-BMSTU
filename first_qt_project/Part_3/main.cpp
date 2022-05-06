#include "calcDialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    CalcDialog win;
    win.show();
    return app.exec();
}
