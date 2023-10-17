#include "principale.h"
#include "ui_principale.h"

Principale::Principale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principale),fournisseur(new Fournisseur),marchandises(new marchandise),entrepots(new entrepot),Livrer(new livrer),Stocker(new stocker)
    ,modif_fourn(new modifier_fournisseur),modif_march(new modifier_marchand),modif_entr(new modifier_entrepot),modif_livr(new modifier_livrer),modif_stock(new modifier_stocker)


{
    ui->setupUi(this);

    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/onlineshopping_117952.ico");
    this->setWindowIcon(icon);

    // CSS POUR LES LOGO
    ui->logo->setStyleSheet("QPushButton {"
                            "border-image: url('C:/Users/FANOMEZANTSOA Ordino/Pictures/add_to_c (2).PNG') stretch;"
                            "border-radius: 20px;"
                            "}");
    ui->logo1->setStyleSheet("QPushButton {"
                           "border-image: url('C:/Users/FANOMEZANTSOA Ordino/Pictures/add_to_c (2).PNG') stretch;"
                           "border-radius: 20px;"
                           "}");

    ui->titre->setStyleSheet("QLabel {"
                                   "color: white;"
                                   "border: 2px solid red;"
                                   "font: 75 47pt 'Agency FB';"
                                   "border-image: url('C:/Users/FANOMEZANTSOA Ordino/Pictures/logo3 (3).PNG') stretch;"
                                   "border-radius:10px;"
                                   "}");

    for (int i = 0; i < ui->tabWidget->count(); ++i) {
        QWidget* tabContent = ui->tabWidget->widget(i);
        //tabContent->setStyleSheet("background-image: url('C:/Users/FANOMEZANTSOA Ordino/Pictures/Capture4 (3).PNG');");
        tabContent->setStyleSheet("background-color:rgb(29,29,29);");
    }


    ui->pushButton->setStyleSheet("QPushButton {"
                                  "background-color: rgb(9, 94, 9);"
                                  "border-radius: 6px;"
                                  "border: 1px solid black;"
                                  "font: 63 11pt 'Yu Gothic UI Semibold';"
                                  "color:white;"
                                  "}"
                                  "QPushButton:hover {"
                                  "background-color: rgb(51, 170, 51);"
                                  "border:2px ridge white;"
                                  "}");
    ui->pushButton_3->setStyleSheet("QPushButton {"
                                    "background-color: red;"
                                    "border-radius: 6px;"
                                    "border: 1px solid black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "color:white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "background-color: rgb(214,42,42);"
                                    "border:2px ridge white;"
                                    "}");
    ui->pushButton_18_supp_tous_fourn->setStyleSheet("QPushButton{"
                                                     "background-color:grey;"
                                                     "border-radius:6px;"
                                                     "border: 1px solid black;"
                                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                     "color:white;"
                                                     "}"
                                                     "QPushButton:hover {"
                                                     "background-color: rgb(214,42,42);"
                                                     "border:2px ridge white;"
                                                     "}");
    ui->recherche_fourn->setStyleSheet("QPushButton {"
                                       "border:2px ridge rgb(90,88,88);"
                                       "border-radius: 8px;"
                                       "font: 63 11pt 'Yu Gothic UI Semibold';"
                                       "background-color: rgb(44,44,44);"
                                       "color: white;"
                                       "}"
                                       "QPushButton:hover {"
                                       "border:3px ridge rgb(107,107,107);"
                                       "background-color:rgb(51,49,49);"
                                       "color: white;"
                                       "}");
    ui->lineEdit_recherche->setStyleSheet("QLineEdit {"
                                          "border-radius:20px;"
                                          "color:white;"
                                          "font: 63 11pt 'Yu Gothic UI Semibold';"
                                          "background-color:rgb(44,44,44);"
                                          "border:1px ridge rgb(80,80,80);"
                                          "}"
                                          "QLineEdit:hover {"
                                          "border:1px ridge rgb(107,107,107);"
                                          "}");
    ui->pushButton_17->setStyleSheet("QPushButton {"
                                     "border:2px ridge rgb(90,88,88);"
                                     "border-radius: 8px;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "background-color: rgb(44,44,44);"
                                     "color: white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "border:3px ridge rgb(107,107,107);"
                                     "background-color:rgb(51,49,49);"
                                     "color: white;"
                                     "}");
    ui->modifi_fournisseur->setStyleSheet("QPushButton {"
                                          "border:2px ridge rgb(90,88,88);"
                                          "border-radius: 8px;"
                                          "font: 63 11pt 'Yu Gothic UI Semibold';"
                                          "background-color: rgb(44,44,44);"
                                          "color: white;"
                                          "}"
                                          "QPushButton:hover {"
                                          "border:3px ridge rgb(107,107,107);"
                                          "background-color:rgb(51,49,49);"
                                          "color: white;"
                                          "}");
    ui->tableView->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(20,20,20);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");

    //CSS POUR MARCHANDISES
    ui->pushButton_4->setStyleSheet("QPushButton {"
                                    "background-color: rgb(9, 94, 9);"
                                    "border-radius: 6px;"
                                    "border: 1px solid black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "color:white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "background-color: rgb(51, 170, 51);"
                                    "border:2px ridge white;"
                                    "}");
    ui->pushButton_6->setStyleSheet("QPushButton {"
                                    "background-color: red;"
                                    "border-radius: 6px;"
                                    "border: 1px solid black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "color:white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "background-color: rgb(214,42,42);"
                                    "border:2px ridge white;"
                                    "}");
    ui->supp_marchandise->setStyleSheet("QPushButton{"
                                        "background-color:grey;"
                                        "border-radius:6px;"
                                        "border: 1px solid black;"
                                        "font: 63 11pt 'Yu Gothic UI Semibold';"
                                        "color:white;"
                                        "}"
                                        "QPushButton:hover {"
                                        "background-color: rgb(214,42,42);"
                                        "border:2px ridge white;"
                                        "}");
    ui->recher_march->setStyleSheet("QPushButton {"
                                    "border:2px ridge rgb(90,88,88);"
                                    "border-radius: 8px;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "background-color: rgb(44,44,44);"
                                    "color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "border:3px ridge rgb(107,107,107);"
                                    "background-color:rgb(51,49,49);"
                                    "color: white;"
                                    "}");
    ui->lineEdit_rech_march->setStyleSheet("QLineEdit {"
                                           "border-radius:20px;"
                                           "color:white;"
                                           "font: 63 11pt 'Yu Gothic UI Semibold';"
                                           "background-color:rgb(44,44,44);"
                                           "border:1px ridge rgb(80,80,80);"
                                           "}"
                                           "QLineEdit:hover {"
                                           "border:1px ridge rgb(107,107,107);"
                                           "}");
    ui->actualisation_marchandise->setStyleSheet("QPushButton {"
                                                 "border:2px ridge rgb(90,88,88);"
                                                 "border-radius: 8px;"
                                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                 "background-color: rgb(44,44,44);"
                                                 "color: white;"
                                                 "}"
                                                 "QPushButton:hover {"
                                                 "border:3px ridge rgb(107,107,107);"
                                                 "background-color:rgb(51,49,49);"
                                                 "color: white;"
                                                 "}");
    ui->modifi_march->setStyleSheet("QPushButton {"
                                    "border:2px ridge rgb(90,88,88);"
                                    "border-radius: 8px;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "background-color: rgb(44,44,44);"
                                    "color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "border:3px ridge rgb(107,107,107);"
                                    "background-color:rgb(51,49,49);"
                                    "color: white;"
                                    "}");
    ui->lineEdit_rech_march->setPlaceholderText("Par refference");
    ui->tableView_2->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(29,28,28);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");

    //CSS POUR ENTREPOT
    ui->pushButton_7->setStyleSheet("QPushButton {"
                                    "background-color: rgb(9, 94, 9);"
                                    "border-radius: 6px;"
                                    "border: 1px solid black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "color:white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "background-color: rgb(51, 170, 51);"
                                    "border:2px ridge white;"
                                    "}");
    ui->pushButton_9->setStyleSheet("QPushButton {"
                                    "background-color: red;"
                                    "border-radius: 6px;"
                                    "border: 1px solid black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "color:white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "background-color: rgb(214,42,42);"
                                    "border:2px ridge white;"
                                    "}");
    ui->supp_entrepot->setStyleSheet("QPushButton{"
                                     "background-color:grey;"
                                     "border-radius:6px;"
                                     "border: 1px solid black;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "color:white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "background-color: rgb(214,42,42);"
                                     "border:2px ridge white;"
                                     "}");
    ui->rechercher_entrepot->setStyleSheet("QPushButton {"
                                           "border:2px ridge rgb(90,88,88);"
                                           "border-radius: 8px;"
                                           "font: 63 11pt 'Yu Gothic UI Semibold';"
                                           "background-color: rgb(44,44,44);"
                                           "color: white;"
                                           "}"
                                           "QPushButton:hover {"
                                           "border:3px ridge rgb(107,107,107);"
                                           "background-color:rgb(51,49,49);"
                                           "color: white;"
                                           "}");
    ui->lineEdit_2_rechercher_entrepot->setStyleSheet("QLineEdit {"
                                                      "border-radius:20px;"
                                                      "color:white;"
                                                      "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                      "background-color:rgb(44,44,44);"
                                                      "border:1px ridge rgb(80,80,80);"
                                                      "}"
                                                      "QLineEdit:hover {"
                                                      "border:1px ridge rgb(107,107,107);"
                                                      "}");
    ui->actual_entrepot->setStyleSheet("QPushButton {"
                                       "border:2px ridge rgb(90,88,88);"
                                       "border-radius: 8px;"
                                       "font: 63 11pt 'Yu Gothic UI Semibold';"
                                       "background-color: rgb(44,44,44);"
                                       "color: white;"
                                       "}"
                                       "QPushButton:hover {"
                                       "border:3px ridge rgb(107,107,107);"
                                       "background-color:rgb(51,49,49);"
                                       "color: white;"
                                       "}");
    ui->modifi_entrepot->setStyleSheet("QPushButton {"
                                       "border:2px ridge rgb(90,88,88);"
                                       "border-radius: 8px;"
                                       "font: 63 11pt 'Yu Gothic UI Semibold';"
                                       "background-color: rgb(44,44,44);"
                                       "color: white;"
                                       "}"
                                       "QPushButton:hover {"
                                       "border:3px ridge rgb(107,107,107);"
                                       "background-color:rgb(51,49,49);"
                                       "color: white;"
                                       "}");
    ui->lineEdit_2_rechercher_entrepot->setPlaceholderText("Par refference");
    ui->tableView_3->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(29,28,28);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");

//CSS POUR LIVRER
    ui->pushButton_10->setStyleSheet("QPushButton {"
                                     "background-color: rgb(9, 94, 9);"
                                     "border-radius: 6px;"
                                     "border: 1px solid black;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "color:white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "background-color: rgb(51, 170, 51);"
                                     "border:2px ridge white;"
                                     "}");
    ui->pushButton_12->setStyleSheet("QPushButton {"
                                     "background-color: red;"
                                     "border-radius: 6px;"
                                     "border: 1px solid black;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "color:white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "background-color: rgb(214,42,42);"
                                     "border:2px ridge white;"
                                     "}");
    ui->supp_livrer->setStyleSheet("QPushButton{"
                                   "background-color:grey;"
                                   "border-radius:6px;"
                                   "border: 1px solid black;"
                                   "font: 63 11pt 'Yu Gothic UI Semibold';"
                                   "color:white;"
                                   "}"
                                   "QPushButton:hover {"
                                   "background-color: rgb(214,42,42);"
                                   "border:2px ridge white;"
                                   "}");
    ui->recherche_livrer->setStyleSheet("QPushButton {"
                                        "border:2px ridge rgb(90,88,88);"
                                        "border-radius: 8px;"
                                        "font: 63 11pt 'Yu Gothic UI Semibold';"
                                        "background-color: rgb(44,44,44);"
                                        "color: white;"
                                        "}"
                                        "QPushButton:hover {"
                                        "border:3px ridge rgb(107,107,107);"
                                        "background-color:rgb(51,49,49);"
                                        "color: white;"
                                        "}");
    ui->lineEdit_3_rechercher_livrer->setStyleSheet("QLineEdit {"
                                                    "border-radius:20px;"
                                                    "color:white;"
                                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                    "background-color:rgb(44,44,44);"
                                                    "border:1px ridge rgb(80,80,80);"
                                                    "}"
                                                    "QLineEdit:hover {"
                                                    "border:1px ridge rgb(107,107,107);"
                                                    "}");
    ui->actual_livrer->setStyleSheet("QPushButton {"
                                     "border:2px ridge rgb(90,88,88);"
                                     "border-radius: 8px;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "background-color: rgb(44,44,44);"
                                     "color: white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "border:3px ridge rgb(107,107,107);"
                                     "background-color:rgb(51,49,49);"
                                     "color: white;"
                                     "}");
    ui->modifi_livrer->setStyleSheet("QPushButton {"
                                     "border:2px ridge rgb(90,88,88);"
                                     "border-radius: 8px;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "background-color: rgb(44,44,44);"
                                     "color: white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "border:3px ridge rgb(107,107,107);"
                                     "background-color:rgb(51,49,49);"
                                     "color: white;"
                                     "}");
    ui->tableView_4->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(29,28,28);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");

    //CSS POUR STOCKER
    ui->pushButton_13->setStyleSheet("QPushButton {"
                                     "background-color: rgb(9, 94, 9);"
                                     "border-radius: 6px;"
                                     "border: 1px solid black;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "color:white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "background-color: rgb(51, 170, 51);"
                                     "border:2px ridge white;"
                                     "}");
    ui->pushButton_15->setStyleSheet("QPushButton {"
                                     "background-color: red;"
                                     "border-radius: 6px;"
                                     "border: 1px solid black;"
                                     "font: 63 11pt 'Yu Gothic UI Semibold';"
                                     "color:white;"
                                     "}"
                                     "QPushButton:hover {"
                                     "background-color: rgb(214,42,42);"
                                     "border:2px ridge white;"
                                     "}");
    ui->supp_stocker->setStyleSheet("QPushButton{"
                                    "background-color:grey;"
                                    "border-radius:6px;"
                                    "border: 1px solid black;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "color:white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "background-color: rgb(214,42,42);"
                                    "border:2px ridge white;"
                                    "}");
    ui->rechercher_stocker->setStyleSheet("QPushButton {"
                                          "border:2px ridge rgb(90,88,88);"
                                          "border-radius: 8px;"
                                          "font: 63 11pt 'Yu Gothic UI Semibold';"
                                          "background-color: rgb(44,44,44);"
                                          "color: white;"
                                          "}"
                                          "QPushButton:hover {"
                                          "border:3px ridge rgb(107,107,107);"
                                          "background-color:rgb(51,49,49);"
                                          "color: white;"
                                          "}");
    ui->lineEdit_4_recherche_stocker->setStyleSheet("QLineEdit {"
                                                    "border-radius:20px;"
                                                    "color:white;"
                                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                    "background-color:rgb(44,44,44);"
                                                    "border:1px ridge rgb(80,80,80);"
                                                    "}"
                                                    "QLineEdit:hover {"
                                                    "border:1px ridge rgb(107,107,107);"
                                                    "}");
    ui->stock_actualiser->setStyleSheet("QPushButton {"
                                        "border:2px ridge rgb(90,88,88);"
                                        "border-radius: 8px;"
                                        "font: 63 11pt 'Yu Gothic UI Semibold';"
                                        "background-color: rgb(44,44,44);"
                                        "color: white;"
                                        "}"
                                        "QPushButton:hover {"
                                        "border:3px ridge rgb(107,107,107);"
                                        "background-color:rgb(51,49,49);"
                                        "color: white;"
                                        "}");
    ui->modifi_stock->setStyleSheet("QPushButton {"
                                    "border:2px ridge rgb(90,88,88);"
                                    "border-radius: 8px;"
                                    "font: 63 11pt 'Yu Gothic UI Semibold';"
                                    "background-color: rgb(44,44,44);"
                                    "color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "border:3px ridge rgb(107,107,107);"
                                    "background-color:rgb(51,49,49);"
                                    "color: white;"
                                    "}");
    ui->tableView_5->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(29,28,28);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");

    //CSS POUR BON DE LIVRAISON
    ui->pushButton_5_recherche_bon_livraison->setStyleSheet("QPushButton {"
                                                            "border:2px ridge rgb(90,88,88);"
                                                            "border-radius: 8px;"
                                                            "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                            "background-color: rgb(44,44,44);"
                                                            "color: white;"
                                                            "}"
                                                            "QPushButton:hover {"
                                                            "border:3px ridge rgb(107,107,107);"
                                                            "background-color:rgb(51,49,49);"
                                                            "color: white;"
                                                            "}");
    ui->actual_bon_livraison->setStyleSheet("QPushButton {"
                                            "border:2px ridge rgb(90,88,88);"
                                            "border-radius: 8px;"
                                            "font: 63 11pt 'Yu Gothic UI Semibold';"
                                            "background-color: rgb(44,44,44);"
                                            "color: white;"
                                            "}"
                                            "QPushButton:hover {"
                                            "border:3px ridge rgb(107,107,107);"
                                            "background-color:rgb(51,49,49);"
                                            "color: white;"
                                            "}");
    ui->lineEdit_recherche_bon_livraison->setStyleSheet("QLineEdit {"
                                                        "border-radius:20px;"
                                                        "color:white;"
                                                        "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                        "background-color:rgb(44,44,44);"
                                                        "border:1px ridge rgb(80,80,80);"
                                                        "}"
                                                        "QLineEdit:hover {"
                                                        "border:1px ridge rgb(107,107,107);"
                                                        "}");
    ui->tableView_6->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(29,28,28);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");
    //CSS POUR MARCHANDISE LIVREE
    ui->pushButton_5_march_livr->setStyleSheet("QPushButton {"
                                               "border:2px ridge rgb(90,88,88);"
                                               "border-radius: 8px;"
                                               "font: 63 11pt 'Yu Gothic UI Semibold';"
                                               "background-color: rgb(44,44,44);"
                                               "color: white;"
                                               "}"
                                               "QPushButton:hover {"
                                               "border:3px ridge rgb(107,107,107);"
                                               "background-color:rgb(51,49,49);"
                                               "color: white;"
                                               "}");
    ui->pushButton_5_actualisation_march_liv->setStyleSheet("QPushButton {"
                                                            "border:2px ridge rgb(90,88,88);"
                                                            "border-radius: 8px;"
                                                            "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                            "background-color: rgb(44,44,44);"
                                                            "color: white;"
                                                            "}"
                                                            "QPushButton:hover {"
                                                            "border:3px ridge rgb(107,107,107);"
                                                            "background-color:rgb(51,49,49);"
                                                            "color: white;"
                                                            "}");
    ui->lineEdit_recherche_march_livree->setStyleSheet("QLineEdit {"
                                                       "border-radius:20px;"
                                                       "color:white;"
                                                       "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                       "background-color:rgb(44,44,44);"
                                                       "border:1px ridge rgb(80,80,80);"
                                                       "}"
                                                       "QLineEdit:hover {"
                                                       "border:1px ridge rgb(107,107,107);"
                                                       "}");
    ui->tableView_7->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(29,28,28);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");
    //CSS POUR INVENTAIRE
    ui->recherche_inventaire->setStyleSheet("QPushButton {"
                                            "border:2px ridge rgb(90,88,88);"
                                            "border-radius: 8px;"
                                            "font: 63 11pt 'Yu Gothic UI Semibold';"
                                            "background-color: rgb(44,44,44);"
                                            "color: white;"
                                            "}"
                                            "QPushButton:hover {"
                                            "border:3px ridge rgb(107,107,107);"
                                            "background-color:rgb(51,49,49);"
                                            "color: white;"
                                            "}");
    ui->actualise_inventaire->setStyleSheet("QPushButton {"
                                            "border:2px ridge rgb(90,88,88);"
                                            "border-radius: 8px;"
                                            "font: 63 11pt 'Yu Gothic UI Semibold';"
                                            "background-color: rgb(44,44,44);"
                                            "color: white;"
                                            "}"
                                            "QPushButton:hover {"
                                            "border:3px ridge rgb(107,107,107);"
                                            "background-color:rgb(51,49,49);"
                                            "color: white;"
                                            "}");
    ui->lineEdit_recherche_invent->setStyleSheet("QLineEdit {"
                                                 "border-radius:20px;"
                                                 "color:white;"
                                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                                 "background-color:rgb(44,44,44);"
                                                 "border:1px ridge rgb(80,80,80);"
                                                 "}"
                                                 "QLineEdit:hover {"
                                                 "border:1px ridge rgb(107,107,107);"
                                                 "}");
    ui->tableView_8->setStyleSheet("QTableView {"
                                 "font: 63 11pt 'Yu Gothic UI Semibold';"
                                 "background-color:rgb(29,28,28);"
                                 "border: 10px ridge rgb(68,68,68);"
                                 "}"
                                 "QTableView::item {"
                                 "border: 1px solid white;"
                                 "color:white;"
                                 "}");

    /*ui->tabWidget->setStyleSheet("QTabWidget {"
                                   "background-color:red;"
                                 "}");*/

    //SUPERPOSITION DES BOUTONS
    ui->pushButton->raise();
    ui->pushButton_3->raise();
    ui->pushButton_18_supp_tous_fourn->raise();
    ui->label_titre_fourn->raise();
    ui->lineEdit_recherche->raise();
    ui->recherche_fourn->raise();

    ui->pushButton_4->raise();
    ui->pushButton_6->raise();
    ui->supp_marchandise->raise();
    ui->label_2->raise();
    ui->lineEdit_rech_march->raise();
    ui->recher_march->raise();

    ui->pushButton_7->raise();
    ui->pushButton_9->raise();
    ui->supp_entrepot->raise();
    ui->label_3->raise();
    ui->rechercher_entrepot->raise();
    ui->lineEdit_2_rechercher_entrepot->raise();

    ui->pushButton_10->raise();
    ui->pushButton_12->raise();
    ui->supp_livrer->raise();
    ui->label_4->raise();
    ui->lineEdit_3_rechercher_livrer->raise();
    ui->recherche_livrer->raise();

    ui->pushButton_13->raise();
    ui->pushButton_15->raise();
    ui->supp_stocker->raise();
    ui->label_5->raise();
    ui->lineEdit_4_recherche_stocker->raise();
    ui->rechercher_stocker->raise();

    ui->label_7->raise();
    ui->lineEdit_recherche_bon_livraison->raise();
    ui->pushButton_5_recherche_bon_livraison->raise();

    ui->label_12->raise();
    ui->pushButton_5_march_livr->raise();
    ui->lineEdit_recherche_march_livree->raise();

    ui->label_13->raise();
    ui->lineEdit_recherche_invent->raise();
    ui->recherche_inventaire->raise();


    ui->tabWidget->setStyleSheet("QTabWidget::tab-bar {"
                                "  alignment: center;"
                                "}"
                                "QTabBar::tab {"
                                "background-color: rgb(29,29,29);"
                                "border: 2px solid white;"
                                "border-top-left-radius: 10px;"
                                "border-top-right-radius: 10px;"
                                "font: 63 11pt 'Yu Gothic UI Semibold';"
                                "width: 150px;"
                                "padding: 10px 0px;"
                                "color: white;"
                                "}"
                                "QTabBar::tab:selected {"
                                //"background-color: rgb(128,126,126);"
                                "background-color: white;"
                                "border-color: white;"
                                "color: black;"
                                "}"
                                "QTabBar::tab:hover {"
                                 "background-color: rgb(175,174,174);"
                                 "border-color: white;"
                                 "color: black;"
                                "}");





    QPixmap image("C:/Users/FANOMEZANTSOA Ordino/Pictures/add-to-cart1 (2).PNG");

//VISIBILITE DES BOUTON MODIFICATION
    ui->modifi_fournisseur->setVisible(false);
    modif_fourn = nullptr;
    ui->modifi_march->setVisible(false);
    ui->modifi_entrepot->setVisible(false);
    ui->modifi_livrer->setVisible(false);
    ui->modifi_stock->setVisible(false);

    QIcon rech("C:/Users/FANOMEZANTSOA Ordino/Pictures/loupe.png");
    ui->lineEdit_recherche->addAction(rech,QLineEdit::LeadingPosition);
    ui->lineEdit_2_rechercher_entrepot->addAction(rech,QLineEdit::LeadingPosition);
    ui->lineEdit_3_rechercher_livrer->addAction(rech,QLineEdit::LeadingPosition);
    ui->lineEdit_4_recherche_stocker->addAction(rech,QLineEdit::LeadingPosition);
    ui->lineEdit_rech_march->addAction(rech,QLineEdit::LeadingPosition);
    ui->lineEdit_recherche_invent->addAction(rech,QLineEdit::LeadingPosition);
    ui->lineEdit_recherche_bon_livraison->addAction(rech,QLineEdit::LeadingPosition);
    ui->lineEdit_recherche_march_livree->addAction(rech,QLineEdit::LeadingPosition);
    //icon des ajout
    QIcon ajout("C:/Users/FANOMEZANTSOA Ordino/Pictures/plus-symbol-button_32563.png");
    ui->pushButton->setIcon(ajout);
    ui->pushButton_4->setIcon(ajout);
    ui->pushButton_7->setIcon(ajout);
    ui->pushButton_10->setIcon(ajout);
    ui->pushButton_13->setIcon(ajout);
    //icon d'actualisation
    QIcon actual("C:/Users/FANOMEZANTSOA Ordino/Pictures/icons8-rafraîchir-50 (1) - Copie.png");
    ui->pushButton_17->setIcon(actual);
    ui->actualisation_marchandise->setIcon(actual);
    ui->actual_entrepot->setIcon(actual);
    ui->actual_livrer->setIcon(actual);
    ui->stock_actualiser->setIcon(actual);
    ui->actual_bon_livraison->setIcon(actual);
    ui->pushButton_5_actualisation_march_liv->setIcon(actual);
    ui->actualise_inventaire->setIcon(actual);
    //icon de suppression
    QIcon supp("C:/Users/FANOMEZANTSOA Ordino/Pictures/bin_484611.png");
    ui->pushButton_3->setIcon(supp);
    ui->pushButton_6->setIcon(supp);
    ui->pushButton_9->setIcon(supp);
    ui->pushButton_12->setIcon(supp);
    ui->pushButton_15->setIcon(supp);
    //icon de suppression tous
    QIcon supp1("C:/Users/FANOMEZANTSOA Ordino/Pictures/remove.png");
    ui->pushButton_18_supp_tous_fourn->setIcon(supp1);
    ui->supp_marchandise->setIcon(supp1);
    ui->supp_entrepot->setIcon(supp1);
    ui->supp_livrer->setIcon(supp1);
    ui->supp_stocker->setIcon(supp1);
    //icon des modifications
    QIcon modif("C:/Users/FANOMEZANTSOA Ordino/Pictures/edit - Copie.png");
    ui->modifi_fournisseur->setIcon(modif);
    ui->modifi_entrepot->setIcon(modif);
    ui->modifi_livrer->setIcon(modif);
    ui->modifi_march->setIcon(modif);
    ui->modifi_stock->setIcon(modif);

    //MENU BAR FICHIER
    connect(ui->actionAfficher,&QAction::triggered,this,&Principale::ouvrir_fournisseur);
    connect(ui->actionA_props_du_logiciel,&QAction::triggered,this,&Principale::ouvrir_a_propos);

    affichage_entrepot();
    affichage_fournisseur();
    affichage_marchandises();
    affichage_livrer();
    affichage_stocker();
    affichage_bon_livraison();
    affichage_inventaire();
    affichage_march_livree();


    //LES CHECKBOX PAR DEFAUT
    ui->checkBox_rech_refference->setChecked(true);
    ui->checkBox_rechBon_par_Raison->setChecked(true);
    ui->checkBox_rechInven_par_reffer->setChecked(true);
    ui->checkBox_rechMarLivr_par_reffer->setChecked(true);




/*********************************************************************/

    QTableView *tableview1 = ui->tableView;
    tableview1->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    QTableView *tableview_march = ui->tableView_2;
    tableview_march->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    QTableView *tableview_livr = ui->tableView_4;
    tableview_livr->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    QTableView *tableview_bon = ui->tableView_6;
    tableview_bon->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    QTableView *tableview_entr = ui->tableView_3;
    tableview_entr->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    QTableView *tableview_stock = ui->tableView_5;
    tableview_stock->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    QTableView *tableview_march_livr = ui->tableView_7;
    tableview_march_livr->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    QTableView *tableview_inventaire = ui->tableView_8;
    tableview_inventaire->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}


