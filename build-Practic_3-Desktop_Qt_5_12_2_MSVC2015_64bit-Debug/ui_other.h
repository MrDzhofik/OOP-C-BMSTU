/********************************************************************************
** Form generated from reading UI file 'other.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHER_H
#define UI_OTHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Other
{
public:
    QPushButton *Exit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *MaxButton;
    QPushButton *SumButton;
    QPushButton *BenefitButton;
    QPushButton *HistogrammButton;

    void setupUi(QDialog *Other)
    {
        if (Other->objectName().isEmpty())
            Other->setObjectName(QString::fromUtf8("Other"));
        Other->resize(564, 382);
        Exit = new QPushButton(Other);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(442, 330, 101, 29));
        label = new QLabel(Other);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 140, 111, 51));
        label_2 = new QLabel(Other);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(162, 149, 111, 51));
        label_3 = new QLabel(Other);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(302, 149, 81, 51));
        label_4 = new QLabel(Other);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(422, 140, 101, 61));
        layoutWidget = new QWidget(Other);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 210, 521, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MaxButton = new QPushButton(layoutWidget);
        MaxButton->setObjectName(QString::fromUtf8("MaxButton"));

        horizontalLayout->addWidget(MaxButton);

        SumButton = new QPushButton(layoutWidget);
        SumButton->setObjectName(QString::fromUtf8("SumButton"));

        horizontalLayout->addWidget(SumButton);

        BenefitButton = new QPushButton(layoutWidget);
        BenefitButton->setObjectName(QString::fromUtf8("BenefitButton"));

        horizontalLayout->addWidget(BenefitButton);

        HistogrammButton = new QPushButton(layoutWidget);
        HistogrammButton->setObjectName(QString::fromUtf8("HistogrammButton"));

        horizontalLayout->addWidget(HistogrammButton);


        retranslateUi(Other);
        QObject::connect(Exit, SIGNAL(clicked(bool)), Other, SLOT(close()));

        QMetaObject::connectSlotsByName(Other);
    } // setupUi

    void retranslateUi(QDialog *Other)
    {
        Other->setWindowTitle(QApplication::translate("Other", "Dialog", nullptr));
        Exit->setText(QApplication::translate("Other", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QApplication::translate("Other", "<html><head/><body><p>\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 </p><p>\321\202\320\276\320\262\320\260\321\200</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Other", "\320\242\320\276\320\262\320\260\321\200 \320\275\320\260 \321\201\321\203\320\274\320\274\321\203", nullptr));
        label_3->setText(QApplication::translate("Other", "   \320\222\321\213\320\263\320\276\320\264\320\260", nullptr));
        label_4->setText(QApplication::translate("Other", "\320\223\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        MaxButton->setText(QApplication::translate("Other", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274", nullptr));
        SumButton->setText(QApplication::translate("Other", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        BenefitButton->setText(QApplication::translate("Other", "\320\222\321\213\320\263\320\276\320\264\320\260", nullptr));
        HistogrammButton->setText(QApplication::translate("Other", "\320\223\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Other: public Ui_Other {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHER_H
