/********************************************************************************
** Form generated from reading UI file 'delete_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_FORM_H
#define UI_DELETE_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *DeleteLabel;
    QHBoxLayout *horizontalLayout;
    QRadioButton *Begin;
    QRadioButton *End;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *DeleteButton;
    QPushButton *ExitButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(297, 250);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 273, 86));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        DeleteLabel = new QLabel(widget);
        DeleteLabel->setObjectName(QString::fromUtf8("DeleteLabel"));

        verticalLayout->addWidget(DeleteLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Begin = new QRadioButton(widget);
        Begin->setObjectName(QString::fromUtf8("Begin"));

        horizontalLayout->addWidget(Begin);

        End = new QRadioButton(widget);
        End->setObjectName(QString::fromUtf8("End"));

        horizontalLayout->addWidget(End);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        DeleteButton = new QPushButton(widget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        horizontalLayout_2->addWidget(DeleteButton);

        ExitButton = new QPushButton(widget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        horizontalLayout_2->addWidget(ExitButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
        DeleteLabel->setText(QApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201:", nullptr));
        Begin->setText(QApplication::translate("Dialog", "\320\235\320\260\321\207\320\260\320\273\320\260", nullptr));
        End->setText(QApplication::translate("Dialog", "\320\232\320\276\320\275\321\206\320\260", nullptr));
        DeleteButton->setText(QApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        ExitButton->setText(QApplication::translate("Dialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_FORM_H
