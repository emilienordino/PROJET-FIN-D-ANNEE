#ifndef SUPP_STOCKER_H
#define SUPP_STOCKER_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class supp_stocker;
}

class supp_stocker : public QDialog
{
    Q_OBJECT

public:
    explicit supp_stocker(QWidget *parent = 0);
    ~supp_stocker();

private slots:
    void on_supprimer_stocker_clicked();

    void on_annulation_clicked();

private:
    Ui::supp_stocker *ui;
};

#endif // SUPP_STOCKER_H
