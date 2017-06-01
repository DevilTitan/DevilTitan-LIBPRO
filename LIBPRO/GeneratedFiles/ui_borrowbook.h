/********************************************************************************
** Form generated from reading UI file 'borrowbook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
        borrowBook->resize(813, 523);
        requestbtn = new QPushButton(borrowBook);
        requestbtn->setObjectName(QStringLiteral("requestbtn"));
        requestbtn->setGeometry(QRect(340, 410, 171, 101));
        cancelbtn = new QPushButton(borrowBook);
        cancelbtn->setObjectName(QStringLiteral("cancelbtn"));
        cancelbtn->setGeometry(QRect(530, 470, 171, 41));
        removebtn = new QPushButton(borrowBook);
        removebtn->setObjectName(QStringLiteral("removebtn"));
        removebtn->setGeometry(QRect(530, 410, 171, 41));
        increasebtn = new QPushButton(borrowBook);
        increasebtn->setObjectName(QStringLiteral("increasebtn"));
        increasebtn->setGeometry(QRect(710, 30, 93, 101));
        decreasebtn = new QPushButton(borrowBook);
        decreasebtn->setObjectName(QStringLiteral("decreasebtn"));
        decreasebtn->setGeometry(QRect(710, 160, 93, 101));
        bookList = new QTableView(borrowBook);
        bookList->setObjectName(QStringLiteral("bookList"));
        bookList->setGeometry(QRect(30, 20, 641, 331));

        retranslateUi(borrowBook);

        QMetaObject::connectSlotsByName(borrowBook);
    } // setupUi

    void retranslateUi(QWidget *borrowBook)
    {
        borrowBook->setWindowTitle(QApplication::translate("borrowBook", "Form", Q_NULLPTR));
        requestbtn->setText(QApplication::translate("borrowBook", "Send Request", Q_NULLPTR));
        cancelbtn->setText(QApplication::translate("borrowBook", "Cancel", Q_NULLPTR));
        removebtn->setText(QApplication::translate("borrowBook", "Remove all", Q_NULLPTR));
        increasebtn->setText(QApplication::translate("borrowBook", "Increase", Q_NULLPTR));
        decreasebtn->setText(QApplication::translate("borrowBook", "Decrease", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class borrowBook: public Ui_borrowBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWBOOK_H
