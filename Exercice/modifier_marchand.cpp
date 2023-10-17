#include "modifier_marchand.h"
#include "ui_modifier_marchand.h"

modifier_marchand::modifier_marchand(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier_marchand)
{
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/edit - Copie - Copie.png");
    this->setWindowIcon(icon);
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("QPushButton{"
                                  "border-radius:5px;"
                                  "background-color:rgb(31,29,29);"
                                  "}"
                                  "QPushButton:hover{"
                                  "color:white;"
                                  "background-color: rgb(21,21,21);"
                                  "border:1px ridge rgb(53,53,53);"
                                  "}");
    ui->pushButton_2->setStyleSheet("QPushButton{"
                                    "border-radius:5px;"
                                    "background-color:rgb(31,29,29);"
                                    "}"
                                    "QPushButton:hover{"
                                    "color:white;"
                                    "background-color: rgb(21,21,21);"
                                    "border:1px ridge rgb(53,53,53);"
                                    "}");
    ui->lineEdit->setPlaceholderText("de la marchandise à modifier");
}

modifier_marchand::~modifier_marchand()
{
    delete ui;
}

void modifier_marchand::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->doubleSpinBox->value()==NULL)
    {
        QMessageBox::information(this,"Enregistrement","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    }
    else
    {
        QSqlQuery mod;
        mod.prepare("update marchandises set Designation=:design,Prix_de_vente=:prix where Ref_Mar=:ref");
        mod.bindValue(":ref",ui->lineEdit->text());
        mod.bindValue(":design",ui->lineEdit_2->text());
        mod.bindValue(":prix",ui->doubleSpinBox->value());
        mod.exec();
        QMessageBox::information(this,"Modification","Modification avec succès !");

        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->doubleSpinBox->clear();
        this->close();
    }
}

void modifier_marchand::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->doubleSpinBox->clear();
    this->close();
}
