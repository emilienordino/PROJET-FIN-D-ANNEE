#include "modifier_entrepot.h"
#include "ui_modifier_entrepot.h"

modifier_entrepot::modifier_entrepot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier_entrepot)
{
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/edit - Copie - Copie.png");
    this->setWindowIcon(icon);
    ui->setupUi(this);
    ui->confirmation->setStyleSheet("QPushButton{"
                                    "border-radius:5px;"
                                    "background-color:rgb(31,29,29);"
                                    "}"
                                    "QPushButton:hover{"
                                    "color:white;"
                                    "background-color: rgb(21,21,21);"
                                    "border:1px ridge rgb(53,53,53);"
                                    "}");
    ui->annulation->setStyleSheet("QPushButton{"
                                  "border-radius:5px;"
                                  "background-color:rgb(31,29,29);"
                                  "}"
                                  "QPushButton:hover{"
                                  "color:white;"
                                  "background-color: rgb(21,21,21);"
                                  "border:1px ridge rgb(53,53,53);"
                                  "}");
    ui->lineEdit->setPlaceholderText("de l'entrepot à modifier");
}

modifier_entrepot::~modifier_entrepot()
{
    delete ui;
}

void modifier_entrepot::on_confirmation_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::information(this,"Enregistrement","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    }
    else
    {
        QSqlQuery mod;
        mod.prepare("update entrepot set Adresse=:adresse where Ref_Entr=:ref");
        mod.bindValue(":ref",ui->lineEdit->text());
        mod.bindValue(":adresse",ui->lineEdit_2->text());
        mod.exec();
        QMessageBox::information(this,"Modification","Modification avec succès !");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        this->close();
    }
}

void modifier_entrepot::on_annulation_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    this->close();
}
