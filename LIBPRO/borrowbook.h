#ifndef BORROWBOOK_H
#define BORROWBOOK_H


#include <QtWidgets/QMainWindow>
#include "dialog.h"
#include "ui_dialog.h"
#include "Reader.h"


namespace Ui {
class borrowBook;
}

class borrowBook : public QDialog
{
    Q_OBJECT

public:
     borrowBook(QWidget* parrent=0,QMap<QString,int> &borrow = QMap<QString,int>(), Reader* w = 0);
     inline void clear() { clearptr->clear();};
    ~borrowBook();

private slots:
     void on_requestbtn_clicked();

private:
    Ui::borrowBook *ui;
    QMap<QString,int>* clearptr;
    Reader * par;
    QMap<QString,int> borrow;
};

#endif // BORROWBOOK_H
