/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *NameEdit;
    QLineEdit *ProviderEdit;
    QLineEdit *QuantityEdit;
    QLineEdit *PriceEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddButton;
    QPushButton *ExitButton;

    void setupUi(QDialog *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(400, 300);
        widget = new QWidget(Add);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 361, 271));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        NameEdit = new QLineEdit(widget);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        verticalLayout_2->addWidget(NameEdit);

        ProviderEdit = new QLineEdit(widget);
        ProviderEdit->setObjectName(QString::fromUtf8("ProviderEdit"));

        verticalLayout_2->addWidget(ProviderEdit);

        QuantityEdit = new QLineEdit(widget);
        QuantityEdit->setObjectName(QString::fromUtf8("QuantityEdit"));

        verticalLayout_2->addWidget(QuantityEdit);

        PriceEdit = new QLineEdit(widget);
        PriceEdit->setObjectName(QString::fromUtf8("PriceEdit"));

        verticalLayout_2->addWidget(PriceEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AddButton = new QPushButton(widget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        horizontalLayout_2->addWidget(AddButton);

        ExitButton = new QPushButton(widget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        horizontalLayout_2->addWidget(ExitButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(Add);
        QObject::connect(ExitButton, SIGNAL(clicked(bool)), Add, SLOT(close()));

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QDialog *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Dialog", nullptr));
        label->setText(QApplication::translate("Add", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("Add", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272", nullptr));
        label_3->setText(QApplication::translate("Add", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276(\320\272\320\263)", nullptr));
        label_4->setText(QApplication::translate("Add", "\320\246\320\265\320\275\320\260(\320\267\320\260 \320\272\320\263)", nullptr));
        AddButton->setText(QApplication::translate("Add", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        ExitButton->setText(QApplication::translate("Add", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
