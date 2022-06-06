/********************************************************************************
** Form generated from reading UI file 'main_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_FORM_H
#define UI_MAIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QLabel *HelloLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QPushButton *PrintButton;
    QPushButton *ExitButton;

    void setupUi(QDialog *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QString::fromUtf8("MainForm"));
        MainForm->resize(400, 300);
        HelloLabel = new QLabel(MainForm);
        HelloLabel->setObjectName(QString::fromUtf8("HelloLabel"));
        HelloLabel->setGeometry(QRect(160, 20, 91, 31));
        layoutWidget = new QWidget(MainForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 351, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddButton = new QPushButton(layoutWidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        horizontalLayout->addWidget(AddButton);

        DeleteButton = new QPushButton(layoutWidget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        horizontalLayout->addWidget(DeleteButton);

        PrintButton = new QPushButton(layoutWidget);
        PrintButton->setObjectName(QString::fromUtf8("PrintButton"));

        horizontalLayout->addWidget(PrintButton);


        verticalLayout->addLayout(horizontalLayout);

        ExitButton = new QPushButton(layoutWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setMouseTracking(false);
        ExitButton->setTabletTracking(false);
        ExitButton->setAutoFillBackground(true);

        verticalLayout->addWidget(ExitButton);


        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QDialog *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        HelloLabel->setText(QApplication::translate("MainForm", "\320\237\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216", nullptr));
        AddButton->setText(QApplication::translate("MainForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        DeleteButton->setText(QApplication::translate("MainForm", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        PrintButton->setText(QApplication::translate("MainForm", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
        ExitButton->setText(QApplication::translate("MainForm", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_FORM_H
