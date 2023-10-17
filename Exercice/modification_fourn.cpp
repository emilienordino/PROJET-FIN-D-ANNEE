#include "modification_fourn.h"
#include "ui_modification_fourn.h"

modification_fourn::modification_fourn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modification_fourn)
{
    ui->setupUi(this);
}

modification_fourn::~modification_fourn()
{
    delete ui;
}
