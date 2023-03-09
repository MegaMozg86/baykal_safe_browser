#include "passworddialog.h"
#include "ui_passworddialog.h"
#include <QApplication>
#include "optionsdialog.h"

PasswordDialog::PasswordDialog(QApplication *a, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswordDialog)
{
    ui->setupUi(this);

        this->app = a;

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(Run()));
}

void PasswordDialog::Run()
{
    if(ui->lineEdit->text() == "1733")
    {
    OptionsDialog* dialog = new OptionsDialog(app);
    dialog->move(500, 20);
    dialog->show();
    ui->lineEdit->clear();
    this->close();
    }
}

PasswordDialog::~PasswordDialog()
{
    delete ui;
}
