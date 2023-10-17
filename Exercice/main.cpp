#include "principale.h"
#include <QApplication>
#include "QLabel"
#include "QWidget"
#include "ui_principale.h"
#include "interface_de_connexion.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Principale w;
    Interface_de_connexion w;

    QIcon icon("C:/Users/FANOMEZANTSOA Ordino/Pictures/onlineshopping_117952.ico");
    w.setWindowIcon(icon);
    w.show();

    return a.exec();
}
