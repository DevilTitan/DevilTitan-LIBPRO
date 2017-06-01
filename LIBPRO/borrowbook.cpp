#include "borrowbook.h"
#include "ui_borrowbook.h"
#include <QStandardItemModel>
#include <QTableView>
#include <QSqlQuery>




borrowBook::borrowBook(QWidget* parent, QMap<QString,int>& _borrow,Reader* _par):
QDialog(parent),borrow(_borrow),par(_par),ui(new Ui::borrowBook)

{

    ui->setupUi(this);
    this->borrow=_borrow;
    ui->bookList->setModel(createmodel(ui->bookList,this->borrow));
    ui->bookList->setColumnWidth(0,495);
    clearptr = &_borrow;

}


borrowBook::~borrowBook()
{
    delete ui;
    par->displaybook();
}


void borrowBook::on_requestbtn_clicked()
{
    par->open();

    for (auto it = borrow.begin(); it!=borrow.end(); ++it) // reset value for database
    {

         int currentQuantity;

         QSqlQuery *selectquantity = new QSqlQuery;
         selectquantity->prepare("select * from book_info where book_name = '" + it.key()+"'");


         if(selectquantity->exec())
         {
             while(selectquantity->next())
             {

                 currentQuantity = selectquantity->value(5).toInt();

             }
         }





         int x = currentQuantity + it.value();
         QSqlQuery query("UPDATE book_info SET quantity = " + QString::number(x) + " WHERE book_name = '" +it.key()+"'");
         query.exec();


    }


    clear(); // clear borrow book list



    this->close();
}
