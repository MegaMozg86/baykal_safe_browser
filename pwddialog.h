#ifndef PWDDIALOG_H
#define PWDDIALOG_H

#include <QDialog>

class QLabel;
class QLineEdit;
class QPushButton;


class PwdDialog : public QDialog
{
    Q_OBJECT
public:
    PwdDialog(QWidget *parent = 0);

private:
private:
     QLineEdit *lineEdit;
     QPushButton *button;
};

#endif // PWDDIALOG_H
