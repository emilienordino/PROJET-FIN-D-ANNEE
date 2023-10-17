#include "supp_livrer.h"
#include "ui_supp_livrer.h"

supp_livrer::supp_livrer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supp_livrer)
{
    ui->setupUi(this);
}

supp_livrer::~supp_livrer()
{
    delete ui;
}

void supp_livrer::on_supprimer_livrer_clicked()
{
    QString liv = ui->lineEdit->text();
    QSqlQuery requete;
    requete.prepare("delete from livrer where Ref_frs=:ref");
    requete.bindValue(":ref",liv);
    requete.exec();
    this->close();
}

void supp_livrer::on_annulation_clicked()
{
    this->close();
}