Principale::~Principale()
{
    delete ui;
}


//FONCTION DU MENU BAR
void Principale::ouvrir_fournisseur(void)
{
    this->close();
}
void Principale::ouvrir_a_propos()
{
    QMessageBox::information(this,"A propos","Cette logiciel est une logiciel de gestion des achats des marchandises.\n \n Cette logiciel permettera à tous les monde surtout aux grandes entreprises\n de bien gerer les ventes de leurs marchandises");
}
void Principale::on_pushButton_clicked()
{
    fournisseur->open();
}

void Principale::on_pushButton_4_clicked()
{
    marchandises->open();
}

void Principale::on_pushButton_7_clicked()
{
    entrepots->open();
}

void Principale::on_pushButton_10_clicked()
{
    Livrer->open();
}

void Principale::on_pushButton_13_clicked()
{
    Stocker->open();
}

//BOUTON D'ACTUALISATION
void Principale::on_stock_actualiser_clicked()
{
    affichage_stocker();
    ui->lineEdit_4_recherche_stocker->clear();
    ui->modifi_stock->setVisible(false);
}

void Principale::on_pushButton_17_clicked()
{
    affichage_fournisseur();
    ui->lineEdit_recherche->clear();
    ui->modifi_fournisseur->setVisible(false);
}

