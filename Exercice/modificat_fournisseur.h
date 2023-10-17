#ifndef MODIFICAT_FOURNISSEUR_H
#define MODIFICAT_FOURNISSEUR_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class modificat_fournisseur;
}

class modificat_fournisseur : public QDialog
{
    Q_OBJECT

public:
    explicit modificat_fournisseur(QWidget *parent = 0);
    ~modificat_fournisseur();

private slots:
    void on_modif_fourn_clicked();

    void on_annulation_clicked();

private:
    Ui::modificat_fournisseur *ui;
};

#endif // MODIFICAT_FOURNISSEUR_H
