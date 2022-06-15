/********************************************************************************
** Form generated from reading UI file 'calcdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCDIALOG_H
#define UI_CALCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calcDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainKeysLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *bccKeysLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *dlgLayout;

    void setupUi(QDialog *calcDialog)
    {
        if (calcDialog->objectName().isEmpty())
            calcDialog->setObjectName(QString::fromUtf8("calcDialog"));
        calcDialog->resize(810, 494);
        gridLayoutWidget = new QWidget(calcDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(69, 181, 451, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(calcDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 181, 651, 221));
        mainKeysLayout = new QVBoxLayout(verticalLayoutWidget);
        mainKeysLayout->setObjectName(QString::fromUtf8("mainKeysLayout"));
        mainKeysLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(calcDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 100, 651, 61));
        bccKeysLayout = new QHBoxLayout(horizontalLayoutWidget);
        bccKeysLayout->setObjectName(QString::fromUtf8("bccKeysLayout"));
        bccKeysLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(calcDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(29, 20, 731, 441));
        dlgLayout = new QVBoxLayout(verticalLayoutWidget_2);
        dlgLayout->setObjectName(QString::fromUtf8("dlgLayout"));
        dlgLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(calcDialog);

        QMetaObject::connectSlotsByName(calcDialog);
    } // setupUi

    void retranslateUi(QDialog *calcDialog)
    {
        calcDialog->setWindowTitle(QCoreApplication::translate("calcDialog", "calcDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calcDialog: public Ui_calcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCDIALOG_H
