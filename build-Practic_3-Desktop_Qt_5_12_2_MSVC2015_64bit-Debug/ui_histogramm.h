/********************************************************************************
** Form generated from reading UI file 'histogramm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTOGRAMM_H
#define UI_HISTOGRAMM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Histogramm
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *HistogrammButton;
    QPushButton *ExitButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *Histogramm)
    {
        if (Histogramm->objectName().isEmpty())
            Histogramm->setObjectName(QString::fromUtf8("Histogramm"));
        Histogramm->resize(230, 166);
        layoutWidget = new QWidget(Histogramm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 40, 85, 67));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        HistogrammButton = new QPushButton(layoutWidget);
        HistogrammButton->setObjectName(QString::fromUtf8("HistogrammButton"));

        verticalLayout->addWidget(HistogrammButton);

        ExitButton = new QPushButton(layoutWidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));

        verticalLayout->addWidget(ExitButton);

        verticalLayoutWidget = new QWidget(Histogramm);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 440, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Histogramm);
        QObject::connect(ExitButton, SIGNAL(clicked(bool)), Histogramm, SLOT(close()));

        QMetaObject::connectSlotsByName(Histogramm);
    } // setupUi

    void retranslateUi(QDialog *Histogramm)
    {
        Histogramm->setWindowTitle(QApplication::translate("Histogramm", "Dialog", nullptr));
        HistogrammButton->setText(QApplication::translate("Histogramm", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", nullptr));
        ExitButton->setText(QApplication::translate("Histogramm", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Histogramm: public Ui_Histogramm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTOGRAMM_H
