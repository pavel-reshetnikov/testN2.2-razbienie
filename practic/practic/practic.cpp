#include "practic.h"
#include "ui_practic.h"

practic::practic(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::practic)
{
    ui->setupUi(this);
}

practic::~practic()
{
    delete ui;
}

