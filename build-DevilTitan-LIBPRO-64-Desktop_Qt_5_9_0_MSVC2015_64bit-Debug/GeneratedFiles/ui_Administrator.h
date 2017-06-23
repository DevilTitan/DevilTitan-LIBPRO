/********************************************************************************
** Form generated from reading UI file 'Administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QPushButton *publicChat_2;
    QPushButton *publicChat_3;
    QPushButton *publicChat_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *waitTable;
    QLabel *label_2;
    QPushButton *insertButton_3;
    QPushButton *searchButton_3;
    QLineEdit *readerIDLe_3;
    QLineEdit *book_name;
    QLabel *label_3;
    QLineEdit *address_2;
    QLabel *label_45;
    QLabel *label_46;
    QLineEdit *address_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLineEdit *address_4;
    QLabel *label_47;
    QLabel *label_70;
    QPushButton *pushButton;
    QWidget *ReaderRent;
    QTableView *borrowTable;
    QLabel *label;
    QLineEdit *readerIDLe;
    QLineEdit *readerIDLe_4;
    QLabel *label_10;
    QLineEdit *mail;
    QLabel *label_28;
    QPushButton *insertButton;
    QLineEdit *dayLe_3;
    QLineEdit *firstName;
    QLabel *id;
    QLineEdit *school;
    QPushButton *searchButton;
    QLabel *userIdentify;
    QLineEdit *monthLe_3;
    QLabel *label_29;
    QLineEdit *phone;
    QLabel *label_42;
    QLineEdit *address;
    QLineEdit *occupation;
    QLabel *label_31;
    QLabel *label_25;
    QRadioButton *male;
    QLabel *label_27;
    QLineEdit *lastName;
    QLabel *label_32;
    QLineEdit *yearLe_3;
    QLabel *label_43;
    QLabel *label_41;
    QRadioButton *female;
    QLabel *label_26;
    QLabel *label_30;
    QLabel *label_44;
    QPushButton *logout;
    QPushButton *publicChat_5;
    QLabel *error2;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(1318, 816);
        Administrator->setStyleSheet(QLatin1String("#Administrator{\n"
"\n"
"background-image: url(:/appscreen/Resources/appscreen/flat1 - Copy.png);\n"
"\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"font: 9pt \"Segoe UI\";\n"
"}\n"
"QTabWidget::pane{\n"
"border:0;\n"
"}\n"
"QTabWidget::tab{\n"
"background-color:  rgba(85, 170, 0, 0.3);\n"
"}\n"
"QLineEdit{\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        publicChat_2 = new QPushButton(Administrator);
        publicChat_2->setObjectName(QStringLiteral("publicChat_2"));
        publicChat_2->setGeometry(QRect(840, 30, 90, 71));
        publicChat_2->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:7px;\n"
"border-top-right-radius:0;\n"
"border-bottom-right-radius:0;\n"
"border-left:10;\n"
"border-color:white"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/notification.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_2->setIcon(icon);
        publicChat_2->setIconSize(QSize(50, 50));
        publicChat_3 = new QPushButton(Administrator);
        publicChat_3->setObjectName(QStringLiteral("publicChat_3"));
        publicChat_3->setGeometry(QRect(1110, 30, 90, 71));
        publicChat_3->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/Settings-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_3->setIcon(icon1);
        publicChat_3->setIconSize(QSize(60, 60));
        publicChat_4 = new QPushButton(Administrator);
        publicChat_4->setObjectName(QStringLiteral("publicChat_4"));
        publicChat_4->setGeometry(QRect(930, 30, 90, 71));
        publicChat_4->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/barIcon/Resources/icon/envelope.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_4->setIcon(icon2);
        publicChat_4->setIconSize(QSize(50, 50));
        tabWidget = new QTabWidget(Administrator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 70, 1251, 691));
        tabWidget->setStyleSheet(QLatin1String("#tabWidget{\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4);border-color:rgba(255, 255, 255, .5);\n"
"\n"
"}\n"
"\n"
"#ReaderRent{\n"
"\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .1);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"}\n"
"#tab{\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .1);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"height:60px;\n"
"\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(66, 134, 244, .2);border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"QTabBar::tab:s"
                        "elected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4);border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"\n"
"QPushButton {\n"
"	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"QLineEdit\n"
"{\n"
"border-radius:5px;\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        waitTable = new QTableView(tab);
        waitTable->setObjectName(QStringLiteral("waitTable"));
        waitTable->setGeometry(QRect(30, 110, 751, 491));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(waitTable->sizePolicy().hasHeightForWidth());
        waitTable->setSizePolicy(sizePolicy);
        waitTable->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"border:0px;\n"
"gridline-color:white;"));
        waitTable->horizontalHeader()->setMinimumSectionSize(200);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 10, 75, 20));
        label_2->setStyleSheet(QStringLiteral(""));
        insertButton_3 = new QPushButton(tab);
        insertButton_3->setObjectName(QStringLiteral("insertButton_3"));
        insertButton_3->setGeometry(QRect(1030, 550, 90, 61));
        insertButton_3->setStyleSheet(QStringLiteral("border:0px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton_3->setIcon(icon3);
        insertButton_3->setIconSize(QSize(30, 30));
        searchButton_3 = new QPushButton(tab);
        searchButton_3->setObjectName(QStringLiteral("searchButton_3"));
        searchButton_3->setGeometry(QRect(1135, 549, 90, 61));
        searchButton_3->setStyleSheet(QStringLiteral("border:0px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/unchecked.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton_3->setIcon(icon4);
        searchButton_3->setIconSize(QSize(30, 40));
        readerIDLe_3 = new QLineEdit(tab);
        readerIDLe_3->setObjectName(QStringLiteral("readerIDLe_3"));
        readerIDLe_3->setGeometry(QRect(32, 39, 311, 41));
        readerIDLe_3->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.4);\n"
"border-radius:5px;"));
        book_name = new QLineEdit(tab);
        book_name->setObjectName(QStringLiteral("book_name"));
        book_name->setGeometry(QRect(370, 40, 221, 41));
        book_name->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.4);\n"
"border-radius:5px;"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 10, 81, 20));
        label_3->setStyleSheet(QStringLiteral(""));
        address_2 = new QLineEdit(tab);
        address_2->setObjectName(QStringLiteral("address_2"));
        address_2->setGeometry(QRect(820, 180, 401, 51));
        address_2->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_45 = new QLabel(tab);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(850, 150, 161, 20));
        label_45->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        label_46 = new QLabel(tab);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(850, 240, 161, 20));
        label_46->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        address_3 = new QLineEdit(tab);
        address_3->setObjectName(QStringLiteral("address_3"));
        address_3->setGeometry(QRect(820, 270, 401, 51));
        address_3->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(830, 370, 81, 20));
        checkBox->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        checkBox_2 = new QCheckBox(tab);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(910, 370, 101, 20));
        checkBox_2->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        checkBox_3 = new QCheckBox(tab);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(1020, 370, 81, 20));
        checkBox_3->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        checkBox_4 = new QCheckBox(tab);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(1110, 370, 111, 20));
        checkBox_4->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        address_4 = new QLineEdit(tab);
        address_4->setObjectName(QStringLiteral("address_4"));
        address_4->setGeometry(QRect(920, 420, 111, 51));
        address_4->setStyleSheet(QLatin1String("background-color:rgba(55,55,55,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(255,255,255);\n"
""));
        label_47 = new QLabel(tab);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(840, 440, 61, 20));
        label_47->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        label_70 = new QLabel(tab);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(1050, 440, 61, 21));
        label_70->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1110, 417, 94, 51));
        pushButton->setStyleSheet(QLatin1String("border:0px;\n"
""));
        tabWidget->addTab(tab, QString());
        ReaderRent = new QWidget();
        ReaderRent->setObjectName(QStringLiteral("ReaderRent"));
        ReaderRent->setStyleSheet(QStringLiteral("#tabWidget{border-radius:0px;}"));
        borrowTable = new QTableView(ReaderRent);
        borrowTable->setObjectName(QStringLiteral("borrowTable"));
        borrowTable->setGeometry(QRect(30, 100, 751, 501));
        sizePolicy.setHeightForWidth(borrowTable->sizePolicy().hasHeightForWidth());
        borrowTable->setSizePolicy(sizePolicy);
        borrowTable->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
"gridline-color:white;\n"
"border:0"));
        borrowTable->horizontalHeader()->setMinimumSectionSize(200);
        label = new QLabel(ReaderRent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 91, 20));
        label->setStyleSheet(QStringLiteral(""));
        readerIDLe = new QLineEdit(ReaderRent);
        readerIDLe->setObjectName(QStringLiteral("readerIDLe"));
        readerIDLe->setGeometry(QRect(32, 39, 171, 41));
        readerIDLe->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        readerIDLe_4 = new QLineEdit(ReaderRent);
        readerIDLe_4->setObjectName(QStringLiteral("readerIDLe_4"));
        readerIDLe_4->setGeometry(QRect(250, 40, 201, 41));
        readerIDLe_4->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_10 = new QLabel(ReaderRent);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 10, 171, 20));
        label_10->setStyleSheet(QStringLiteral(""));
        mail = new QLineEdit(ReaderRent);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(980, 210, 241, 51));
        mail->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_28 = new QLabel(ReaderRent);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(850, 20, 75, 20));
        label_28->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        insertButton = new QPushButton(ReaderRent);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(1025, 541, 90, 61));
        insertButton->setStyleSheet(QStringLiteral("border:0px;"));
        insertButton->setIcon(icon3);
        insertButton->setIconSize(QSize(30, 30));
        dayLe_3 = new QLineEdit(ReaderRent);
        dayLe_3->setObjectName(QStringLiteral("dayLe_3"));
        dayLe_3->setGeometry(QRect(1150, 140, 50, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dayLe_3->sizePolicy().hasHeightForWidth());
        dayLe_3->setSizePolicy(sizePolicy1);
        dayLe_3->setMinimumSize(QSize(50, 0));
        dayLe_3->setMaximumSize(QSize(50, 16777215));
        dayLe_3->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        firstName = new QLineEdit(ReaderRent);
        firstName->setObjectName(QStringLiteral("firstName"));
        firstName->setGeometry(QRect(820, 50, 141, 51));
        firstName->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        id = new QLabel(ReaderRent);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(820, 480, 131, 41));
        id->setStyleSheet(QLatin1String("background-color:rgba(55,55,55,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(255,255,255);\n"
"border-radius:5px;"));
        school = new QLineEdit(ReaderRent);
        school->setObjectName(QStringLiteral("school"));
        school->setGeometry(QRect(980, 300, 241, 51));
        school->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        searchButton = new QPushButton(ReaderRent);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(1130, 540, 90, 61));
        searchButton->setStyleSheet(QStringLiteral("border:0px;"));
        searchButton->setIcon(icon4);
        searchButton->setIconSize(QSize(30, 40));
        userIdentify = new QLabel(ReaderRent);
        userIdentify->setObjectName(QStringLiteral("userIdentify"));
        userIdentify->setGeometry(QRect(980, 480, 241, 41));
        userIdentify->setStyleSheet(QLatin1String("background-color:rgba(55,55,55,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(255,255,255);\n"
"border-radius:5px;"));
        monthLe_3 = new QLineEdit(ReaderRent);
        monthLe_3->setObjectName(QStringLiteral("monthLe_3"));
        monthLe_3->setGeometry(QRect(1076, 140, 50, 31));
        sizePolicy1.setHeightForWidth(monthLe_3->sizePolicy().hasHeightForWidth());
        monthLe_3->setSizePolicy(sizePolicy1);
        monthLe_3->setMinimumSize(QSize(50, 0));
        monthLe_3->setMaximumSize(QSize(50, 16777215));
        monthLe_3->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_29 = new QLabel(ReaderRent);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(1070, 20, 75, 20));
        label_29->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        phone = new QLineEdit(ReaderRent);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(820, 210, 141, 51));
        phone->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_42 = new QLabel(ReaderRent);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(850, 360, 161, 20));
        label_42->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        address = new QLineEdit(ReaderRent);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(820, 390, 401, 51));
        address->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        occupation = new QLineEdit(ReaderRent);
        occupation->setObjectName(QStringLiteral("occupation"));
        occupation->setGeometry(QRect(820, 300, 141, 51));
        occupation->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_31 = new QLabel(ReaderRent);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(1070, 180, 75, 20));
        label_31->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        label_25 = new QLabel(ReaderRent);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(1133, 139, 10, 31));
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);
        label_25->setMinimumSize(QSize(10, 0));
        label_25->setMaximumSize(QSize(10, 16777215));
        label_25->setStyleSheet(QStringLiteral("background-color:transparent"));
        male = new QRadioButton(ReaderRent);
        male->setObjectName(QStringLiteral("male"));
        male->setGeometry(QRect(830, 150, 95, 20));
        male->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        label_27 = new QLabel(ReaderRent);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(1059, 139, 10, 31));
        sizePolicy1.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy1);
        label_27->setMinimumSize(QSize(10, 0));
        label_27->setMaximumSize(QSize(10, 16777215));
        label_27->setStyleSheet(QStringLiteral("background-color:transparent"));
        lastName = new QLineEdit(ReaderRent);
        lastName->setObjectName(QStringLiteral("lastName"));
        lastName->setGeometry(QRect(980, 50, 241, 51));
        lastName->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_32 = new QLabel(ReaderRent);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(850, 270, 81, 20));
        label_32->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        yearLe_3 = new QLineEdit(ReaderRent);
        yearLe_3->setObjectName(QStringLiteral("yearLe_3"));
        yearLe_3->setGeometry(QRect(1002, 140, 50, 31));
        sizePolicy1.setHeightForWidth(yearLe_3->sizePolicy().hasHeightForWidth());
        yearLe_3->setSizePolicy(sizePolicy1);
        yearLe_3->setMinimumSize(QSize(50, 0));
        yearLe_3->setMaximumSize(QSize(50, 16777215));
        yearLe_3->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_43 = new QLabel(ReaderRent);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(850, 450, 75, 20));
        label_43->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        label_41 = new QLabel(ReaderRent);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(1060, 270, 75, 20));
        label_41->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        female = new QRadioButton(ReaderRent);
        female->setObjectName(QStringLiteral("female"));
        female->setGeometry(QRect(910, 150, 95, 20));
        female->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        label_26 = new QLabel(ReaderRent);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(1001, 112, 233, 20));
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);
        label_26->setStyleSheet(QLatin1String("background-color:transparent\n"
""));
        label_30 = new QLabel(ReaderRent);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(860, 180, 75, 20));
        label_30->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        label_44 = new QLabel(ReaderRent);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(1030, 450, 161, 20));
        label_44->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        tabWidget->addTab(ReaderRent, QString());
        logout = new QPushButton(Administrator);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(1200, 30, 90, 71));
        logout->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:7px;\n"
"border-top-left-radius:0;\n"
"border-bottom-left-radius:0;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/Resources/icon/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon5);
        logout->setIconSize(QSize(50, 60));
        publicChat_5 = new QPushButton(Administrator);
        publicChat_5->setObjectName(QStringLiteral("publicChat_5"));
        publicChat_5->setGeometry(QRect(1020, 30, 90, 71));
        publicChat_5->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/Resources/icon/shuffle(3).png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_5->setIcon(icon6);
        publicChat_5->setIconSize(QSize(60, 60));
        error2 = new QLabel(Administrator);
        error2->setObjectName(QStringLiteral("error2"));
        error2->setGeometry(QRect(180, 770, 981, 31));
        error2->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));

        retranslateUi(Administrator);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat_2->setToolTip(QApplication::translate("Administrator", "Account statistic", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_2->setWhatsThis(QApplication::translate("Administrator", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        publicChat_3->setToolTip(QApplication::translate("Administrator", "Renting book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_3->setWhatsThis(QApplication::translate("Administrator", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        publicChat_4->setToolTip(QApplication::translate("Administrator", "Renting book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_4->setWhatsThis(QApplication::translate("Administrator", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_4->setText(QString());
        label_2->setText(QApplication::translate("Administrator", "Username", Q_NULLPTR));
        insertButton_3->setText(QString());
        searchButton_3->setText(QString());
        label_3->setText(QApplication::translate("Administrator", "Book name", Q_NULLPTR));
        address_2->setText(QString());
        label_45->setText(QApplication::translate("Administrator", "Username", Q_NULLPTR));
        label_46->setText(QApplication::translate("Administrator", "Password", Q_NULLPTR));
        address_3->setText(QString());
        checkBox->setText(QApplication::translate("Administrator", "Reader", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("Administrator", "Librarian", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("Administrator", "Data Processor", Q_NULLPTR));
        address_4->setText(QApplication::translate("Administrator", "105", Q_NULLPTR));
        label_47->setText(QApplication::translate("Administrator", "User ID:", Q_NULLPTR));
        label_70->setText(QApplication::translate("Administrator", "Staus", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Administrator", "Active", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Administrator", "Account", Q_NULLPTR));
        label->setText(QApplication::translate("Administrator", "User :", Q_NULLPTR));
        label_10->setText(QApplication::translate("Administrator", " User's Identify Number", Q_NULLPTR));
        label_28->setText(QApplication::translate("Administrator", "First name", Q_NULLPTR));
        insertButton->setText(QString());
        id->setText(QApplication::translate("Administrator", "  111", Q_NULLPTR));
        searchButton->setText(QString());
        userIdentify->setText(QApplication::translate("Administrator", "    0123456789", Q_NULLPTR));
        label_29->setText(QApplication::translate("Administrator", "Last Name", Q_NULLPTR));
        label_42->setText(QApplication::translate("Administrator", "Address:", Q_NULLPTR));
        address->setText(QApplication::translate("Administrator", "  adress", Q_NULLPTR));
        occupation->setText(QApplication::translate("Administrator", "dcm", Q_NULLPTR));
        label_31->setText(QApplication::translate("Administrator", "Mail", Q_NULLPTR));
        label_25->setText(QApplication::translate("Administrator", "/", Q_NULLPTR));
        male->setText(QApplication::translate("Administrator", "Male", Q_NULLPTR));
        label_27->setText(QApplication::translate("Administrator", "/", Q_NULLPTR));
        label_32->setText(QApplication::translate("Administrator", "Occupation", Q_NULLPTR));
        label_43->setText(QApplication::translate("Administrator", "User's Id:", Q_NULLPTR));
        label_41->setText(QApplication::translate("Administrator", "Company", Q_NULLPTR));
        female->setText(QApplication::translate("Administrator", "Female", Q_NULLPTR));
        label_26->setText(QApplication::translate("Administrator", "Date (mm/dd/yyyy)", Q_NULLPTR));
        label_30->setText(QApplication::translate("Administrator", "Phone", Q_NULLPTR));
        label_44->setText(QApplication::translate("Administrator", "User's Identify Number:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReaderRent), QApplication::translate("Administrator", "User", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        logout->setToolTip(QApplication::translate("Administrator", "Log out\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        logout->setWhatsThis(QApplication::translate("Administrator", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        logout->setText(QString());
#ifndef QT_NO_TOOLTIP
        publicChat_5->setToolTip(QApplication::translate("Administrator", "Renting book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_5->setWhatsThis(QApplication::translate("Administrator", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_5->setText(QString());
        error2->setText(QApplication::translate("Administrator", "Error goes here", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
