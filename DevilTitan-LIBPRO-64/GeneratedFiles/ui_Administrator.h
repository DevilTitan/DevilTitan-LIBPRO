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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QTabWidget *tabWidget;
    QWidget *request;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_15;
    QLineEdit *userIdLe_2;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_16;
    QLineEdit *accountNameLe;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_17;
    QLineEdit *passwordLe;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_3;
    QCheckBox *banCheckBox;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *readerCheckBox;
    QCheckBox *librarianCheckBox;
    QCheckBox *dataProcessorCheckBox;
    QCheckBox *administratorCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *insertButton_2;
    QPushButton *searchButton_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *deleteButton_2;
    QPushButton *updateButton_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *notiUpdate_2;
    QTableView *accountView;
    QWidget *book;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userIdLe;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *firstNameLe;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lastNameLe;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QCheckBox *maleCheckBox;
    QCheckBox *femaleCheckBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *yearLe;
    QLabel *label_10;
    QLineEdit *monthLe;
    QLabel *label_11;
    QLineEdit *dayLe;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLineEdit *phoneNumberLe;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_9;
    QLineEdit *emailLe;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_12;
    QLineEdit *occupationLe;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QLineEdit *companySchoolLe;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_14;
    QLineEdit *addressLe;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *insertButton;
    QPushButton *searchButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *notiUpdate;
    QTableView *userView;
    QFrame *frame_3;
    QLabel *notify_2;
    QLabel *userLabel;
    QPushButton *pushButton;
    QPushButton *theme;
    QLabel *notify;
    QPushButton *messageButton;
    QPushButton *roleButton;
    QPushButton *logOutButton;
    QFrame *frame_4;
    QLabel *greeting;
    QLabel *time;
    QPushButton *LIBPROButton;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(1313, 728);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Administrator->sizePolicy().hasHeightForWidth());
        Administrator->setSizePolicy(sizePolicy);
        Administrator->setMinimumSize(QSize(1060, 588));
        Administrator->setMaximumSize(QSize(30000, 30000));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/LP icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Administrator->setWindowIcon(icon);
        Administrator->setStyleSheet(QLatin1String("#Administrator{\n"
"border-image: url(:/appscreen/Resources/appscreen/Admin_Background.png);\n"
"}\n"
"QTabWidget::pane{\n"
"border:0;\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"}\n"
"QCheckBox{\n"
"font: 9pt \"Segoe UI\";\n"
"color: black;\n"
"}\n"
"QLineEdit{\n"
"border-radius:2px;\n"
"}\n"
"#Librarian{\n"
"\n"
"background-image: url(:/appscreen/Resources/appscreen/flat2 - Copy.png);\n"
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
"background-color: rgba(77, 166, 255,0.6)\n"
"}\n"
"\n"
"QPushBut"
                        "ton:hover {\n"
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
        tabWidget = new QTabWidget(Administrator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(180, 70, 1141, 661));
        tabWidget->setStyleSheet(QLatin1String("#user_Information{\n"
"	background-color:  rgba(0, 0, 0,0.6);\n"
"\n"
"	border-radius:2px;\n"
"}\n"
"#account_Information{\n"
"background-color:  rgba(0, 0, 0,0.6);\n"
"border-radius:2px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"width: 200px;\n"
"height:55px;\n"
"\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(66, 134, 244, .4);\n"
"border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4);border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"\n"
"\n"
"#tabWidget{\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4)\n"
";border-color:rgba(255, 255, 255, .5);\n"
"	background-image: url(:/appscreen/Resources/appscreen/flat2 - Copy.png);\n"
"\n"
"}\n"
"\n"
"#request{\n"
"\n"
"	bo"
                        "rder-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius:0px;background-color: rgba(255, 255, 255, .1);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"}\n"
"#book{\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .1);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 570px;\n"
"height:61px;\n"
"\n"
"border: 0px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(66, 134, 244, .2);border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"\n"
"border: 0px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .3);\n"
"}\n"
"\n"
"QPushButton {\n"
"	\n"
""
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
"/*background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);*/\n"
"background-color:#34495e\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"background-color:#34495e;\n"
"}\n"
"QLineEdit\n"
"{\n"
"border-radius:3px;\n"
"}\n"
"QLabel{\n"
"color:white;}\n"
"\n"
""));
        request = new QWidget();
        request->setObjectName(QStringLiteral("request"));
        layoutWidget = new QWidget(request);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1111, 571));
        verticalLayout_18 = new QVBoxLayout(layoutWidget);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_13->addWidget(label_15);

        userIdLe_2 = new QLineEdit(layoutWidget);
        userIdLe_2->setObjectName(QStringLiteral("userIdLe_2"));
        userIdLe_2->setMinimumSize(QSize(0, 40));
        userIdLe_2->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_13->addWidget(userIdLe_2);


        horizontalLayout_7->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_14->addWidget(label_16);

        accountNameLe = new QLineEdit(layoutWidget);
        accountNameLe->setObjectName(QStringLiteral("accountNameLe"));
        accountNameLe->setMinimumSize(QSize(0, 40));
        accountNameLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_14->addWidget(accountNameLe);


        horizontalLayout_7->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_15->addWidget(label_17);

        passwordLe = new QLineEdit(layoutWidget);
        passwordLe->setObjectName(QStringLiteral("passwordLe"));
        passwordLe->setMinimumSize(QSize(0, 40));
        passwordLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_15->addWidget(passwordLe);


        horizontalLayout_7->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_16->addWidget(label_3);

        banCheckBox = new QCheckBox(layoutWidget);
        banCheckBox->setObjectName(QStringLiteral("banCheckBox"));
        banCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        verticalLayout_16->addWidget(banCheckBox);


        horizontalLayout_7->addLayout(verticalLayout_16);


        verticalLayout_17->addLayout(horizontalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        readerCheckBox = new QCheckBox(layoutWidget);
        readerCheckBox->setObjectName(QStringLiteral("readerCheckBox"));
        readerCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(readerCheckBox);

        librarianCheckBox = new QCheckBox(layoutWidget);
        librarianCheckBox->setObjectName(QStringLiteral("librarianCheckBox"));
        librarianCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(librarianCheckBox);

        dataProcessorCheckBox = new QCheckBox(layoutWidget);
        dataProcessorCheckBox->setObjectName(QStringLiteral("dataProcessorCheckBox"));
        dataProcessorCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(dataProcessorCheckBox);

        administratorCheckBox = new QCheckBox(layoutWidget);
        administratorCheckBox->setObjectName(QStringLiteral("administratorCheckBox"));
        administratorCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(administratorCheckBox);


        verticalLayout_17->addLayout(horizontalLayout_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(570, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        insertButton_2 = new QPushButton(layoutWidget);
        insertButton_2->setObjectName(QStringLiteral("insertButton_2"));
        insertButton_2->setMinimumSize(QSize(90, 60));
        insertButton_2->setStyleSheet(QLatin1String("#insertButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"#insertButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"#insertButton_2:pressed {\n"
"background: qradia"
                        "lgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/insert - Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton_2->setIcon(icon1);

        horizontalLayout_8->addWidget(insertButton_2);

        searchButton_2 = new QPushButton(layoutWidget);
        searchButton_2->setObjectName(QStringLiteral("searchButton_2"));
        searchButton_2->setMinimumSize(QSize(90, 60));
        searchButton_2->setStyleSheet(QLatin1String("#searchButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"#searchButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"#searchButton_2:pressed {\n"
"background: qradia"
                        "lgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/magnifying-glass - Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton_2->setIcon(icon2);

        horizontalLayout_8->addWidget(searchButton_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));

        horizontalLayout_8->addLayout(horizontalLayout_10);

        deleteButton_2 = new QPushButton(layoutWidget);
        deleteButton_2->setObjectName(QStringLiteral("deleteButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deleteButton_2->sizePolicy().hasHeightForWidth());
        deleteButton_2->setSizePolicy(sizePolicy1);
        deleteButton_2->setMinimumSize(QSize(90, 60));
        deleteButton_2->setStyleSheet(QLatin1String("#deleteButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"\n"
"#deleteButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"#deleteButton_2:pressed {\n"
"background: q"
                        "radialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/cancel-button - Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton_2->setIcon(icon3);

        horizontalLayout_8->addWidget(deleteButton_2);

        updateButton_2 = new QPushButton(layoutWidget);
        updateButton_2->setObjectName(QStringLiteral("updateButton_2"));
        updateButton_2->setMinimumSize(QSize(90, 60));
        updateButton_2->setStyleSheet(QLatin1String("#updateButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"#updateButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"#updateButton_2:pressed {\n"
"background: qradia"
                        "lgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/refresh-button - Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateButton_2->setIcon(icon4);

        horizontalLayout_8->addWidget(updateButton_2);


        verticalLayout_17->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        notiUpdate_2 = new QCheckBox(layoutWidget);
        notiUpdate_2->setObjectName(QStringLiteral("notiUpdate_2"));
        notiUpdate_2->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_6->addWidget(notiUpdate_2);


        verticalLayout_17->addLayout(horizontalLayout_6);


        verticalLayout_18->addLayout(verticalLayout_17);

        accountView = new QTableView(layoutWidget);
        accountView->setObjectName(QStringLiteral("accountView"));
        accountView->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
"gridline-color:white;"));

        verticalLayout_18->addWidget(accountView);

        tabWidget->addTab(request, QString());
        book = new QWidget();
        book->setObjectName(QStringLiteral("book"));
        layoutWidget1 = new QWidget(book);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 12, 1111, 651));
        verticalLayout_12 = new QVBoxLayout(layoutWidget1);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        userIdLe = new QLineEdit(layoutWidget1);
        userIdLe->setObjectName(QStringLiteral("userIdLe"));
        userIdLe->setMinimumSize(QSize(0, 40));
        userIdLe->setMaximumSize(QSize(16777215, 40));
        userIdLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout->addWidget(userIdLe);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        firstNameLe = new QLineEdit(layoutWidget1);
        firstNameLe->setObjectName(QStringLiteral("firstNameLe"));
        firstNameLe->setMinimumSize(QSize(0, 40));
        firstNameLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_2->addWidget(firstNameLe);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        lastNameLe = new QLineEdit(layoutWidget1);
        lastNameLe->setObjectName(QStringLiteral("lastNameLe"));
        lastNameLe->setMinimumSize(QSize(0, 40));
        lastNameLe->setMaximumSize(QSize(16777215, 16777215));
        lastNameLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_3->addWidget(lastNameLe);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maleCheckBox = new QCheckBox(layoutWidget1);
        maleCheckBox->setObjectName(QStringLiteral("maleCheckBox"));
        maleCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout->addWidget(maleCheckBox);

        femaleCheckBox = new QCheckBox(layoutWidget1);
        femaleCheckBox->setObjectName(QStringLiteral("femaleCheckBox"));
        femaleCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout->addWidget(femaleCheckBox);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        yearLe = new QLineEdit(layoutWidget1);
        yearLe->setObjectName(QStringLiteral("yearLe"));
        sizePolicy.setHeightForWidth(yearLe->sizePolicy().hasHeightForWidth());
        yearLe->setSizePolicy(sizePolicy);
        yearLe->setMinimumSize(QSize(0, 40));
        yearLe->setMaximumSize(QSize(59, 16777215));
        yearLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        horizontalLayout_2->addWidget(yearLe);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        monthLe = new QLineEdit(layoutWidget1);
        monthLe->setObjectName(QStringLiteral("monthLe"));
        sizePolicy.setHeightForWidth(monthLe->sizePolicy().hasHeightForWidth());
        monthLe->setSizePolicy(sizePolicy);
        monthLe->setMinimumSize(QSize(0, 40));
        monthLe->setMaximumSize(QSize(50, 16777215));
        monthLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        horizontalLayout_2->addWidget(monthLe);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        dayLe = new QLineEdit(layoutWidget1);
        dayLe->setObjectName(QStringLiteral("dayLe"));
        sizePolicy.setHeightForWidth(dayLe->sizePolicy().hasHeightForWidth());
        dayLe->setSizePolicy(sizePolicy);
        dayLe->setMinimumSize(QSize(0, 40));
        dayLe->setMaximumSize(QSize(50, 16777215));
        dayLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        horizontalLayout_2->addWidget(dayLe);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        phoneNumberLe = new QLineEdit(layoutWidget1);
        phoneNumberLe->setObjectName(QStringLiteral("phoneNumberLe"));
        phoneNumberLe->setMinimumSize(QSize(0, 40));
        phoneNumberLe->setSizeIncrement(QSize(0, 40));
        phoneNumberLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_6->addWidget(phoneNumberLe);


        horizontalLayout_3->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(label_9);

        emailLe = new QLineEdit(layoutWidget1);
        emailLe->setObjectName(QStringLiteral("emailLe"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(emailLe->sizePolicy().hasHeightForWidth());
        emailLe->setSizePolicy(sizePolicy3);
        emailLe->setMaximumSize(QSize(16777215, 40));
        emailLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_7->addWidget(emailLe);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);

        verticalLayout_8->addWidget(label_12);

        occupationLe = new QLineEdit(layoutWidget1);
        occupationLe->setObjectName(QStringLiteral("occupationLe"));
        sizePolicy3.setHeightForWidth(occupationLe->sizePolicy().hasHeightForWidth());
        occupationLe->setSizePolicy(sizePolicy3);
        occupationLe->setMinimumSize(QSize(0, 40));
        occupationLe->setMaximumSize(QSize(16777215, 40));
        occupationLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));
        occupationLe->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_8->addWidget(occupationLe);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);

        verticalLayout_9->addWidget(label_13);

        companySchoolLe = new QLineEdit(layoutWidget1);
        companySchoolLe->setObjectName(QStringLiteral("companySchoolLe"));
        sizePolicy3.setHeightForWidth(companySchoolLe->sizePolicy().hasHeightForWidth());
        companySchoolLe->setSizePolicy(sizePolicy3);
        companySchoolLe->setMaximumSize(QSize(16777215, 40));
        companySchoolLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_9->addWidget(companySchoolLe);


        horizontalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, -1, 0, -1);
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);

        verticalLayout_10->addWidget(label_14);

        addressLe = new QLineEdit(layoutWidget1);
        addressLe->setObjectName(QStringLiteral("addressLe"));
        sizePolicy3.setHeightForWidth(addressLe->sizePolicy().hasHeightForWidth());
        addressLe->setSizePolicy(sizePolicy3);
        addressLe->setMinimumSize(QSize(350, 0));
        addressLe->setMaximumSize(QSize(350, 40));
        addressLe->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
""));

        verticalLayout_10->addWidget(addressLe);


        horizontalLayout_4->addLayout(verticalLayout_10);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 15, -1, 0);
        horizontalSpacer = new QSpacerItem(600, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        insertButton = new QPushButton(layoutWidget1);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(10);
        sizePolicy4.setHeightForWidth(insertButton->sizePolicy().hasHeightForWidth());
        insertButton->setSizePolicy(sizePolicy4);
        insertButton->setMinimumSize(QSize(90, 60));
        insertButton->setMaximumSize(QSize(120, 70));
        insertButton->setStyleSheet(QLatin1String("#insertButton {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"#insertButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"#insertButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
""));
        insertButton->setIcon(icon1);

        horizontalLayout_5->addWidget(insertButton);

        searchButton = new QPushButton(layoutWidget1);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setMinimumSize(QSize(90, 60));
        searchButton->setMaximumSize(QSize(120, 70));
        searchButton->setStyleSheet(QLatin1String("#searchButton {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"#searchButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"#searchButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        searchButton->setIcon(icon2);

        horizontalLayout_5->addWidget(searchButton);

        deleteButton = new QPushButton(layoutWidget1);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMinimumSize(QSize(90, 60));
        deleteButton->setMaximumSize(QSize(120, 70));
        deleteButton->setStyleSheet(QLatin1String("#deleteButton{\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"#deleteButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"\n"
"#deleteButton:pressed {\n"
"backgro"
                        "und: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        deleteButton->setIcon(icon3);

        horizontalLayout_5->addWidget(deleteButton);

        updateButton = new QPushButton(layoutWidget1);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setMinimumSize(QSize(90, 60));
        updateButton->setMaximumSize(QSize(120, 70));
        updateButton->setStyleSheet(QLatin1String("#updateButton{\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"border:0px;\n"
"font-size:16px;\n"
"}\n"
"\n"
"#updateButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"#updateButton:pressed {\n"
"background: "
                        "qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        updateButton->setIcon(icon4);

        horizontalLayout_5->addWidget(updateButton);


        verticalLayout_11->addLayout(horizontalLayout_5);


        verticalLayout_12->addLayout(verticalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 10, -1, 10);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        notiUpdate = new QCheckBox(layoutWidget1);
        notiUpdate->setObjectName(QStringLiteral("notiUpdate"));
        notiUpdate->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_9->addWidget(notiUpdate);


        verticalLayout_12->addLayout(horizontalLayout_9);

        userView = new QTableView(layoutWidget1);
        userView->setObjectName(QStringLiteral("userView"));
        userView->setMinimumSize(QSize(0, 0));
        userView->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
"gridline-color:white;"));

        verticalLayout_12->addWidget(userView);

        tabWidget->addTab(book, QString());
        frame_3 = new QFrame(Administrator);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 70, 181, 691));
        frame_3->setStyleSheet(QLatin1String("QFrame{background-color:rgba(55,55,55,0.6);\n"
"border-bottom-left-radius:5px;border-bottom-right-radius:5px;}QPushButton {	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(55,55,55,0.4)\n"
"}\n"
"QPushButton:hover {\n"
"background-color:rgba(77, 166, 255,0.6);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        notify_2 = new QLabel(frame_3);
        notify_2->setObjectName(QStringLiteral("notify_2"));
        notify_2->setGeometry(QRect(50, 490, 21, 20));
        notify_2->setStyleSheet(QLatin1String("background-color:transparent;color: red; \n"
""));
        userLabel = new QLabel(frame_3);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(50, 20, 121, 31));
        userLabel->setMaximumSize(QSize(10000, 10000));
        userLabel->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));
        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 90, 30));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(90, 30));
        pushButton->setMaximumSize(QSize(30, 30));
        pushButton->setStyleSheet(QLatin1String("background-color: tranparent;\n"
"background:transparent;\n"
"border: 0px;\n"
"border-radius:50px;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/barIcon/Resources/icon/user (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(30, 100));
        theme = new QPushButton(frame_3);
        theme->setObjectName(QStringLiteral("theme"));
        theme->setGeometry(QRect(0, 60, 181, 81));
        theme->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/Resources/icon/567.png"), QSize(), QIcon::Normal, QIcon::Off);
        theme->setIcon(icon6);
        theme->setIconSize(QSize(30, 30));
        theme->setAutoDefault(false);
        notify = new QLabel(frame_3);
        notify->setObjectName(QStringLiteral("notify"));
        notify->setGeometry(QRect(30, 220, 16, 16));
        notify->setStyleSheet(QLatin1String("background-color:transparent;color: red; \n"
"font: 25 10pt \"Ubuntu Light\";\n"
"border-radius: 10px;"));
        messageButton = new QPushButton(frame_3);
        messageButton->setObjectName(QStringLiteral("messageButton"));
        messageButton->setGeometry(QRect(0, 140, 181, 81));
        messageButton->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/Resources/icon/6969.png"), QSize(), QIcon::Normal, QIcon::Off);
        messageButton->setIcon(icon7);
        messageButton->setIconSize(QSize(35, 35));
        roleButton = new QPushButton(frame_3);
        roleButton->setObjectName(QStringLiteral("roleButton"));
        roleButton->setGeometry(QRect(0, 220, 181, 81));
        roleButton->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/Resources/icon/shuffle (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        roleButton->setIcon(icon8);
        roleButton->setIconSize(QSize(35, 35));
        logOutButton = new QPushButton(frame_3);
        logOutButton->setObjectName(QStringLiteral("logOutButton"));
        logOutButton->setGeometry(QRect(0, 300, 181, 81));
        logOutButton->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icon/Resources/icon/logout (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        logOutButton->setIcon(icon9);
        logOutButton->setIconSize(QSize(35, 35));
        frame_4 = new QFrame(Administrator);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 1331, 71));
        frame_4->setStyleSheet(QLatin1String("QFrame{border-top-radius:5px;background-color:rgba(55,55,55,1);}\n"
"QPushButton {	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(55,55,55, .3);\n"
"}\n"
"QPushButton:hover {\n"
"background-color:rgba(55,55,55,1);\n"
"background-color:#34495e\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        greeting = new QLabel(frame_4);
        greeting->setObjectName(QStringLiteral("greeting"));
        greeting->setGeometry(QRect(230, 20, 371, 31));
        greeting->setStyleSheet(QLatin1String("font: 10pt \"Roboto\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));
        time = new QLabel(frame_4);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(900, 20, 271, 31));
        time->setStyleSheet(QLatin1String("font: 10pt \"Roboto\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));
        LIBPROButton = new QPushButton(frame_4);
        LIBPROButton->setObjectName(QStringLiteral("LIBPROButton"));
        LIBPROButton->setGeometry(QRect(0, 0, 181, 71));
        LIBPROButton->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icon/Resources/icon/LIBPRO.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPROButton->setIcon(icon10);
        LIBPROButton->setIconSize(QSize(100, 100));
        frame_3->raise();
        tabWidget->raise();
        frame_4->raise();

        retranslateUi(Administrator);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
        label_15->setText(QApplication::translate("Administrator", "User ID", Q_NULLPTR));
        label_16->setText(QApplication::translate("Administrator", "Account name", Q_NULLPTR));
        label_17->setText(QApplication::translate("Administrator", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("Administrator", "Account status", Q_NULLPTR));
        banCheckBox->setText(QApplication::translate("Administrator", "Banned", Q_NULLPTR));
        readerCheckBox->setText(QApplication::translate("Administrator", "Reader", Q_NULLPTR));
        librarianCheckBox->setText(QApplication::translate("Administrator", "Librarian", Q_NULLPTR));
        dataProcessorCheckBox->setText(QApplication::translate("Administrator", "Data Processor", Q_NULLPTR));
        administratorCheckBox->setText(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
        insertButton_2->setText(QApplication::translate("Administrator", "   Insert", Q_NULLPTR));
        searchButton_2->setText(QApplication::translate("Administrator", "  Search", Q_NULLPTR));
        deleteButton_2->setText(QApplication::translate("Administrator", "  Delete", Q_NULLPTR));
        updateButton_2->setText(QApplication::translate("Administrator", "  Update", Q_NULLPTR));
        notiUpdate_2->setText(QApplication::translate("Administrator", "Stop notifying me when updating user's data", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(request), QApplication::translate("Administrator", "Account information", Q_NULLPTR));
        label->setText(QApplication::translate("Administrator", "User ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Administrator", "First name", Q_NULLPTR));
        label_5->setText(QApplication::translate("Administrator", "Last name", Q_NULLPTR));
        label_6->setText(QApplication::translate("Administrator", "Gender", Q_NULLPTR));
        maleCheckBox->setText(QApplication::translate("Administrator", "Male", Q_NULLPTR));
        femaleCheckBox->setText(QApplication::translate("Administrator", "Female", Q_NULLPTR));
        label_7->setText(QApplication::translate("Administrator", "Date of birth (yyyy/mm/dd)", Q_NULLPTR));
        label_10->setText(QApplication::translate("Administrator", "/", Q_NULLPTR));
        label_11->setText(QApplication::translate("Administrator", "/", Q_NULLPTR));
        label_8->setText(QApplication::translate("Administrator", "Phone number", Q_NULLPTR));
        phoneNumberLe->setText(QString());
        label_9->setText(QApplication::translate("Administrator", "Email", Q_NULLPTR));
        label_12->setText(QApplication::translate("Administrator", "Occupation", Q_NULLPTR));
        label_13->setText(QApplication::translate("Administrator", "Company_school", Q_NULLPTR));
        label_14->setText(QApplication::translate("Administrator", "Address", Q_NULLPTR));
        insertButton->setText(QApplication::translate("Administrator", "    Insert", Q_NULLPTR));
        searchButton->setText(QApplication::translate("Administrator", "   Search", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("Administrator", "   Delete", Q_NULLPTR));
        updateButton->setText(QApplication::translate("Administrator", "   Update", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        notiUpdate->setToolTip(QApplication::translate("Administrator", "<html><head/><body><p><span style=\" color:#ffffff;\">Stop notifying me when updating data</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        notiUpdate->setText(QApplication::translate("Administrator", "Stop notifying me when updating user's data", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(book), QApplication::translate("Administrator", "User information", Q_NULLPTR));
        notify_2->setText(QString());
        userLabel->setText(QApplication::translate("Administrator", "Username", Q_NULLPTR));
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        theme->setToolTip(QApplication::translate("Administrator", "Renting book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        theme->setWhatsThis(QApplication::translate("Administrator", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        theme->setText(QApplication::translate("Administrator", "      Theme              ", Q_NULLPTR));
        notify->setText(QString());
        messageButton->setText(QApplication::translate("Administrator", "     Message          ", Q_NULLPTR));
        roleButton->setText(QApplication::translate("Administrator", "    Switch            ", Q_NULLPTR));
        logOutButton->setText(QApplication::translate("Administrator", "    Log Out         ", Q_NULLPTR));
        greeting->setText(QString());
        time->setText(QString());
#ifndef QT_NO_TOOLTIP
        LIBPROButton->setToolTip(QApplication::translate("Administrator", "Change your password\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        LIBPROButton->setWhatsThis(QApplication::translate("Administrator", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        LIBPROButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
