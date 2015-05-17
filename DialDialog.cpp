#include "DialDialog.h"
#include "ui_DialDialog.h"

DialDialog::DialDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinMaxButtonsHint
                   | Qt::CustomizeWindowHint);
    setWindowTitle(".");
    ui->dial->setValue(0);
    ui->dial->setMaximum(6);
}

DialDialog::~DialDialog()
{
    delete ui;
}

void DialDialog::on_dial_valueChanged(int value)
{
    ui->lcdNumber->display(value);
    emit valueChanged(value);
}
