#ifndef PRINCIPALE_H
#define PRINCIPALE_H

#include <QMainWindow>
#include <QCoreApplication>
#include "QInputDialog"
#include "QDebug"
#include "QLabel"
#include "connexion_mysql.h"
#include "fournisseur.h"
#include "marchandise.h"
#include "entrepot.h"
#include "livrer.h"
#include "stocker.h"
#include "QStandardItemModel"
#include "QSqlQueryModel"
#include "modifier_fournisseur.h"
#include "modifier_marchand.h"
#include "modifier_entrepot.h"
#include "modifier_livrer.h"
#include "modifier_stocker.h"
#include "QGraphicsBlurEffect"
#include "QVBoxLayout"

namespace Ui {
class Principale;
}

class Principale : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principale(QWidget *parent = 0);
    ~Principale();
    void ouvrir_fournisseur(void);
    void ouvrir_a_propos();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void affichage_entrepot();
    void affichage_fournisseur();
    void affichage_marchandises();
    void affichage_livrer();
    void affichage_stocker();
    void affichage_bon_livraison();
    void affichage_march_livree();
    void affichage_inventaire();


    void on_stock_actualiser_clicked();

    void on_pushButton_17_clicked();

    void on_actualisation_marchandise_clicked();

    void on_supp_marchandise_clicked();

    void on_actual_entrepot_clicked();

    void on_supp_entrepot_clicked();

    void on_actual_livrer_clicked();

    void on_supp_livrer_clicked();

    void on_supp_stocker_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_recherche_fourn_clicked();

    void on_actual_bon_livraison_clicked();

    //void on_pushButton_2_clicked();

    void on_modifi_fournisseur_clicked();

    void on_modifi_march_clicked();

    void on_recher_march_clicked();

    void on_modifi_entrepot_clicked();

    void on_rechercher_entrepot_clicked();

    void on_recherche_livrer_clicked();

    void on_modifi_livrer_clicked();

    void on_modifi_stock_clicked();

    void on_rechercher_stocker_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

    //void on_pushButton_5_recherche_bon_livraison_clicked();

    void on_pushButton_18_supp_tous_fourn_clicked();

    void on_pushButton_5_recherche_bon_livraison_clicked();

    void on_pushButton_5_march_livr_clicked();

    void on_pushButton_5_actualisation_march_liv_clicked();

    void on_recherche_inventaire_clicked();

    void on_actualise_inventaire_clicked();

signals: // Ajoutez la déclaration du signal textFromLineEdit
    void textEntered(const QString &text);

private:
    Ui::Principale *ui;
    Fournisseur *fournisseur;
    marchandise *marchandises;
    entrepot *entrepots;
    livrer *Livrer;
    stocker *Stocker;
    modifier_fournisseur *modif_fourn;
    modifier_marchand *modif_march;
    modifier_entrepot *modif_entr;
    modifier_livrer *modif_livr;
    modifier_stocker *modif_stock;
    QStandardItemModel *modele;
    QStandardItemModel *modele1;
    QStandardItemModel *modele2;
    QStandardItemModel *modele3;
    QStandardItemModel *modele4;
    QStandardItemModel *modele5;
};

#endif // PRINCIPALE_H
