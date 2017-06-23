/********************************************************************************
** Form generated from reading UI file 'aboutUs.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutUs
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *KhoaButton;
    QPushButton *HDuongButton;
    QPushButton *NghiaButton;
    QPushButton *CDuongButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *aboutUs)
    {
        if (aboutUs->objectName().isEmpty())
            aboutUs->setObjectName(QStringLiteral("aboutUs"));
        aboutUs->resize(743, 440);
        aboutUs->setMinimumSize(QSize(743, 440));
        aboutUs->setMaximumSize(QSize(743, 440));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/LP icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutUs->setWindowIcon(icon);
        aboutUs->setStyleSheet(QLatin1String("#aboutUs{\n"
"border-image: url(:/appscreen/Resources/appscreen/flat2 - Copy.png);\n"
"}\n"
"QLabel{\n"
"font: 13pt \"Segoe UI Symbol\";\n"
"color:white;\n"
"}"));
        label = new QLabel(aboutUs);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 90, 231, 41));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/LIBPRO.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(aboutUs);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 140, 71, 16));
        label_2->setStyleSheet(QStringLiteral(""));
        KhoaButton = new QPushButton(aboutUs);
        KhoaButton->setObjectName(QStringLiteral("KhoaButton"));
        KhoaButton->setGeometry(QRect(70, 180, 111, 111));
        KhoaButton->setStyleSheet(QStringLiteral("border-image: url(:/DT-member/Resources/DT-member/Khoa.png);"));
        KhoaButton->setIconSize(QSize(80, 80));
        HDuongButton = new QPushButton(aboutUs);
        HDuongButton->setObjectName(QStringLiteral("HDuongButton"));
        HDuongButton->setGeometry(QRect(230, 180, 111, 111));
        HDuongButton->setStyleSheet(QStringLiteral("border-image: url(:/DT-member/Resources/DT-member/HDuong.png);"));
        HDuongButton->setIconSize(QSize(80, 80));
        NghiaButton = new QPushButton(aboutUs);
        NghiaButton->setObjectName(QStringLiteral("NghiaButton"));
        NghiaButton->setGeometry(QRect(390, 180, 111, 111));
        NghiaButton->setStyleSheet(QStringLiteral("border-image: url(:/DT-member/Resources/DT-member/Nghia.png);"));
        NghiaButton->setIconSize(QSize(80, 80));
        CDuongButton = new QPushButton(aboutUs);
        CDuongButton->setObjectName(QStringLiteral("CDuongButton"));
        CDuongButton->setGeometry(QRect(550, 180, 111, 111));
        CDuongButton->setStyleSheet(QStringLiteral("border-image: url(:/DT-member/Resources/DT-member/CDuong.png);"));
        CDuongButton->setIconSize(QSize(80, 80));
        label_3 = new QLabel(aboutUs);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 300, 61, 16));
        label_4 = new QLabel(aboutUs);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 300, 71, 21));
        label_5 = new QLabel(aboutUs);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(410, 300, 71, 21));
        label_6 = new QLabel(aboutUs);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(570, 300, 71, 21));
        label_7 = new QLabel(aboutUs);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 340, 131, 20));
        label_7->setStyleSheet(QLatin1String("font: 11pt \"Segoe UI Symbol\";\n"
"color:white;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(aboutUs);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 370, 131, 20));
        label_8->setStyleSheet(QLatin1String("font: 9pt \"Segoe UI Symbol\";\n"
"color:white;"));
        label_8->setAlignment(Qt::AlignCenter);

        retranslateUi(aboutUs);

        QMetaObject::connectSlotsByName(aboutUs);
    } // setupUi

    void retranslateUi(QDialog *aboutUs)
    {
        aboutUs->setWindowTitle(QApplication::translate("aboutUs", "About Us", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("aboutUs", "About us", Q_NULLPTR));
        KhoaButton->setText(QString());
        HDuongButton->setText(QString());
        NghiaButton->setText(QString());
        CDuongButton->setText(QString());
        label_3->setText(QApplication::translate("aboutUs", "D.Khoa", Q_NULLPTR));
        label_4->setText(QApplication::translate("aboutUs", "H.Duong", Q_NULLPTR));
        label_5->setText(QApplication::translate("aboutUs", "T.Nghia", Q_NULLPTR));
        label_6->setText(QApplication::translate("aboutUs", "C.Duong", Q_NULLPTR));
        label_7->setText(QApplication::translate("aboutUs", "DevilTitan team", Q_NULLPTR));
        label_8->setText(QApplication::translate("aboutUs", "LIBPRO 2017-2018", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aboutUs: public Ui_aboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
