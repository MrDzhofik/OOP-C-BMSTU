/********************************************************************************
** Form generated from reading UI file 'add_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_FORM_H
#define UI_ADD_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *SekectLabel;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *Begin;
    QRadioButton *End;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *IntLabel;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *StrLabel;
    QLineEdit *lineEdit_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *AddButton;
    QPushButton *ExitButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(338, 300);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 130, 191, 74));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        SekectLabel = new QLabel(widget);
        SekectLabel->setObjectName(QString::fromUtf8("SekectLabel"));

        horizontalLayout_3->addWidget(SekectLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Begin = new QRadioButton(widget);
        Begin->setObjectName(QString::fromUtf8("Begin"));

        verticalLayout_2->addWidget(Begin);

        End = new QRadioButton(widget);
        End->setObjectName(QString::fromUtf8("End"));

        verticalLayout_2->addWidget(End);


        horizontalLayout_3->addLayout(verticalLayout_2);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(41, 42, 261, 61));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        IntLabel = new QLabel(widget1);
        IntLabel->setObjectName(QString::fromUtf8("IntLabel"));

        horizontalLayout->addWidget(IntLabel);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        StrLabel = new QLabel(widget1);
        StrLabel->setObjectName(QString::fromUtf8("StrLabel"));

        horizontalLayout_2->addWidget(StrLabel);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        widget2 = new QWidget(Dialog);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(80, 250, 195, 30));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        AddButton = new QPushButton(widget2);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        horizontalLayout_4->addWidget(AddButton);

        ExitButton = new QPushButton(widget2);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        horizontalLayout_4->addWidget(ExitButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        SekectLabel->setText(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\273\321\217\321\202\321\214 \320\262: ", nullptr));
        Begin->setText(QApplication::translate("Dialog", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        End->setText(QApplication::translate("Dialog", "\320\232\320\276\320\275\320\265\321\206", nullptr));
        IntLabel->setText(QApplication::translate("Dialog", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        StrLabel->setText(QApplication::translate("Dialog", "\320\241\321\202\321\200\320\276\320\272\320\260", nullptr));
        AddButton->setText(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        ExitButton->setText(QApplication::translate("Dialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_FORM_H
