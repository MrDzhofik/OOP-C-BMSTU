#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QtGui>
#include "area.h"
#include <QPushButton>
#include <QVBoxLayout>

class Window : public QWidget
{
    Q_OBJECT
protected:
    QTextCodec *codec;
    Area * area;         // область отображения рисунка
    QPushButton * btn;
public:
    Window();

};
#endif // WINDOW_H
