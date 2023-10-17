#include "modifier_stocker.h"
#include "ui_modifier_stocker.h"

modifier_stocker::modifier_stocker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier_stocker)
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

modifier_stocker::~modifier_stocker()
{
    delete ui;
}

void modifier_stocker::on_confirmation_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->doubleSpinBox->value()==NULL)
    {
        QMessageBox::information(this,"Enregistrement","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    }
    else
    {
        QSqlQuery mod;
        mod.prepare("update stocker set Ref_Entr=:ref,Qte_stock=:qte where Num_Mar=:num");
        mod.bindValue(":num",ui->lineEdit->text());
        mod.bindValue(":ref",ui->lineEdit_2->text());
        mod.bindValue(":qte",ui->doubleSpinBox->value());
        mod.exec();
        QMessageBox::information(this,"Modification","Modification avec succès !");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->doubleSpinBox->clear();
        this->close();
    }
}

void modifier_stocker::on_annulation_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->doubleSpinBox->clear();
    this->close();
}