void Principale::on_actualisation_marchandise_clicked()
{
    affichage_marchandises();
    ui->lineEdit_rech_march->clear();
    ui->modifi_march->setVisible(false);
}

void Principale::on_actual_entrepot_clicked()
{
    affichage_entrepot();
    ui->lineEdit_2_rechercher_entrepot->clear();
    ui->modifi_entrepot->setVisible(false);
}

void Principale::on_actual_livrer_clicked()
{
    affichage_livrer();
    ui->lineEdit_3_rechercher_livrer->clear();
    ui->modifi_livrer->setVisible(false);
}

void Principale::on_actual_bon_livraison_clicked()
{
    affichage_bon_livraison();
    ui->lineEdit_recherche_bon_livraison->clear();
}

void Principale::on_pushButton_5_actualisation_march_liv_clicked()
{
    affichage_march_livree();
    ui->lineEdit_recherche_march_livree->clear();
}
void Principale::on_actualise_inventaire_clicked()
{
    affichage_inventaire();
    ui->lineEdit_recherche_invent->clear();
}


//BOUTON DE SUPPRESSION
void Principale::on_pushButton_18_supp_tous_fourn_clicked()
{
    QMessageBox reponse;
    reponse.setWindowTitle("Suppression");
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/supprimer - Copie.png");
    reponse.setWindowIcon(icon);
    reponse.setStyleSheet("background-color: rgb(82,82,82);"
                          "color:white;");
    reponse.setIcon(QMessageBox::Warning);
    reponse.setText("Etes vous sûr de vouloir tous supprimer ?");
    reponse.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    reponse.setButtonText(QMessageBox::No, "Annuler");
    reponse.setButtonText(QMessageBox::Yes, "Confirmer");
    int choix = reponse.exec();
    if(choix == QMessageBox::Yes)
    {
        QSqlQuery supp;
        supp.exec("truncate table fournisseur");
    }
}

