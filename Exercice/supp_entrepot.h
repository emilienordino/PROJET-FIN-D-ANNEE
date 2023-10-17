#ifndef SUPP_ENTREPOT_H
#define SUPP_ENTREPOT_H

#include <QDialog>
#include "connexion_mysql.h"

namespace Ui {
class supp_entrepot;
}

class supp_entrepot : public QDialog
{
    Q_OBJECT

public:
    explicit supp_entrepot(QWidget *parent = 0);
    ~supp_entrepot();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::supp_entrepot *ui;
};

#endif // SUPP_ENTREPOT_H
