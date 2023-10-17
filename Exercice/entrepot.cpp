#include "entrepot.h"
#include "ui_entrepot.h"

entrepot::entrepot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::entrepot)
{
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/onlineshopping_117952.ico");
    this->setWindowIcon(icon);

    ui->setupUi(this);
    connexionBD();
    QPixmap image("C:/Users/FANOMEZANTSOA Ordino/Pictures/icons8-entrepôt-48.png");
    ui->image_entrepot->setPixmap(image.scaled(ui->image_entrepot->size(),Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
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

entrepot::~entrepot()
{
    delete ui;
}

void entrepot::on_pushButton_clicked()
{
    QSqlQuery requete;

    QString ref = ui->lineEdit->text();
    QString Adresse = ui->lineEdit_2->text();
    if(ref.isEmpty() || Adresse.isEmpty())
    {
        QMessageBox::information(this,"Ajout","Veillez remplir tous les champs");
    }
    else
    {
        requete.prepare("insert into entrepot(Ref_Entr,Adresse) values(:ref,:adresse)");
        requete.bindValue(":ref",ref);
        requete.bindValue(":adresse", Adresse);
        requete.exec();

        QMessageBox::information(this,"Enregistrement","Enregistrement reussi");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        this->close();
    }
}



void entrepot::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    this->close();
}