void Principale::on_supp_marchandise_clicked()
{
    QMessageBox supp;
    supp.setWindowTitle("Suppression");
    supp.setStyleSheet("background-color: rgb(82,82,82);"
                          "color:white;");
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/supprimer - Copie.png");
    supp.setWindowIcon(icon);
    supp.setIcon(QMessageBox::Warning);
    supp.setText("Etes vous sûr de vouloir tous supprimer ?");
    supp.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    supp.setButtonText(QMessageBox::Yes, "Confirmer");
    supp.setButtonText(QMessageBox::No, "Annuler");
    int choix = supp.exec();
    if(choix == QMessageBox::Yes)
    {
        QSqlQuery supp;
        supp.exec("truncate table marchandises");
    }
}
void Principale::on_supp_entrepot_clicked()
{
    QMessageBox supp;
    supp.setWindowTitle("Suppression");
    supp.setStyleSheet("background-color: rgb(82,82,82);"
                          "color:white;");
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/supprimer - Copie.png");
    supp.setWindowIcon(icon);
    supp.setIcon(QMessageBox::Warning);
    supp.setText("Etes vous sûr de vouloir tous supprimer ?");
    supp.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    supp.setButtonText(QMessageBox::Yes, "Confirmer");
    supp.setButtonText(QMessageBox::No, "Annuler");
    int choix = supp.exec();
    if(choix == QMessageBox::Yes)
    {
        QSqlQuery supp;
        supp.exec("truncate table marchandises");
    }
}
void Principale::on_supp_livrer_clicked()
{
    QMessageBox supp;
    supp.setWindowTitle("Suppression");
    supp.setStyleSheet("background-color: rgb(82,82,82);"
                          "color:white;");
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/supprimer - Copie.png");
    supp.setWindowIcon(icon);
    supp.setIcon(QMessageBox::Warning);
    supp.setText("Etes vous sûr de vouloir tous supprimer ?");
    supp.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    supp.setButtonText(QMessageBox::Yes, "Confirmer");
    supp.setButtonText(QMessageBox::No, "Annuler");
    int choix = supp.exec();
    if(choix == QMessageBox::Yes)
    {
        QSqlQuery supp;
        supp.exec("truncate table marchandises");
    }
}

