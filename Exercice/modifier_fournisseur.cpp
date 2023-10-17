#include "modifier_fournisseur.h"
#include "ui_modifier_fournisseur.h"
#include "principale.h"

modifier_fournisseur::modifier_fournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier_fournisseur)
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
    ui->pushButton_2->setStyleSheet("QPushButton{"
                                    "border-radius:5px;"
                                    "background-color:rgb(31,29,29);"
                                    "}"
                                    "QPushButton:hover{"
                                    "color:white;"
                                    "background-color: rgb(21,21,21);"
                                    "border:1px ridge rgb(53,53,53);"
                                    "}");
}

modifier_fournisseur::~modifier_fournisseur()
{
    delete ui;
}

void modifier_fournisseur::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    this->close();
}

void modifier_fournisseur::setText(const QString &text)
{
    // Utilisez la variable 'text' comme vous le souhaitez dans SecondWindow
    //qDebug() << "Text received in SecondWindow:" << text;
    // Par exemple, affichez-le dans un QLabel dans cette fenêtre
    ref=text;
    ui->lineEdit->setText(ref);
}

void modifier_fournisseur::on_confirmation_clicked()
{
    QString ref = ui->lineEdit->text();
    QString raison = ui->lineEdit_2->text();
    QString nif = ui->lineEdit_3->text();
    QString adresse = ui->lineEdit_4->text();
    QString tel = ui->lineEdit_5->text();

    if(ref.isEmpty() || raison.isEmpty() || nif.isEmpty() || adresse.isEmpty() || tel.isEmpty())
    {
        QMessageBox::information(this,"Enregistrement","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    }
    else
    {
        QSqlQuery mod;
        mod.prepare("UPDATE fournisseur SET Raison_social=:raison, NIF=:nif, Adresse=:adresse, Tel_Frs=:tel WHERE Ref_frs=:ref_frs");
        mod.bindValue(":raison", ui->lineEdit_2->text());
        mod.bindValue(":nif", ui->lineEdit_3->text());
        mod.bindValue(":adresse", ui->lineEdit_4->text());
        mod.bindValue(":tel", ui->lineEdit_5->text());
        mod.bindValue(":ref_frs", ui->lineEdit->text());
        mod.exec();

        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
        this->close();
    }
}

