#include "modifier_livrer.h"
#include "ui_modifier_livrer.h"

modifier_livrer::modifier_livrer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier_livrer)
{
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/edit - Copie - Copie.png");
    this->setWindowIcon(icon);
    ui->setupUi(this);
    ui->annulation->setStyleSheet("QPushButton{"
                                  "border-radius:5px;"
                                  "background-color:rgb(31,29,29);"
                                  "}"
                                  "QPushButton:hover{"
                                  "color:white;"
                                  "background-color: rgb(21,21,21);"
                                  "border:1px ridge rgb(53,53,53);"
                                  "}");
    ui->confirmation->setStyleSheet("QPushButton{"
                                    "border-radius:5px;"
                                    "background-color:rgb(31,29,29);"
                                    "}"
                                    "QPushButton:hover{"
                                    "color:white;"
                                    "background-color: rgb(21,21,21);"
                                    "border:1px ridge rgb(53,53,53);"
                                    "}");
}

modifier_livrer::~modifier_livrer()
{
    delete ui;
}

void modifier_livrer::on_confirmation_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->dateEdit->date().isNull() || ui->doubleSpinBox->value()==NULL || ui->doubleSpinBox_2->value()==NULL)
    {
        QMessageBox::information(this,"Enregistrement","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    }
    else
    {
        QSqlQuery mod;
        mod.prepare("update livrer set Num_Mar=:num,Date_livraison=:date,Prix_achat=:prix,Qte_livree=:qte where Ref_frs=:ref");
        mod.bindValue(":ref",ui->lineEdit->text());
        mod.bindValue(":num",ui->lineEdit_2->text());
        mod.bindValue(":date",ui->dateEdit->date());
        mod.bindValue(":prix",ui->doubleSpinBox->value());
        mod.bindValue(":qte",ui->doubleSpinBox_2->value());
        mod.exec();
        QMessageBox::information(this,"Modification","Modification avec succès !");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->dateEdit->clear();
        ui->doubleSpinBox->clear();
        ui->doubleSpinBox_2->clear();
        this->close();
    }
}

void modifier_livrer::on_annulation_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->dateEdit->clear();
    ui->doubleSpinBox->clear();
    ui->doubleSpinBox_2->clear();
    this->close();
}
