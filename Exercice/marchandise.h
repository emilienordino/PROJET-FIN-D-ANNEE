#ifndef MARCHANDISE_H
#define MARCHANDISE_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class marchandise;
}

class marchandise : public QDialog
{
    Q_OBJECT

public:
    explicit marchandise(QWidget *parent = 0);
    ~marchandise();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::marchandise *ui;
};

#endif // MARCHANDISE_H
