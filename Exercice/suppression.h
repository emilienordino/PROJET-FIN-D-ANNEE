#ifndef SUPPRESSION_H
#define SUPPRESSION_H

#include <QDialog>

namespace Ui {
class suppression;
}

class suppression : public QDialog
{
    Q_OBJECT

public:
    explicit suppression(QWidget *parent = 0);
    ~suppression();

private:
    Ui::suppression *ui;
};

#endif // SUPPRESSION_H
