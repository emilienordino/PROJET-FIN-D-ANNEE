#ifndef MODIFIER_FOURNISSEUR_H
#define MODIFIER_FOURNISSEUR_H

#include <QDialog>
#include "connexion_mysql.h"


namespace Ui {
class modifier_fournisseur;
}

class modifier_fournisseur : public QDialog
{
    Q_OBJECT

public:
    explicit modifier_fournisseur(QWidget *parent = 0);
    ~modifier_fournisseur();

public slots:
    void setText(const QString &text);

private slots:
    //void on_pushButton_clicked();
    
    void on_pushButton_2_clicked();

    void on_confirmation_clicked();


private:
    Ui::modifier_fournisseur *ui;
    QString ref;
};

#endif // MODIFIER_FOURNISSEUR_H
