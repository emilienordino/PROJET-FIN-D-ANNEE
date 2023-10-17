#ifndef SUPP_MARCHANDISE_H
#define SUPP_MARCHANDISE_H

#include <QDialog>
#include "connexion_mysql.h"

namespace Ui {
class supp_marchandise;
}

class supp_marchandise : public QDialog
{
    Q_OBJECT

public:
    explicit supp_marchandise(QWidget *parent = 0);
    ~supp_marchandise();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::supp_marchandise *ui;
};

#endif // SUPP_MARCHANDISE_H
