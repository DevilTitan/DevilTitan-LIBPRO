/********************************************************************************
** Form generated from reading UI file 'Administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *tab;
    QWidget *tab_3;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(999, 592);
        tabWidget = new QTabWidget(Administrator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 100, 961, 481));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(Administrator);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Administrator", "Tab 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Administrator", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Administrator", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