void Principale::on_supp_stocker_clicked()
{
    QMessageBox supp;
    supp.setWindowTitle("Suppression");
    supp.setStyleSheet("background-color: rgb(82,82,82);"
                          "color:white;");
    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/supprimer - Copie.png");
    supp.setWindowIcon(icon);
    supp.setIcon(QMessageBox::Warning);
    supp.setText("Etes vous sûr de vouloir tous supprimer ?");
    supp.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    supp.setButtonText(QMessageBox::Yes, "Confirmer");
    supp.setButtonText(QMessageBox::No, "Annuler");
    int choix = supp.exec();
    if(choix == QMessageBox::Yes)
    {
        QSqlQuery supp;
        supp.exec("truncate table marchandises");
    }
}

void Principale::on_pushButton_3_clicked()
{
    QString reponse = QInputDialog::getText(this,tr("Suppression"),"Veillez entrer la refference du fournisseur à supprimer");
    QSqlQuery suppression;
    suppression.prepare("delete from fournisseur where Ref_frs=:reponse");
    suppression.bindValue(":reponse",reponse);
    suppression.exec();
}

void Principale::on_pushButton_6_clicked()
{
    QString reponse1 = QInputDialog::getText(this,tr("Suppression"),"Veillez entrer la refference du marchandise à supprimer");
    QSqlQuery suppression;
    suppression.prepare("delete from marchandises where Ref_Mar=:ref");
    suppression.bindValue(":ref",reponse1);
    suppression.exec();
}

void Principale::on_pushButton_9_clicked()
{
    QString reponse2 = QInputDialog::getText(this,tr("Suppression"),"Veillez entrer la refference de l'entrepot à supprimer");
    QSqlQuery supp_entrep;
    supp_entrep.prepare("delete from entrepot where Ref_Entr=:ref");
    supp_entrep.bindValue(":ref",reponse2);
    supp_entrep.exec();
}

