#ifndef DIALDIALOG_H
#define DIALDIALOG_H

#include <QDialog>

namespace Ui
{
class DialDialog;
}

class DialDialog : public QDialog
{
    Q_OBJECT
public:
    explicit DialDialog(QWidget *parent = nullptr);
    ~DialDialog();
signals:
    void valueChanged(int);
private slots:
    void on_dial_valueChanged(int value);
private:
    Ui::DialDialog *ui;
};

#endif // DIALDIALOG_H
