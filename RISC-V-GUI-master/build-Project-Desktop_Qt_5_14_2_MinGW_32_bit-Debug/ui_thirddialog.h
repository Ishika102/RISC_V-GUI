/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *textEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *textEdit_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *textEdit_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *textEdit_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *textEdit_5;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;

    void setupUi(QDialog *thirdDialog)
    {
        if (thirdDialog->objectName().isEmpty())
            thirdDialog->setObjectName(QString::fromUtf8("thirdDialog"));
        thirdDialog->resize(1657, 300);
        layoutWidget = new QWidget(thirdDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(720, 100, 1041, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit = new QLineEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(textEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        textEdit_2 = new QLineEdit(layoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        sizePolicy.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(textEdit_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        textEdit_3 = new QLineEdit(layoutWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        sizePolicy.setHeightForWidth(textEdit_3->sizePolicy().hasHeightForWidth());
        textEdit_3->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(textEdit_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        textEdit_4 = new QLineEdit(layoutWidget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        sizePolicy.setHeightForWidth(textEdit_4->sizePolicy().hasHeightForWidth());
        textEdit_4->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(textEdit_4);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        textEdit_5 = new QLineEdit(layoutWidget);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        sizePolicy.setHeightForWidth(textEdit_5->sizePolicy().hasHeightForWidth());
        textEdit_5->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(textEdit_5);


        horizontalLayout->addLayout(verticalLayout_3);

        pushButton = new QPushButton(thirdDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(790, 210, 80, 22));
        groupBox = new QGroupBox(thirdDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(970, 190, 120, 80));
        groupBox_2 = new QGroupBox(thirdDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1120, 190, 120, 80));

        retranslateUi(thirdDialog);

        QMetaObject::connectSlotsByName(thirdDialog);
    } // setupUi

    void retranslateUi(QDialog *thirdDialog)
    {
        thirdDialog->setWindowTitle(QCoreApplication::translate("thirdDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("thirdDialog", "Fetch", nullptr));
        label_4->setText(QCoreApplication::translate("thirdDialog", "Decode", nullptr));
        label_2->setText(QCoreApplication::translate("thirdDialog", "Execute", nullptr));
        label_5->setText(QCoreApplication::translate("thirdDialog", "Memory", nullptr));
        label_3->setText(QCoreApplication::translate("thirdDialog", "Write Back", nullptr));
        pushButton->setText(QCoreApplication::translate("thirdDialog", "Run", nullptr));
        groupBox->setTitle(QCoreApplication::translate("thirdDialog", "Data Hazards", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("thirdDialog", "Control Hazards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdDialog: public Ui_thirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
