#ifndef MODIFIER_STOCKER_H
#define MODIFIER_STOCKER_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class modifier_stocker;
}

class modifier_stocker : public QDialog
{
    Q_OBJECT

public:
    explicit modifier_stocker(QWidget *parent = 0);
    ~modifier_stocker();

private slots:
    void on_confirmation_clicked();

    void on_annulation_clicked();

private:
    Ui::modifier_stocker *ui;
};

#endif // MODIFIER_STOCKER_H