void Principale::on_pushButton_12_clicked()
{
    QString reponse3 = QInputDialog::getText(this,tr("Suppression"),"Veillez entrer la refference du fournisseur correspondant à la livraison à supprimer");
    QSqlQuery supp_liv;
    supp_liv.prepare("delete from livrer where Ref_frs=:ref");
    supp_liv.bindValue(":ref",reponse3);
    supp_liv.exec();
}

void Principale::on_pushButton_15_clicked()
{
    QString reponse4 = QInputDialog::getText(this,tr("Suppression"),"Veillez entrer le numero du marchandise à supprimer du liste des stockées");
    QInputDialog supp;
    QSqlQuery supp_stock;
    supp_stock.prepare("delete from stocker where Num_Mar=:ref");
    supp_stock.bindValue(":ref",reponse4);
    supp_stock.exec();
}

//AFFICHAGE DES DONNESS
//affichage des données entrepot
void Principale::affichage_entrepot()
{
    QSqlQuery *requete1=new QSqlQuery;
    QSqlQueryModel *modele=new QSqlQueryModel;
    requete1->exec("select Ref_Entr as _____________________Refferences_des_entrepots____________________,Adresse as _______________________Adresses_des_entrepots______________________ from entrepot");
    modele->setQuery(*requete1);
    ui->tableView_3->setModel(modele);
}

//affichage des donnees fournisseurs
void Principale::affichage_fournisseur()
{
    QSqlQuery *requete2=new QSqlQuery;
    QSqlQueryModel *modele1=new QSqlQueryModel;
    requete2->exec("select Ref_frs as Refferences_des_fournisseurs,Raison_social as Raison_sociale,NIF as Numero_d_identification_fiscale_NIF,Adresse as Adresses,Tel_Frs as Telephones_des_fournisseurs from fournisseur");
    modele1->setQuery(*requete2);
    ui->tableView->setModel(modele1);
}

//affichage des donnees marchandises
void Principale::affichage_marchandises()
{
    QSqlQuery *requete3=new QSqlQuery;
    QSqlQueryModel *modele2=new QSqlQueryModel;
    requete3->exec("select Ref_Mar as _______Refferences_marchandises_________,Designation as _________________Designations_________________,Prix_de_vente as ________________Prix_de_vente_______________ from marchandises");
    modele2->setQuery(*requete3);
    ui->tableView_2->setModel(modele2);
}

//affichage des donnees livrer
void Principale::affichage_livrer()
{
    QSqlQuery *requete4=new QSqlQuery;
    QSqlQueryModel *modele4=new QSqlQueryModel;
    requete4->exec("select Num_livraison as Numero_de_livraison,Ref_frs as Refferences_du_fournisseur,Num_Mar as Numero_des_marchandises,Date_livraison as Date_de_livraison,Prix_achat as Prix_d_achat,Qte_livree as Quantité_livrée from livrer");
    modele4->setQuery(*requete4);
    ui->tableView_4->setModel(modele4);
}

//affichage des donnees stocker
void Principale::affichage_stocker()
{
    QSqlQuery *requete5=new QSqlQuery;
    QSqlQueryModel *modele4=new QSqlQueryModel;
    requete5->exec("select Num_operation as ___Numero_des_operations___,Num_Mar as ___Numero_des_marchandises___,Ref_Entr as _____Refferences_des_entrepots_____,Qte_stock as _____Quantité_stockée_____ from stocker");
    modele4->setQuery(*requete5);
    ui->tableView_5->setModel(modele4);
}

//affichage bon de livraison
void Principale::affichage_bon_livraison()
{
    QSqlQuery *requete6=new QSqlQuery;
    QSqlQueryModel *model_bon = new QSqlQueryModel;
    requete6->prepare("select Num_livraison as ___Numero_de_livraison___,Raison_social as __Raison_social__,Designation as __Designation__,Date_livraison as ___Date_de_livraison___,Prix_achat as ___Prix_d_achat___,Qte_livree as ___Quantité_livrées___ from livrer inner join fournisseur on livrer.Ref_frs=fournisseur.Ref_frs inner join marchandises on livrer.Num_Mar=marchandises.Ref_Mar");
    requete6->exec();
    model_bon->setQuery(*requete6);
    ui->tableView_6->setModel(model_bon);
}

//affichage liste des marchandises livrées
void Principale::affichage_march_livree()
{
    QSqlQuery *affichage=new QSqlQuery;
    QSqlQueryModel *modele= new QSqlQueryModel;
    affichage->prepare("select distinct Ref_Mar as _Refferences_des_marchandises_,Designation as _________Designations_________,Date_livraison as __Dates_des_livraisons__,Qte_livree as __Quantité_des_marchandises_livrées__ from marchandises inner join livrer on marchandises.Ref_Mar=livrer.Num_Mar");
    affichage->exec();
    modele->setQuery(*affichage);
    ui->tableView_7->setModel(modele);
}

void Principale::affichage_inventaire()
{
    QSqlQuery *requete6=new QSqlQuery;
    QSqlQueryModel *model_bon = new QSqlQueryModel;
    requete6->prepare("select Ref_Mar as ____Refferences_des_marchandises___,Designation as _____________Designations_____________,Qte_livree as _____Quantité_livrées_____,Qte_stock+Qte_livree as _____Quantité_stockée_____ from livrer inner join stocker on livrer.Num_Mar=stocker.Num_Mar inner join marchandises on marchandises.Ref_Mar=livrer.Num_mar");
    requete6->exec();
    model_bon->setQuery(*requete6);
    ui->tableView_8->setModel(model_bon);
}

//BOUTON RECHERCHE
void Principale::on_recherche_fourn_clicked()
{
    QString rec = ui->lineEdit_recherche->text();
    QSqlQuery *recherche=new QSqlQuery;
    QSqlQueryModel *modele_rec=new QSqlQueryModel();

    if(ui->checkBox_2_rech_NIF->isChecked() && ui->checkBox_rech_refference->isChecked())
    {
        QMessageBox::information(this,"Recherche","Veillez choisir l'un des filtres seulement");
    }

    else if(ui->checkBox_rech_refference->isChecked())
    {
        recherche->prepare("select Ref_frs as Refferences_des_fournisseurs,Raison_social as Raison_sociale,NIF as Numero_d_Identification_Fiscale_NIF,Adresse as ___Adresses___,Tel_Frs as Telephones_des_fournisseurs from fournisseur where Ref_frs=:ref");
        recherche->bindValue(":ref",rec);
        recherche->exec();
        modele_rec->setQuery(*recherche);
        if(rec.isEmpty())
        {
            QMessageBox::information(this,"Recherche","Veillez d'abord entrer la refference du fournisseur à rechercher!");
        }
        else if(modele_rec->rowCount()==NULL)
        {
            QMessageBox::information(this,"Recherche","Le fournisseur que vous cherchiez n'est pas encore enregistré dans la base de données");
        }
        else
        {
            ui->tableView->setModel(modele_rec);
            ui->modifi_fournisseur->setVisible(true);
        }
    }
    else if(ui->checkBox_2_rech_NIF->isChecked())
    {
        recherche->prepare("select Ref_frs as Refferences_des_fournisseurs,Raison_social as Raison_sociale,NIF as Numero_d_Identification_Fiscale_NIF,Adresse as ___Adresses___,Tel_Frs as Telephones_des_fournisseurs from fournisseur where NIF=:ref");
        recherche->bindValue(":ref",rec);
        recherche->exec();
        modele_rec->setQuery(*recherche);
        if(rec.isEmpty())
        {
            QMessageBox::information(this,"Recherche","Veillez d'abord entrer le NIF(Numero d'Identification Fiscale) du fournisseur à rechercher!");
        }
        else if(modele_rec->rowCount()==0)
        {
            QMessageBox::information(this,"Recherche","Le fournisseur que vous cherchiez n'est pas encore enregistré dans la base de données");
        }
        else
        {
            ui->tableView->setModel(modele_rec);
            ui->modifi_fournisseur->setVisible(true);
        }
    }

    else{QMessageBox::information(this,"","Cochez l'un des filtre de recherche");}
}

