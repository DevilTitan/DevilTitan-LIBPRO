/********************************************************************************
** Form generated from reading UI file 'switchrole.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHROLE_H
#define UI_SWITCHROLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SwitchRole
{
public:
    QPushButton *librarian;
    QPushButton *admin;
    QPushButton *data;
    QPushButton *continue_2;
    QPushButton *reader;
    QPushButton *cancel;
    QLabel *errorlbl;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *SwitchRole)
    {
        if (SwitchRole->objectName().isEmpty())
            SwitchRole->setObjectName(QStringLiteral("SwitchRole"));
        SwitchRole->resize(683, 313);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/LP icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SwitchRole->setWindowIcon(icon);
        SwitchRole->setStyleSheet(QLatin1String("QPushButton:hover {\n"
"background: qradialgradient(cx: 0.2, cy: -0.4,\n"
"fx: 0.1, fy: -0.4,\n"
"radius: 0.7, stop: 0 #43abc9, stop: 1 rgba(14, 149, 186));\n"
"color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"QPushButton {\n"
"border: 0px;\n"
"font: 87 8pt \"Ubuntu Light\";\n"
"background-color: rgba(12, 60, 85, 0.7);\n"
"border-radius:3px;\n"
"font-size:22px;\n"
"}\n"
"QLabel\n"
"{\n"
"font-family: \"Ubuntu Light\";\n"
"font-size: 13px;\n"
"color: white;\n"
"}\n"
"#errorlbl\n"
"{\n"
"border: 2px solid red;\n"
"color: red;\n"
"border: 0;\n"
"background-color: transparent;\n"
"}"));
        librarian = new QPushButton(SwitchRole);
        librarian->setObjectName(QStringLiteral("librarian"));
        librarian->setGeometry(QRect(210, 40, 111, 111));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/female-professor-reading-a-book.png"), QSize(), QIcon::Normal, QIcon::Off);
        librarian->setIcon(icon1);
        librarian->setIconSize(QSize(70, 70));
        admin = new QPushButton(SwitchRole);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setGeometry(QRect(360, 40, 111, 111));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/telephone-operator.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin->setIcon(icon2);
        admin->setIconSize(QSize(70, 70));
        data = new QPushButton(SwitchRole);
        data->setObjectName(QStringLiteral("data"));
        data->setGeometry(QRect(510, 40, 111, 111));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/industry-worker-with-cap-protection-and-a-laptop.png"), QSize(), QIcon::Normal, QIcon::Off);
        data->setIcon(icon3);
        data->setIconSize(QSize(80, 80));
        data->setFlat(false);
        continue_2 = new QPushButton(SwitchRole);
        continue_2->setObjectName(QStringLiteral("continue_2"));
        continue_2->setGeometry(QRect(240, 250, 94, 28));
        continue_2->setStyleSheet(QLatin1String("color: white;\n"
"font-size: 12px;"));
        reader = new QPushButton(SwitchRole);
        reader->setObjectName(QStringLiteral("reader"));
        reader->setGeometry(QRect(50, 40, 111, 111));
        reader->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/reading (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        reader->setIcon(icon4);
        reader->setIconSize(QSize(70, 70));
        cancel = new QPushButton(SwitchRole);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(350, 250, 94, 28));
        cancel->setStyleSheet(QLatin1String("color: white;\n"
"font-size: 12px;"));
        errorlbl = new QLabel(SwitchRole);
        errorlbl->setObjectName(QStringLiteral("errorlbl"));
        errorlbl->setGeometry(QRect(150, 190, 381, 41));
        errorlbl->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;"));
        label = new QLabel(SwitchRole);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 160, 61, 21));
        label_2 = new QLabel(SwitchRole);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 160, 101, 21));
        label_3 = new QLabel(SwitchRole);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 160, 111, 21));
        label_4 = new QLabel(SwitchRole);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 160, 111, 21));

        retranslateUi(SwitchRole);

        QMetaObject::connectSlotsByName(SwitchRole);
    } // setupUi

    void retranslateUi(QDialog *SwitchRole)
    {
        SwitchRole->setWindowTitle(QApplication::translate("SwitchRole", "Switch your role", Q_NULLPTR));
        librarian->setText(QString());
        admin->setText(QString());
        data->setText(QString());
        continue_2->setText(QApplication::translate("SwitchRole", "CONTINUE", Q_NULLPTR));
        reader->setText(QString());
        cancel->setText(QApplication::translate("SwitchRole", "CANCEL", Q_NULLPTR));
        errorlbl->setText(QString());
        label->setText(QApplication::translate("SwitchRole", "READER", Q_NULLPTR));
        label_2->setText(QApplication::translate("SwitchRole", "LIBRARIAN", Q_NULLPTR));
        label_3->setText(QApplication::translate("SwitchRole", " ADMINISTRATOR", Q_NULLPTR));
        label_4->setText(QApplication::translate("SwitchRole", "DATA PROCESSOR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SwitchRole: public Ui_SwitchRole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHROLE_H
