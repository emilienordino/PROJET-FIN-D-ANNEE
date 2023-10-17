#ifndef LIVRER_H
#define LIVRER_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class livrer;
}

class livrer : public QDialog
{
    Q_OBJECT

public:
    explicit livrer(QWidget *parent = 0);
    ~livrer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::livrer *ui;
};

#endif // LIVRER_H