void Principale::on_recher_march_clicked()
{
    QString rec = ui->lineEdit_rech_march->text();
    QSqlQuery *rechercher=new QSqlQuery;
    QSqlQueryModel *modele_rec=new QSqlQueryModel();
    rechercher->prepare("select Ref_Mar as _______Refferences_marchandises_________,Designation as _________________Designations_________________,Prix_de_vente as ________________Prix_de_vente_______________ from marchandises where Ref_Mar=:rec");
    rechercher->bindValue(":rec",rec);
    rechercher->exec();
    modele_rec->setQuery(*rechercher);
    if(rec.isEmpty())
    {
        QMessageBox::information(this,"Recherche","Veillez d'abord entrer la refference du marchandise à rechercher!");
    }
    else if(modele_rec->rowCount()==0)
    {
        QMessageBox::information(this,"Recherche","La marchandise que vous cherchiez n'est pas encore enregistrée dans la base de données");
    }
    else
    {
        ui->tableView_2->setModel(modele_rec);
        ui->modifi_march->setVisible(true);
    }
}

void Principale::on_rechercher_entrepot_clicked()
{
    QString rec = ui->lineEdit_2_rechercher_entrepot->text();
    QSqlQuery *rechercher=new QSqlQuery;
    QSqlQueryModel *model_rec=new QSqlQueryModel;
    rechercher->prepare("select Ref_Entr as _____________________Refferences_des_entrepots____________________,Adresse as _______________________Adresses_des_entrepots______________________ from entrepot where Ref_Entr=:rec");
    rechercher->bindValue(":rec",rec);
    rechercher->exec();
    model_rec->setQuery(*rechercher);
    if(rec.isEmpty())
    {
        QMessageBox::information(this,"Recherche","Veillez d'abord entrer la refference de l'entrepot à rechercher!");
    }
    else if(model_rec->rowCount()==0)
    {
        QMessageBox::information(this,"Recherche","L'entrepot que vous cherchiez n'existe pas encore dans la base de données");
    }
    else
    {
        ui->tableView_3->setModel(model_rec);
        ui->modifi_entrepot->setVisible(true);
    }
}

void Principale::on_recherche_livrer_clicked()
{
    QString rec = ui->lineEdit_3_rechercher_livrer->text();
    QSqlQuery *recherche=new QSqlQuery;
    QSqlQueryModel *model_rec=new QSqlQueryModel;
    recherche->prepare("select Num_livraison as Numero_de_livraison,Ref_frs as Refferences_du_fournisseur,Num_Mar as Numero_des_marchandises,Date_livraison as Date_de_livraison,Prix_achat as Prix_d_achat,Qte_livree as Quantité_livrée from livrer where Ref_frs=:ref");
    recherche->bindValue(":ref",rec);
    recherche->exec();
    model_rec->setQuery(*recherche);
    if(rec.isEmpty())
    {
        QMessageBox::information(this,"Recherche","Veillez d'abord entrer la refference du livraison à rechercher!");
    }
    else if(model_rec->rowCount()==0)
    {
        QMessageBox::information(this,"Recherche","La livraison que vous cherchiez n'est pas encore enregistré dans la base de données");
    }
    else
    {
        ui->tableView_4->setModel(model_rec);
        ui->modifi_livrer->setVisible(true);
    }
}

void Principale::on_rechercher_stocker_clicked()
{
    QString rec = ui->lineEdit_4_recherche_stocker->text();
    QSqlQuery *rechercher=new QSqlQuery;
    QSqlQueryModel *model_rec=new QSqlQueryModel;
    rechercher->prepare("select Num_operation as ___Numero_des_operations___,Num_Mar as ___Numero_des_marchandises___,Ref_Entr as _____Refferences_des_entrepots_____,Qte_stock as _____Quantité_stockée_____ from stocker where Num_Mar=:num");
    rechercher->bindValue(":num",rec);
    rechercher->exec();
    model_rec->setQuery(*rechercher);
    if(rec.isEmpty())
    {
        QMessageBox::information(this,"Recherche","Veillez d'abord entrer le numero du marchandise sur le champ de rechercher !");
    }
    else if(model_rec->rowCount()==0)
    {
        QMessageBox::information(this,"Recherche","Cette marchandise n'est pas encore stockée dans aucun entrepot");
    }
    else
    {
        ui->tableView_5->setModel(model_rec);
        ui->modifi_stock->setVisible(true);
    }
}

void Principale::on_pushButton_5_recherche_bon_livraison_clicked()
{
    QString raison = ui->lineEdit_recherche_bon_livraison->text();
    QSqlQuery *rec = new QSqlQuery;
    QSqlQueryModel *model_rec = new QSqlQueryModel;

    if(ui->checkBox_2_rechBon_par_design->isChecked() && ui->checkBox_rechBon_par_Raison->isChecked())
    {
        QMessageBox::information(this,"Recherche","Veillez choisir l'un des deux filtres seulement!");
    }
    else if(ui->checkBox_rechBon_par_Raison->isChecked())
    {
        rec->prepare("select Num_livraison as ___Numero_de_livraison___,Raison_social as __Raison_social__,Designation as __Designation__,Date_livraison as ___Date_de_livraison___,Prix_achat as ___Prix_d_achat___,Qte_livree as ___Quantité_livrées___ from livrer inner join fournisseur on livrer.Ref_frs=fournisseur.Ref_frs inner join marchandises on livrer.Num_Mar=marchandises.Ref_Mar where Raison_social=:raison");
        rec->bindValue(":raison",raison);
        rec->exec();
        model_rec->setQuery(*rec);
        if(raison.isEmpty())
        {
            QMessageBox::information(this,"Recherche d'un bon de livraison","Veillez d'abord entrer le nom du fournisseur correspondant au bon de livraison à rechercher sur le champ de recherche");
        }
        else if(model_rec->rowCount()==0)
        {
            QMessageBox::information(this,"Recherche","Le bon de livraison de "+raison+" n'est pas encore prise en charge dans la base de données");
        }
        else
        {
            ui->tableView_6->setModel(model_rec);
        }
    }
    else if(ui->checkBox_2_rechBon_par_design->isChecked())
    {
        rec->prepare("select Num_livraison as ___Numero_de_livraison___,Raison_social as __Raison_social__,Designation as __Designation__,Date_livraison as ___Date_de_livraison___,Prix_achat as ___Prix_d_achat___,Qte_livree as ___Quantité_livrées___ from livrer inner join fournisseur on livrer.Ref_frs=fournisseur.Ref_frs inner join marchandises on livrer.Num_Mar=marchandises.Ref_Mar where Designation=:raison");
        rec->bindValue(":raison",raison);
        rec->exec();
        model_rec->setQuery(*rec);
        if(raison.isEmpty())
        {
            QMessageBox::information(this,"Recherche d'un bon de livraison","Veillez d'abord entrer la designation du marchandise correspondant au bon de livraison à rechercher sur le champ de recherche");
        }
        else if(model_rec->rowCount()==0)
        {
            QMessageBox::information(this,"Recherche","Le bon de livraison de "+raison+" n'est pas encore prise en charge dans la base de données");
        }
        else
        {
            ui->tableView_6->setModel(model_rec);
        }
    }
    else
    {
        QMessageBox::information(this,"Recherche","Cochez d'abord l'un des filtres de rcherche");
    }
}

