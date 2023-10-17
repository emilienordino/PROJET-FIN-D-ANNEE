#ifndef INTERFACE_DE_CONNEXION_H
#define INTERFACE_DE_CONNEXION_H

#include <QDialog>
#include "principale.h"
#include "QMessageBox"

namespace Ui {
class Interface_de_connexion;
}

class Interface_de_connexion : public QDialog
{
    Q_OBJECT

public:
    explicit Interface_de_connexion(QWidget *parent = 0);
    ~Interface_de_connexion();

private slots:
    void on_connexion_clicked();

    void on_quitter_clicked();

private:
    Ui::Interface_de_connexion *ui;
    Principale *principale;
};

#endif // INTERFACE_DE_CONNEXION_H
