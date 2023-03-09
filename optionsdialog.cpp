#include "optionsdialog.h"
#include "ui_optionsdialog.h"
#include <QApplication>
#include <QSettings>

OptionsDialog::OptionsDialog(QApplication *a, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OptionsDialog)
{
    ui->setupUi(this);
    this->app = a;
connect(ui->pushButton, SIGNAL(clicked()), app, SLOT(quit()));
connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(btnApply()));

 QSettings settings( "settings_minimal.conf", QSettings::IniFormat );

     settings.beginGroup( "Browser" );
    ui->lineEdit->setText(settings.value( "url", "https://minobrnauki.gov.ru" ).toString());
    ui->spinBox->setValue(settings.value( "time", 10 ).toInt());
    settings.endGroup();

}

void OptionsDialog::btnExit()
{
    this->app->quit();
}

void OptionsDialog::btnApply()
{
    QSettings settings( "settings_minimal.conf", QSettings::IniFormat );
        settings.beginGroup( "Browser" );
        settings.setValue( "url", ui->lineEdit->text() );
        settings.setValue( "time", ui->spinBox->value() );
        settings.endGroup();

        this->close();
}

OptionsDialog::~OptionsDialog()
{
    delete ui;
}
