/********************************************************************************
** Form generated from reading UI file 'borrowbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWBOOK_H
#define UI_BORROWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrowBook
{
public:
    QPushButton *requestbtn;
    QPushButton *cancelbtn;
    QPushButton *removebtn;
    QPushButton *increasebtn;
    QPushButton *decreasebtn;
    QTableView *bookList;

    void setupUi(QWidget *borrowBook)
    {
        if (borrowBook->objectName().isEmpty())
            borrowBook->setObjectName(QStringLiteral("borrowBook"));
        borrowBook->resize(800, 523);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/LP icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        borrowBook->setWindowIcon(icon);
        borrowBook->setStyleSheet(QLatin1String("/*#borrowBook{\n"
"background-image: url(:/appscreen/Resources/appscreen/2.jpg);}*/\n"
"QPushButton {\n"
"font-size: 20px;\n"
"font-family: Roboto; \n"
"background-color: rgba(46, 150, 223, 0.8);\n"
"border: 0;\n"
"color: white;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(0, 189, 155, 0.8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(24, 205, 108);\n"
"}\n"
""));
        requestbtn = new QPushButton(borrowBook);
        requestbtn->setObjectName(QStringLiteral("requestbtn"));
        requestbtn->setGeometry(QRect(400, 390, 151, 91));
        requestbtn->setStyleSheet(QStringLiteral("font-size: 20px;"));
        cancelbtn = new QPushButton(borrowBook);
        cancelbtn->setObjectName(QStringLiteral("cancelbtn"));
        cancelbtn->setGeometry(QRect(570, 440, 101, 41));
        cancelbtn->setStyleSheet(QStringLiteral("font-size: 15px;"));
        removebtn = new QPushButton(borrowBook);
        removebtn->setObjectName(QStringLiteral("removebtn"));
        removebtn->setGeometry(QRect(570, 390, 101, 41));
        removebtn->setStyleSheet(QLatin1String("font-size: 15px;\n"
""));
        increasebtn = new QPushButton(borrowBook);
        increasebtn->setObjectName(QStringLiteral("increasebtn"));
        increasebtn->setGeometry(QRect(690, 30, 94, 41));
        increasebtn->setStyleSheet(QStringLiteral("font-size: 15px;"));
        decreasebtn = new QPushButton(borrowBook);
        decreasebtn->setObjectName(QStringLiteral("decreasebtn"));
        decreasebtn->setGeometry(QRect(690, 90, 94, 41));
        decreasebtn->setStyleSheet(QStringLiteral("font-size: 15px;"));
        bookList = new QTableView(borrowBook);
        bookList->setObjectName(QStringLiteral("bookList"));
        bookList->setGeometry(QRect(30, 30, 641, 331));
        bookList->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"gridline-color:white;\n"
"selection-background-color:rgba(55,55,55,0.3);\n"
"font-family:Ubuntu Light"));

        retranslateUi(borrowBook);

        QMetaObject::connectSlotsByName(borrowBook);
    } // setupUi

    void retranslateUi(QWidget *borrowBook)
    {
        borrowBook->setWindowTitle(QApplication::translate("borrowBook", "Borrow new book", Q_NULLPTR));
        requestbtn->setText(QApplication::translate("borrowBook", "SEND REQUEST", Q_NULLPTR));
        cancelbtn->setText(QApplication::translate("borrowBook", "Cancel", Q_NULLPTR));
        removebtn->setText(QApplication::translate("borrowBook", "Remove All", Q_NULLPTR));
        increasebtn->setText(QApplication::translate("borrowBook", "Increase", Q_NULLPTR));
        decreasebtn->setText(QApplication::translate("borrowBook", "Decrease", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class borrowBook: public Ui_borrowBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWBOOK_H
