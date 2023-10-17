#ifndef SUPP_FOURNISSEUR_H
#define SUPP_FOURNISSEUR_H

#include <QDialog>
#include "connexion_mysql.h"

namespace Ui {
class supp_fournisseur;
}

class supp_fournisseur : public QDialog
{
    Q_OBJECT

public:
    explicit supp_fournisseur(QWidget *parent = 0);
    ~supp_fournisseur();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::supp_fournisseur *ui;
};

#endif // SUPP_FOURNISSEUR_H
