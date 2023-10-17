#ifndef SUPP_LIVRER_H
#define SUPP_LIVRER_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class supp_livrer;
}

class supp_livrer : public QDialog
{
    Q_OBJECT

public:
    explicit supp_livrer(QWidget *parent = 0);
    ~supp_livrer();

private slots:
    void on_supprimer_livrer_clicked();

    void on_annulation_clicked();

private:
    Ui::supp_livrer *ui;
};

#endif // SUPP_LIVRER_H
