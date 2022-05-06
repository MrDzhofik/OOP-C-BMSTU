#include <QApplication>
#include "Qstr.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Win *dialog = new Win();

    dialog->show();    // отображаем окно
    return app.exec(); // запускаем цикл обработки сообщений
}
