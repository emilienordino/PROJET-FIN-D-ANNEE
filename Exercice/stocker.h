#ifndef STOCKER_H
#define STOCKER_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class stocker;
}

class stocker : public QDialog
{
    Q_OBJECT

public:
    explicit stocker(QWidget *parent = 0);
    ~stocker();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::stocker *ui;
};

#endif // STOCKER_H
