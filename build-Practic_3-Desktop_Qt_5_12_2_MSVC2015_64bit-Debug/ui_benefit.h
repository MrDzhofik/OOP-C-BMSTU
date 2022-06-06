/********************************************************************************
** Form generated from reading UI file 'benefit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BENEFIT_H
#define UI_BENEFIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Benefit
{
public:
    QTextEdit *BenefitTextEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *BenefitButton;
    QPushButton *ExitButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *BenefitEdit;

    void setupUi(QDialog *Benefit)
    {
        if (Benefit->objectName().isEmpty())
            Benefit->setObjectName(QString::fromUtf8("Benefit"));
        Benefit->resize(400, 300);
        BenefitTextEdit = new QTextEdit(Benefit);
        BenefitTextEdit->setObjectName(QString::fromUtf8("BenefitTextEdit"));
        BenefitTextEdit->setGeometry(QRect(10, 10, 271, 281));
        widget = new QWidget(Benefit);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(300, 220, 85, 67));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BenefitButton = new QPushButton(widget);
        BenefitButton->setObjectName(QString::fromUtf8("BenefitButton"));

        verticalLayout->addWidget(BenefitButton);

        ExitButton = new QPushButton(widget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        verticalLayout->addWidget(ExitButton);

        widget1 = new QWidget(Benefit);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(290, 100, 105, 57));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        BenefitEdit = new QLineEdit(widget1);
        BenefitEdit->setObjectName(QString::fromUtf8("BenefitEdit"));

        verticalLayout_2->addWidget(BenefitEdit);


        retranslateUi(Benefit);
        QObject::connect(ExitButton, SIGNAL(clicked(bool)), Benefit, SLOT(close()));

        QMetaObject::connectSlotsByName(Benefit);
    } // setupUi

    void retranslateUi(QDialog *Benefit)
    {
        Benefit->setWindowTitle(QApplication::translate("Benefit", "Dialog", nullptr));
        BenefitButton->setText(QApplication::translate("Benefit", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        ExitButton->setText(QApplication::translate("Benefit", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QApplication::translate("Benefit", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\276\320\262\320\260\321\200:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Benefit: public Ui_Benefit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BENEFIT_H
