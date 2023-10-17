#include "fournisseur.h"
#include "ui_fournisseur.h"

Fournisseur::Fournisseur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fournisseur)
{
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/onlineshopping_117952.ico");
    this->setWindowIcon(icon);

    ui->setupUi(this);
    connexionBD();
    QPixmap img("C:/Users/FANOMEZANTSOA Ordino/Pictures/icons8-fournisseur-94.png");
    ui->test_image->setPixmap(img);
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
}

Fournisseur::~Fournisseur()
{
    delete ui;
}

/*void Fournisseur::on_pushButton_clicked()
{
    QSqlQuery requete;

    QString Refference = ui->lineEdit->text();
    QString Raison = ui->lineEdit_2->text();
    QString Nif = ui->lineEdit_3->text();
    QString Adresse = ui->lineEdit_4->text();
    QString Tel = ui->lineEdit_5->text();

    if(Refference.isEmpty() || Raison.isEmpty() || Adresse.isEmpty())
    {
        QMessageBox::information(this,"Recherche","Les champs de Refference, Raison social et Adresse sont obligatoires");
    }

    else
    {
        requete.prepare("insert into fournisseur(Ref_frs, Raison_social, NIF, Adresse, Tel_Frs) values(:Ref,:Raison,:NIF,:Adresse,:Tel)");
        requete.bindValue(":Ref",Refference);
        requete.bindValue(":Raison",Raison);
        requete.bindValue(":NIF",Nif);
        requete.bindValue(":Adresse",Adresse);
        requete.bindValue(":Tel",Tel);
        requete.exec();

        QMessageBox::information(this,"Enregistrement","Enregistrement reussi");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
        this->close();
    }
}*/

void Fournisseur::on_pushButton_clicked()
{
    QSqlQuery requete;

    QString Refference = ui->lineEdit->text();
    QString Raison = ui->lineEdit_2->text();
    QString Nif = ui->lineEdit_3->text();
    QString Adresse = ui->lineEdit_4->text();
    QString Tel = ui->lineEdit_5->text();

    if (Refference.isEmpty() || Raison.isEmpty() || Adresse.isEmpty())
    {
        QMessageBox::information(this, "Recherche", "Les champs de Référence, Raison sociale et Adresse sont obligatoires");
    }
    else
    {
        // Vérifier si la référence existe déjà
        requete.prepare("SELECT Ref_frs FROM fournisseur WHERE Ref_frs = :Ref");
        requete.bindValue(":Ref", Refference);
        if (requete.exec() && requete.next())
        {
            // La référence existe déjà, afficher un message
            QMessageBox::warning(this, "Existe déjà", "La référence existe déjà dans la base de données.");
        }
        else
        {
            // La référence n'existe pas, ajouter le fournisseur
            requete.prepare("INSERT INTO fournisseur(Ref_frs, Raison_social, NIF, Adresse, Tel_Frs) VALUES(:Ref, :Raison, :NIF, :Adresse, :Tel)");
            requete.bindValue(":Ref", Refference);
            requete.bindValue(":Raison", Raison);
            requete.bindValue(":NIF", Nif);
            requete.bindValue(":Adresse", Adresse);
            requete.bindValue(":Tel", Tel);

            if (requete.exec())
            {
                // Enregistrement réussi
                QMessageBox::information(this, "Enregistrement", "Enregistrement réussi");
                ui->lineEdit->clear();
                ui->lineEdit_2->clear();
                ui->lineEdit_3->clear();
                ui->lineEdit_4->clear();
                ui->lineEdit_5->clear();
                this->close();
            }
            else
            {
                // Erreur lors de l'insertion
                QMessageBox::critical(this, "Erreur", "Erreur lors de l'insertion dans la base de données.");
            }
        }
    }
}


void Fournisseur::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    this->close();
}
