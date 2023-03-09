/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(400, 199);
        label = new QLabel(OptionsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 121, 16));
        lineEdit = new QLineEdit(OptionsDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 50, 271, 21));
        label_2 = new QLabel(OptionsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 171, 16));
        spinBox = new QSpinBox(OptionsDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(10, 110, 42, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(999999);
        pushButton = new QPushButton(OptionsDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 170, 80, 22));
        pushButton_2 = new QPushButton(OptionsDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 170, 80, 22));

        retranslateUi(OptionsDialog);

        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QCoreApplication::translate("OptionsDialog", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("OptionsDialog", "\320\241\321\202\320\260\321\200\321\202\320\276\320\262\321\213\320\271 URL", nullptr));
        lineEdit->setText(QCoreApplication::translate("OptionsDialog", "www.autoreview.ru", nullptr));
        label_2->setText(QCoreApplication::translate("OptionsDialog", "<html><head/><body><p>\320\242\320\260\320\271\320\274\320\265\321\200 \320\261\320\265\320\267\320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217 (\321\201\320\265\320\272.)</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("OptionsDialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OptionsDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
