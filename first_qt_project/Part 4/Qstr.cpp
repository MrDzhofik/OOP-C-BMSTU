#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include "Qstr.h"
Win::Win(QWidget *parent)
{
    setWindowTitle("IUUUUuuu");
    input_edit = new QLineEdit("", this);
    output_edit = new QTextEdit("", this);
    conv = new QPushButton("Convert", this);
    exit = new QPushButton("Exit", this);
}
