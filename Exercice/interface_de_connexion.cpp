#include "interface_de_connexion.h"
#include "ui_interface_de_connexion.h"


Interface_de_connexion::Interface_de_connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Interface_de_connexion),principale(new Principale)
{
    ui->setupUi(this);
    //ui->this->setStyleSheet("background-image:url('C:/Users/FANOMEZANTSOA Ordino/Pictures/add-to-cart1 (2).PNG')");

    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/ajouter-un-ami (2) - Copie - Copie.png");
    QIcon icon1("C:/Users/FANOMEZANTSOA Ordino/Pictures/lock_8260904.png");
    ui->lineEdit_nom->addAction(icon,QLineEdit::LeadingPosition);
    ui->lineEdit_2_mot_de_passe->addAction(icon1,QLineEdit::LeadingPosition);
    ui->lineEdit_nom->setStyleSheet("QLineEdit {"
                                    "border-radius:20px;"
                                    "color:black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    //"background-color:rgb(44,44,44);"
                                    "background-color:white;"
                                    "border:1px ridge rgb(80,80,80);"
                                    "}"
                                    "QLineEdit:hover {"
                                    "border:1px ridge rgb(107,107,107);"
                                    "}");
    ui->lineEdit_2_mot_de_passe->setStyleSheet("QLineEdit {"
                                               "border-radius:20px;"
                                               "color:black;"
                                               "font: 63 11pt 'Yu Gothic UI Semibold';"
                                               //"background-color:rgb(44,44,44);"
                                               "background-color:white;"
                                               "border:1px ridge rgb(80,80,80);"
                                               "}"
                                               "QLineEdit:hover {"
                                               "border:1px ridge rgb(107,107,107);"
                                               "}");
    ui->lineEdit_2_mot_de_passe->setEchoMode(QLineEdit::Password);
    ui->connexion->setStyleSheet("QPushButton {"
                                  "background-color: rgb(9, 94, 9);"
                                  "border-radius: 6px;"
                                  "border: 1px solid black;"
                                  "font: 63 11pt 'Yu Gothic UI Semibold';"
                                  "color:white;"
                                  "}"
                                  "QPushButton:hover {"
                                  "background-color: rgb(51, 170, 51);"
                                  "border:2px ridge white;"
                                  "}");
    ui->quitter->setStyleSheet("QPushButton {"
                                    "background-color: red;"
                                    "border-radius: 6px;"
                                    "border: 1px solid black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "color:white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "background-color: rgb(214,42,42);"
                                    "border:2px ridge white;"
                                    "}");
    ui->label_5->setStyleSheet("QLabel {"
                                      "border-image: url('C:/Users/FANOMEZANTSOA Ordino/Pictures/ajouter-un-ami (2).png') stretch;"
                                      //"background-image:url('C:/Users/FANOMEZANTSOA Ordino/Pictures/ajouter-un-ami.png')"
                                      //"border-radius: 40px;"
                                      "}");
    ui->label_6->setStyleSheet("QLabel {"
                               "border-radius: 50px;"
                               "border: 1px solid white;"
                               "background-color:red;"
                               "}");
    ui->label_3->raise();
    ui->label_4->raise();
    ui->label_6->raise();
    ui->label_5->raise();
    ui->connexion->raise();
    ui->quitter->raise();
    ui->lineEdit_2_mot_de_passe->raise();
    ui->lineEdit_nom->raise();
}

Interface_de_connexion::~Interface_de_connexion()
{
    delete ui;
}

void Interface_de_connexion::on_connexion_clicked()
{
    QString nom = "Admin";
    QString mdp = "ENI 2023";
    if(ui->lineEdit_nom->text().isEmpty() || ui->lineEdit_2_mot_de_passe->text().isEmpty())
    {
        QMessageBox erreur;
        erreur.setWindowTitle("Erreur");
        QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/remove.png");
        erreur.setWindowIcon(icon);
        erreur.setIcon(QMessageBox::Information);
        erreur.setText("Veillez remplir tous les champs de connexion");
        erreur.setStyleSheet("color: black;");
        erreur.exec();
    }
    else if(ui->lineEdit_2_mot_de_passe->text()== mdp && ui->lineEdit_nom->text() == nom)
    {
        principale->show();
        this->close();
    }
    else
    {
        QMessageBox erreur;
        erreur.setWindowTitle("Erreur");
        QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/remove.png");
        erreur.setWindowIcon(icon);
        erreur.setIcon(QMessageBox::Information);
        erreur.setText("Erreur de connexion, veillez verifier votre nom et votre mot de passe");
        erreur.setStyleSheet("color: black;");
        erreur.exec();
    }
}

void Interface_de_connexion::on_quitter_clicked()
{
    this->close();
}
