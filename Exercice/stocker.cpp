#include "stocker.h"
#include "ui_stocker.h"

stocker::stocker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stocker)
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

stocker::~stocker()
{
    delete ui;
}

void stocker::on_pushButton_clicked()
{
    QSqlQuery requete;

    QString num_mar = ui->lineEdit_2->text();
    QString ref_entr = ui->lineEdit_3->text();
    int Qte_stock = ui->doubleSpinBox->value();

    if(num_mar.isEmpty() || ref_entr.isEmpty() || Qte_stock==NULL)
    {
        QMessageBox::information(this,"Ajout","Veillez remplir tous les champs");
    }
    else
    {
        requete.prepare("insert into stocker(Num_Mar,Ref_Entr,Qte_stock) values(:num_mar,:ref_entr,:Qte)");
        requete.bindValue(":num_mar",num_mar);
        requete.bindValue(":ref_entr",ref_entr);
        requete.bindValue(":Qte",Qte_stock);
        requete.exec();

        QMessageBox::information(this,"Enregistrement","Enregistrement reusii");
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->doubleSpinBox->clear();
         this->close();
    }
}

void stocker::on_pushButton_2_clicked()
{
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->doubleSpinBox->clear();
    this->close();
}
