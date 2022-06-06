/********************************************************************************
** Form generated from reading UI file 'max.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAX_H
#define UI_MAX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Max
{
public:
    QTextEdit *MaxEdit;
    QPushButton *exitButton;
    QPushButton *maxButton;

    void setupUi(QDialog *Max)
    {
        if (Max->objectName().isEmpty())
            Max->setObjectName(QString::fromUtf8("Max"));
        Max->resize(400, 300);
        MaxEdit = new QTextEdit(Max);
        MaxEdit->setObjectName(QString::fromUtf8("MaxEdit"));
        MaxEdit->setGeometry(QRect(10, 10, 371, 241));
        exitButton = new QPushButton(Max);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(290, 260, 91, 29));
        maxButton = new QPushButton(Max);
        maxButton->setObjectName(QString::fromUtf8("maxButton"));
        maxButton->setGeometry(QRect(190, 260, 83, 29));

        retranslateUi(Max);
        QObject::connect(exitButton, SIGNAL(clicked(bool)), Max, SLOT(close()));

        QMetaObject::connectSlotsByName(Max);
    } // setupUi

    void retranslateUi(QDialog *Max)
    {
        Max->setWindowTitle(QApplication::translate("Max", "Dialog", nullptr));
        exitButton->setText(QApplication::translate("Max", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        maxButton->setText(QApplication::translate("Max", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Max: public Ui_Max {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAX_H
