#ifndef MODIFIER_ENTREPOT_H
#define MODIFIER_ENTREPOT_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class modifier_entrepot;
}

class modifier_entrepot : public QDialog
{
    Q_OBJECT

public:
    explicit modifier_entrepot(QWidget *parent = 0);
    ~modifier_entrepot();

private slots:
    void on_confirmation_clicked();

    void on_annulation_clicked();

private:
    Ui::modifier_entrepot *ui;
};

#endif // MODIFIER_ENTREPOT_H
