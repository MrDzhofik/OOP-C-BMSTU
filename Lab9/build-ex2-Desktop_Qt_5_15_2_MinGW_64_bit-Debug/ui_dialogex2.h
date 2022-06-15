/********************************************************************************
** Form generated from reading UI file 'dialogex2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEX2_H
#define UI_DIALOGEX2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEx2
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QDial *dial;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogEx2)
    {
        if (DialogEx2->objectName().isEmpty())
            DialogEx2->setObjectName(QString::fromUtf8("DialogEx2"));
        DialogEx2->resize(474, 361);
        verticalLayout_2 = new QVBoxLayout(DialogEx2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEdit = new QTextEdit(DialogEx2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dial = new QDial(DialogEx2);
        dial->setObjectName(QString::fromUtf8("dial"));

        verticalLayout->addWidget(dial);

        spinBox = new QSpinBox(DialogEx2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(DialogEx2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        pushButton = new QPushButton(DialogEx2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(DialogEx2);
        QObject::connect(dial, SIGNAL(sliderMoved(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), DialogEx2, SLOT(reject()));
        QObject::connect(spinBox, SIGNAL(textChanged(QString)), textEdit, SLOT(append(QString)));

        QMetaObject::connectSlotsByName(DialogEx2);
    } // setupUi

    void retranslateUi(QDialog *DialogEx2)
    {
        DialogEx2->setWindowTitle(QCoreApplication::translate("DialogEx2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogEx2", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\272\320\275\320\276\320\277\320\272\321\203->", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogEx2", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEx2: public Ui_DialogEx2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEX2_H
