#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include "string.h"
#include "add.h"
#include "delete.h"
#include "other.h"
#include "print.h"
#include "Structure.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Add;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool readrec();
    Product record;
    Add *add;
    Delete *del;
    Other *other;
    Print *print;

private slots:
    void on_AddButton_clicked(bool checked);

    void on_DeleteButton_clicked(bool checked);

    void on_OtherButton_clicked(bool checked);

    void on_PrinButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};




void show_message(const char* text);


#endif // MAINWINDOW_H
