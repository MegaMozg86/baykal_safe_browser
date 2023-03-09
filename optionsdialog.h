#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include <QDialog>

class QApplication;

namespace Ui {
class OptionsDialog;
}

class OptionsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OptionsDialog(QApplication *a, QWidget *parent = nullptr);
    ~OptionsDialog();

    QApplication *app;
private:
    Ui::OptionsDialog *ui;

private slots:
    void btnExit();
    void btnApply();
};

#endif // OPTIONSDIALOG_H
