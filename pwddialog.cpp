#include "pwddialog.h"
#include<QLineEdit>
#include<QPushButton>
#include<QWidget>

PwdDialog::PwdDialog(QWidget *parent)
    : QDialog(parent)
{
    //setCaption(tr("Введите пароль"));
    lineEdit = new QLineEdit(this);
    button = new QPushButton(tr("OK"), this);
    button->setDefault(true);
}
