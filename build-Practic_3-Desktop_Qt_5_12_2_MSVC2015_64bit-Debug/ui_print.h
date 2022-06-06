/********************************************************************************
** Form generated from reading UI file 'print.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_H
#define UI_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Print
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *PrintButton;
    QPushButton *ExitButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Print)
    {
        if (Print->objectName().isEmpty())
            Print->setObjectName(QString::fromUtf8("Print"));
        Print->resize(543, 293);
        layoutWidget = new QWidget(Print);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 250, 175, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PrintButton = new QPushButton(layoutWidget);
        PrintButton->setObjectName(QString::fromUtf8("PrintButton"));

        horizontalLayout->addWidget(PrintButton);

        ExitButton = new QPushButton(layoutWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        horizontalLayout->addWidget(ExitButton);

        tableWidget = new QTableWidget(Print);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 531, 231));
        tableWidget->setRowCount(10);
        tableWidget->setColumnCount(4);

        retranslateUi(Print);
        QObject::connect(ExitButton, SIGNAL(clicked(bool)), Print, SLOT(close()));

        QMetaObject::connectSlotsByName(Print);
    } // setupUi

    void retranslateUi(QDialog *Print)
    {
        Print->setWindowTitle(QApplication::translate("Print", "Dialog", nullptr));
        PrintButton->setText(QApplication::translate("Print", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
        ExitButton->setText(QApplication::translate("Print", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Print: public Ui_Print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_H
