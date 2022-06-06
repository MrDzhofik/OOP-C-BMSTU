/********************************************************************************
** Form generated from reading UI file 'sum.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUM_H
#define UI_SUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Sum
{
public:
    QPushButton *ExitButton;
    QPushButton *SumButton;
    QLineEdit *SumEdit;
    QTextEdit *SumText;
    QLabel *label;

    void setupUi(QDialog *Sum)
    {
        if (Sum->objectName().isEmpty())
            Sum->setObjectName(QString::fromUtf8("Sum"));
        Sum->resize(420, 332);
        ExitButton = new QPushButton(Sum);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(320, 290, 83, 29));
        SumButton = new QPushButton(Sum);
        SumButton->setObjectName(QString::fromUtf8("SumButton"));
        SumButton->setGeometry(QRect(320, 250, 83, 29));
        SumEdit = new QLineEdit(Sum);
        SumEdit->setObjectName(QString::fromUtf8("SumEdit"));
        SumEdit->setGeometry(QRect(322, 100, 81, 28));
        SumText = new QTextEdit(Sum);
        SumText->setObjectName(QString::fromUtf8("SumText"));
        SumText->setGeometry(QRect(10, 10, 301, 311));
        label = new QLabel(Sum);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 60, 63, 20));

        retranslateUi(Sum);
        QObject::connect(ExitButton, SIGNAL(clicked(bool)), Sum, SLOT(close()));

        QMetaObject::connectSlotsByName(Sum);
    } // setupUi

    void retranslateUi(QDialog *Sum)
    {
        Sum->setWindowTitle(QApplication::translate("Sum", "Dialog", nullptr));
        ExitButton->setText(QApplication::translate("Sum", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        SumButton->setText(QApplication::translate("Sum", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("Sum", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sum: public Ui_Sum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUM_H
