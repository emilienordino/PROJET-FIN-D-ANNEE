#include "supp_marchandise.h"
#include "ui_supp_marchandise.h"

supp_marchandise::supp_marchandise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supp_marchandise)
{
    ui->setupUi(this);
}

supp_marchandise::~supp_marchandise()
{
    delete ui;
}

void supp_marchandise::on_pushButton_clicked()
{
    QSqlQuery supp_March;
    QString refMar = ui->lineEdit_march->text();
    supp_March.prepare("delete from marchandises where Ref_Mar= :refMar");
    supp_March.bindValue(":refMar", refMar);
    supp_March.exec();
    this->close();
}

void supp_marchandise::on_pushButton_2_clicked()
{
    this->close();
}
