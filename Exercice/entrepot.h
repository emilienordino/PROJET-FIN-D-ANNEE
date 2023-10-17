#ifndef ENTREPOT_H
#define ENTREPOT_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"
#include "QStandardItemModel"

namespace Ui {
class entrepot;
}

class entrepot : public QDialog
{
    Q_OBJECT

public:
    explicit entrepot(QWidget *parent = 0);
    ~entrepot();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::entrepot *ui;
    //QStandardItemModel *modele;
};

#endif // ENTREPOT_H
