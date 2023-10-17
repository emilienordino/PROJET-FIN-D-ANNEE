#include "marchandise.h"
#include "ui_marchandise.h"

marchandise::marchandise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::marchandise)
{
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/onlineshopping_117952.ico");
    this->setWindowIcon(icon);

    ui->setupUi(this);
    connexionBD();
    QPixmap image("C:/Users/FANOMEZANTSOA Ordino/Pictures/add-to-cart.png");
    ui->image_march->setPixmap(image.scaled(ui->image_march->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
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

marchandise::~marchandise()
{
    delete ui;
}

void marchandise::on_pushButton_clicked()
{
    QSqlQuery requete;

    QString reff = ui->lineEdit->text();
    QString Design = ui->lineEdit_2->text();
    float prix = ui->doubleSpinBox->value();

    if(reff.isEmpty() || Design.isEmpty() || prix==NULL)
    {
        QMessageBox::information(this,"Ajout","Veillez remplir tous les champs");
    }
    else
    {
        requete.prepare("insert into marchandises(Ref_Mar,Designation,Prix_de_vente) values(:Ref,:design,:prix)");
        requete.bindValue(":Ref",reff);
        requete.bindValue(":design",Design);
        requete.bindValue(":prix",prix);
        requete.exec();

        QMessageBox::information(this,"Enregistrement","Enregistrement reussi");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->doubleSpinBox->clear();
         this->close();
    }
}


void marchandise::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->doubleSpinBox->clear();
    this->close();
}
