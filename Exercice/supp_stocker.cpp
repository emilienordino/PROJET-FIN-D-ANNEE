#include "supp_stocker.h"
#include "ui_supp_stocker.h"

supp_stocker::supp_stocker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supp_stocker)
{
    ui->setupUi(this);
}

supp_stocker::~supp_stocker()
{
    delete ui;
}

void supp_stocker::on_supprimer_stocker_clicked()
{
    QString stock = ui->lineEdit->text();
    QSqlQuery req;
    req.prepare("delete from stocker where Num_Mar=:num");
    req.bindValue(":num",stock);
    req.exec();
    this->close();
}

void supp_stocker::on_annulation_clicked()
{
    this->close();
}
