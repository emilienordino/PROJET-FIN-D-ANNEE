#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"
#include "QSqlQueryModel"

namespace Ui {
class Fournisseur;
}

class Fournisseur : public QDialog
{
    Q_OBJECT

public:
    explicit Fournisseur(QWidget *parent = 0);
    ~Fournisseur();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Fournisseur *ui;
};

#endif // FOURNISSEUR_H
