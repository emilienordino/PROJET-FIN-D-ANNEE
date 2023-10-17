#ifndef MODIFIER_LIVRER_H
#define MODIFIER_LIVRER_H

#include <QDialog>
#include "QMessageBox"
#include "connexion_mysql.h"

namespace Ui {
class modifier_livrer;
}

class modifier_livrer : public QDialog
{
    Q_OBJECT

public:
    explicit modifier_livrer(QWidget *parent = 0);
    ~modifier_livrer();

private slots:

    void on_confirmation_clicked();

    void on_annulation_clicked();

private:
    Ui::modifier_livrer *ui;
};

#endif // MODIFIER_LIVRER_H
