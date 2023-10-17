#include "livrer.h"
#include "ui_livrer.h"

livrer::livrer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::livrer)
{
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/onlineshopping_117952.ico");
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
}

livrer::~livrer()
{
    delete ui;
}

void livrer::on_pushButton_clicked()
{
    QSqlQuery requete;

    QString Ref_frs = ui->lineEdit_2->text();
    QString Num_mar = ui->lineEdit_3->text();
    QDate date = ui->dateEdit->date();
    float prix = ui->doubleSpinBox->value();
    int Quantite = ui->doubleSpinBox_2->value();

    if(Ref_frs.isEmpty() || Num_mar.isEmpty() || date.isNull() || prix==NULL || Quantite==NULL)
    {
        QMessageBox::information(this,"Ajout","Veillez remplir tous les champs");
    }
    else
    {
        requete.prepare("insert into livrer(Ref_frs,Num_Mar,Date_livraison,Prix_achat,Qte_livree) values(:Ref_frs,:Num,:date,:prix,:Qte)");
        requete.bindValue(":Ref_frs",Ref_frs);
        requete.bindValue(":Num",Num_mar);
        requete.bindValue(":date",date);
        requete.bindValue(":prix",prix);
        requete.bindValue(":Qte",Quantite);
        requete.exec();

        QMessageBox::information(this,"Enregistrement","Enregistrement reussi");
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->dateEdit->clear();
        ui->doubleSpinBox->clear();
        ui->doubleSpinBox_2;
         this->close();
    }
}

void livrer::on_pushButton_2_clicked()
{
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->dateEdit->clear();
    ui->doubleSpinBox->clear();
    ui->doubleSpinBox_2->clear();
    this->close();
}
