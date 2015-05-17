#include "Widget.h"
#include "ui_Widget.h"
#include "DuDefines.h"
#include "DuScene.h"
#include "DialDialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mDialDialog = new DialDialog(this);
    mScene = new DuScene(this);

    ui->graphicsView->setScene(mScene);
    mDialDialog->show();

    connect(mDialDialog, &DialDialog::valueChanged, [&](int value) {
        mScene->clear();
        mScene->VonKoch(QPointF(20.0, 420.0), QPointF(1220.0, 420.0), value);
        mScene->update();
    });
}

Widget::~Widget()
{
    delete ui;
}


