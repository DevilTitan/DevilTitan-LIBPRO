/********************************************************************************
** Form generated from reading UI file 'LIBPRO.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBPRO_H
#define UI_LIBPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPROClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LIBPROClass)
    {
        if (LIBPROClass->objectName().isEmpty())
            LIBPROClass->setObjectName(QStringLiteral("LIBPROClass"));
        LIBPROClass->resize(600, 400);
        menuBar = new QMenuBar(LIBPROClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LIBPROClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LIBPROClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LIBPROClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LIBPROClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LIBPROClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LIBPROClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LIBPROClass->setStatusBar(statusBar);

        retranslateUi(LIBPROClass);

        QMetaObject::connectSlotsByName(LIBPROClass);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPROClass)
    {
        LIBPROClass->setWindowTitle(QApplication::translate("LIBPROClass", "LIBPRO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LIBPROClass: public Ui_LIBPROClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
