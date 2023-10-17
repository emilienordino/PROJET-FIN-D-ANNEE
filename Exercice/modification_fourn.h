#ifndef MODIFICATION_FOURN_H
#define MODIFICATION_FOURN_H

#include <QDialog>

namespace Ui {
class modification_fourn;
}

class modification_fourn : public QDialog
{
    Q_OBJECT

public:
    explicit modification_fourn(QWidget *parent = 0);
    ~modification_fourn();

private:
    Ui::modification_fourn *ui;
};

#endif // MODIFICATION_FOURN_H
