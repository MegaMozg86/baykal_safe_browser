#ifndef PASSWORDDIALOG_H
#define PASSWORDDIALOG_H

#include <QDialog>

namespace Ui {
class PasswordDialog;
}
class QApplication;
class PasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasswordDialog(QApplication *a, QWidget *parent = nullptr);
    ~PasswordDialog();
    QApplication *app;
private slots:
    void Run();

private:
    Ui::PasswordDialog *ui;
};

#endif // PASSWORDDIALOG_H
