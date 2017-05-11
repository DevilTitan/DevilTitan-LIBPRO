/********************************************************************************
** Form generated from reading UI file 'Librarian.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIAN_H
#define UI_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Librarian
{
public:

    void setupUi(QWidget *Librarian)
    {
        if (Librarian->objectName().isEmpty())
            Librarian->setObjectName(QStringLiteral("Librarian"));
        Librarian->resize(400, 300);

        retranslateUi(Librarian);

        QMetaObject::connectSlotsByName(Librarian);
    } // setupUi

    void retranslateUi(QWidget *Librarian)
    {
        Librarian->setWindowTitle(QApplication::translate("Librarian", "Librarian", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Librarian: public Ui_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
