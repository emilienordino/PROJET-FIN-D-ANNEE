#include "modificat_fournisseur.h"
#include "ui_modificat_fournisseur.h"

modificat_fournisseur::modificat_fournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificat_fournisseur)
{
    ui->setupUi(this);
}

modificat_fournisseur::~modificat_fournisseur()
{
    delete ui;
}

void modificat_fournisseur::on_modif_fourn_clicked()
{
    QSqlQuery modif;
    modif.prepare("update fournisseur set Raison_social=:raison, NIF=:nif, Adresse=:adresse, Tel_Frs=:tel where Ref_frs="+ui->lineEdit->text()+"");
    modif.bindValue("raison",ui->lineEdit_2->text());
    modif.bindValue("nif",ui->lineEdit_3->text());
    modif.bindValue("adresse",ui->lineEdit_4->text());
    modif.bindValue("tel",ui->lineEdit_5->text());
    modif.exec();
    this->close();
}

void modificat_fournisseur::on_annulation_clicked()
{
    this->close();
}
