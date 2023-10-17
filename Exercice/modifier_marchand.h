#ifndef MODIFIER_MARCHAND_H
#define MODIFIER_MARCHAND_H

#include <QDialog>
#include "connexion_mysql.h"
#include "QMessageBox"

namespace Ui {
class modifier_marchand;
}

class modifier_marchand : public QDialog
{
    Q_OBJECT

public:
    explicit modifier_marchand(QWidget *parent = 0);
    ~modifier_marchand();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::modifier_marchand *ui;
};

#endif // MODIFIER_MARCHAND_H
