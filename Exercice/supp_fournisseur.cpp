#include "supp_fournisseur.h"
#include "ui_supp_fournisseur.h"

supp_fournisseur::supp_fournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supp_fournisseur)
{
    ui->setupUi(this);
}

supp_fournisseur::~supp_fournisseur()
{
    delete ui;
}

void supp_fournisseur::on_pushButton_clicked()
{
    QSqlQuery supp_four;
    QString ref = ui->lineEdit->text();
    supp_four.prepare("delete from fournisseur where Ref_frs=:ref");
    supp_four.bindValue(":ref",ref);
    supp_four.exec();
    this->close();
}

void supp_fournisseur::on_pushButton_2_clicked()
{
    this->close();
}