void Principale::on_recherche_inventaire_clicked()
{
    QString ref = ui->lineEdit_recherche_invent->text();
    QSqlQuery *recherche = new QSqlQuery;
    QSqlQueryModel *model_rec = new QSqlQueryModel;
    if(ui->checkBox_2_rechInvent_par_design->isChecked() && ui->checkBox_rechInven_par_reffer->isChecked())
    {
        QMessageBox::information(this,"Recherche","Veillez choisir l'un des deux filtres seulement");
    }
    else if(ui->checkBox_rechInven_par_reffer->isChecked())
    {
        recherche->prepare("select Ref_Mar as ____Refferences_des_marchandises___,Designation as _____________Designations_____________,Qte_livree as _____Quantité_livrées_____,Qte_stock+Qte_livree as _____Quantité_stockée_____ from livrer inner join stocker on livrer.Num_Mar=stocker.Num_Mar inner join marchandises on marchandises.Ref_Mar=livrer.Num_mar where Ref_Mar=:ref");
        recherche->bindValue(":ref",ref);
        recherche->exec();
        model_rec->setQuery(*recherche);
        if(ref.isEmpty())
        {
            QMessageBox::information(this,"Recherche","Veillez d'abord saisir sur le champ de recherche la refference du marchandise à rechercher!");
        }
        else if(model_rec->rowCount()==0)
        {
            QMessageBox::information(this,"Recherche","L'information à propos de cette marchandise n'a pas encore été prise en charge dans la base de données");
        }
        else
        {
            ui->tableView_8->setModel(model_rec);
        }
    }
    else if(ui->checkBox_2_rechInvent_par_design->isChecked())
    {
        recherche->prepare("select Ref_Mar as ____Refferences_des_marchandises___,Designation as _____________Designations_____________,Qte_livree as _____Quantité_livrées_____,Qte_stock+Qte_livree as _____Quantité_stockée_____ from livrer inner join stocker on livrer.Num_Mar=stocker.Num_Mar inner join marchandises on marchandises.Ref_Mar=livrer.Num_mar where Designation=:ref");
        recherche->bindValue(":ref",ref);
        recherche->exec();
        model_rec->setQuery(*recherche);
        if(ref.isEmpty())
        {
            QMessageBox::information(this,"Recherche","Veillez d'abord saisir sur le champ de recherche la designation du marchandise à rechercher!");
        }
        else if(model_rec->rowCount()==0)
        {
            QMessageBox::information(this,"Recherche","L'information à propos de cette marchandise n'a pas encore été prise en charge dans la base de données");
        }
        else
        {
            ui->tableView_8->setModel(model_rec);
        }
    }
    else
    {
        QMessageBox::information(this,"Recherche","Cochez d'abord l'un des deux filtres");
    }
}

void Principale::on_pushButton_5_march_livr_clicked()
{
    QString ref = ui->lineEdit_recherche_march_livree->text();
    QSqlQuery *rec = new QSqlQuery;
    QSqlQueryModel *model_rec = new QSqlQueryModel;

    if(ui->checkBox_2_rechMarLivr_par_design->isChecked() && ui->checkBox_rechMarLivr_par_reffer->isChecked())
    {
        QMessageBox::information(this,"Recheche","Veillez choisir l'un des deux filtres seulement");
    }
    else if(ui->checkBox_rechMarLivr_par_reffer->isChecked())
    {
        rec->prepare("select distinct Ref_Mar as _Refferences_des_marchandises_,Designation as _________Designations_________,Date_livraison as __Dates_des_livraisons__,Qte_livree as __Quantité_des_marchandises_livrées__ from marchandises inner join livrer on marchandises.Ref_Mar=livrer.Num_Mar where Ref_Mar=:ref");
        rec->bindValue(":ref",ref);
        rec->exec();
        model_rec->setQuery(*rec);
        if(ref.isEmpty())
        {
            QMessageBox::information(this,"Recherche","Veillez d'abord saisir sur le champ de recherche la refference du marchandise à rechercher!");
        }
        else if(model_rec->rowCount()==0)
        {
            QMessageBox::information(this,"Recherche","C'est introuvable,peut être que cette marchandise n'a jamais été livrée ou encore elle n'existe même pas dans la base de données");
        }
        else
        {
            ui->tableView_7->setModel(model_rec);
        }
    }
    else if(ui->checkBox_2_rechMarLivr_par_design->isChecked())
    {
        rec->prepare("select distinct Ref_Mar as _Refferences_des_marchandises_,Designation as _________Designations_________,Date_livraison as __Dates_des_livraisons__,Qte_livree as __Quantité_des_marchandises_livrées__ from marchandises inner join livrer on marchandises.Ref_Mar=livrer.Num_Mar where Designation=:ref");
        rec->bindValue(":ref",ref);
        rec->exec();
        model_rec->setQuery(*rec);
        if(ref.isEmpty())
        {
            QMessageBox::information(this,"Recherche","Veillez d'abord saisir sur le champ de recherche la designation du marchandise à rechercher!");
        }
        else if(model_rec->rowCount()==0)
        {
            QMessageBox::information(this,"Recherche","C'est introuvable,peut être que cette marchandise n'a jamais été livrée ou encore elle n'existe même pas dans la base de données");
        }
        else
        {
            ui->tableView_7->setModel(model_rec);
        }
    }
    else
    {
        QMessageBox::information(this,"Recherche","Cochez l'un des deux filtres");
    }
}
//BOUTON MODIFICATION
void Principale::on_modifi_fournisseur_clicked()
{
    if (!modif_fourn) {
            modif_fourn = new modifier_fournisseur(this);
            connect(this, &Principale::textEntered, modif_fourn, &modifier_fournisseur::setText);
        }
    modif_fourn->open();
    emit textEntered(ui->lineEdit_recherche->text());
    QMessageBox::information(this,"Modification","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
}

void Principale::on_modifi_march_clicked()
{
    QMessageBox::information(this,"Modification","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    modif_march->open();
}

void Principale::on_modifi_entrepot_clicked()
{
    QMessageBox::information(this,"Modification","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    modif_entr->open();
}

void Principale::on_modifi_livrer_clicked()
{
    QMessageBox::information(this,"Modification","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    modif_livr->open();
}

void Principale::on_modifi_stock_clicked()
{
    QMessageBox::information(this,"Modification","Veillez remplir tous les champs et changer la partie dont vous voulez modifier et garder la partie à ne pas modifier!");
    modif_stock->open();
}










