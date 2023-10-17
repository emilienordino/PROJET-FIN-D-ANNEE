#ifndef SUPP_H
#define SUPP_H

#include <QDialog>
#include "connexion_mysql.h"

namespace Ui {
class Supp;
}

class Supp : public QDialog
{
    Q_OBJECT

public:
    explicit Supp(QWidget *parent = 0);
    ~Supp();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Supp *ui;
};

#endif // SUPP_H
