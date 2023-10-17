#include "supp.h"
#include "ui_supp.h"

Supp::Supp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Supp)
{
    ui->setupUi(this);
}

Supp::~Supp()
{
    delete ui;
}

void Supp::on_pushButton_clicked()
{
    QSqlQuery supp;
    supp.exec("truncate table fournisseur");
    this->close();
}

void Supp::on_pushButton_2_clicked()
{
    this->close();
}
