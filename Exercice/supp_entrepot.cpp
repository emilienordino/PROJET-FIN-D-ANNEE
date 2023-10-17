#include "supp_entrepot.h"
#include "ui_supp_entrepot.h"

supp_entrepot::supp_entrepot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supp_entrepot)
{
    ui->setupUi(this);
}

supp_entrepot::~supp_entrepot()
{
    delete ui;
}

void supp_entrepot::on_pushButton_clicked()
{
    QSqlQuery supp_entr;
    QString rep = ui->lineEdit_entr->text();
    supp_entr.prepare("delete from entrepot where Ref_Entr=:ref");
    supp_entr.bindValue(":ref",rep);
    supp_entr.exec();
    this->close();
}

void supp_entrepot::on_pushButton_2_clicked()
{
    this->close();
}
