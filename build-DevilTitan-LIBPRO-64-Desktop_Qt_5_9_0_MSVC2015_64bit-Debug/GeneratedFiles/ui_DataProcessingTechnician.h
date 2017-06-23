/********************************************************************************
** Form generated from reading UI file 'DataProcessingTechnician.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPROCESSINGTECHNICIAN_H
#define UI_DATAPROCESSINGTECHNICIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProcessingTechnician
{
public:
    QTabWidget *tabWidget;
    QWidget *request_list;
    QTableView *tableView;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *user_id;
    QLineEdit *user_id_line;
    QVBoxLayout *verticalLayout_2;
    QLabel *no_of_request;
    QLineEdit *no_of_request_line;
    QVBoxLayout *verticalLayout_3;
    QLabel *book_request;
    QLineEdit *book_request_line;
    QVBoxLayout *verticalLayout_4;
    QLabel *author;
    QLineEdit *author_line;
    QVBoxLayout *verticalLayout_5;
    QLabel *publisher;
    QLineEdit *publisher_line;
    QVBoxLayout *verticalLayout_6;
    QLabel *day_of_arrival;
    QLineEdit *day_of_arrival_line;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add;
    QPushButton *delete_2;
    QWidget *book_managerment;
    QTableView *tableView_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *isbn;
    QLineEdit *isbn_line;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_11;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit_14;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QFrame *buttonofrequest;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *add_2;
    QPushButton *delete_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_16;
    QPushButton *dataprocessor;
    QLabel *label;
    QPushButton *logoutpro;
    QPushButton *notipro;

    void setupUi(QWidget *DataProcessingTechnician)
    {
        if (DataProcessingTechnician->objectName().isEmpty())
            DataProcessingTechnician->setObjectName(QStringLiteral("DataProcessingTechnician"));
        DataProcessingTechnician->resize(1229, 721);
        DataProcessingTechnician->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"\n"
"border-radius:7px;\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"\n"
"}\n"
"\n"
"QCheckBox{\n"
"font: 9pt \"Segoe UI\";\n"
"\n"
"}\n"
"\n"
"#DataProcessingTechnician{\n"
"background-image: url(:/appscreen/Resources/appscreen/dataproscr.jpg);\n"
"}\n"
"#add:hover{\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,fx: 0.3, fy: -0.4,radius: 1.35,stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"#notipro:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0,0,0), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}"));
        tabWidget = new QTabWidget(DataProcessingTechnician);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 150, 1161, 551));
        QFont font;
        font.setPointSize(16);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("#request_list{\n"
"	background-color:  rgba(255, 255, 255,0.6);\n"
"\n"
"	border-radius:7px;\n"
"}\n"
"#book_managerment{\n"
"background-color:  rgba(255, 255, 255,0.6);\n"
"border-radius:2px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"width: 200px;\n"
"background-color:  rgba(255, 255, 255,0.6);\n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"width: 200px;\n"
"background-color: rgba(255, 255, 255,0.6);\n"
"}\n"
""));
        request_list = new QWidget();
        request_list->setObjectName(QStringLiteral("request_list"));
        request_list->setStyleSheet(QLatin1String("\n"
"border-radius: 12px;\n"
""));
        tableView = new QTableView(request_list);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 130, 1101, 371));
        tableView->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0.6);\n"
"border-color:rgba(255, 255, 255,0.6);"));
        layoutWidget_2 = new QWidget(request_list);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 20, 1101, 45));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        user_id = new QLabel(layoutWidget_2);
        user_id->setObjectName(QStringLiteral("user_id"));

        verticalLayout->addWidget(user_id);

        user_id_line = new QLineEdit(layoutWidget_2);
        user_id_line->setObjectName(QStringLiteral("user_id_line"));
        user_id_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout->addWidget(user_id_line);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        no_of_request = new QLabel(layoutWidget_2);
        no_of_request->setObjectName(QStringLiteral("no_of_request"));

        verticalLayout_2->addWidget(no_of_request);

        no_of_request_line = new QLineEdit(layoutWidget_2);
        no_of_request_line->setObjectName(QStringLiteral("no_of_request_line"));
        no_of_request_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_2->addWidget(no_of_request_line);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        book_request = new QLabel(layoutWidget_2);
        book_request->setObjectName(QStringLiteral("book_request"));

        verticalLayout_3->addWidget(book_request);

        book_request_line = new QLineEdit(layoutWidget_2);
        book_request_line->setObjectName(QStringLiteral("book_request_line"));
        book_request_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_3->addWidget(book_request_line);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        author = new QLabel(layoutWidget_2);
        author->setObjectName(QStringLiteral("author"));

        verticalLayout_4->addWidget(author);

        author_line = new QLineEdit(layoutWidget_2);
        author_line->setObjectName(QStringLiteral("author_line"));
        author_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_4->addWidget(author_line);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        publisher = new QLabel(layoutWidget_2);
        publisher->setObjectName(QStringLiteral("publisher"));

        verticalLayout_5->addWidget(publisher);

        publisher_line = new QLineEdit(layoutWidget_2);
        publisher_line->setObjectName(QStringLiteral("publisher_line"));
        publisher_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_5->addWidget(publisher_line);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        day_of_arrival = new QLabel(layoutWidget_2);
        day_of_arrival->setObjectName(QStringLiteral("day_of_arrival"));

        verticalLayout_6->addWidget(day_of_arrival);

        day_of_arrival_line = new QLineEdit(layoutWidget_2);
        day_of_arrival_line->setObjectName(QStringLiteral("day_of_arrival_line"));
        day_of_arrival_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_6->addWidget(day_of_arrival_line);


        horizontalLayout->addLayout(verticalLayout_6);

        frame = new QFrame(request_list);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(1030, 70, 100, 51));
        frame->setStyleSheet(QLatin1String("background-color: rgba(236, 188, 255,0.5);\n"
"border-color:rgba(236, 188, 255,0.5);\n"
"border-radius:7px;"));
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        add = new QPushButton(frame);
        add->setObjectName(QStringLiteral("add"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/add 2.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon);
        add->setIconSize(QSize(36, 36));

        horizontalLayout_2->addWidget(add);

        delete_2 = new QPushButton(frame);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        delete_2->setIcon(icon1);
        delete_2->setIconSize(QSize(36, 36));

        horizontalLayout_2->addWidget(delete_2);

        tabWidget->addTab(request_list, QString());
        book_managerment = new QWidget();
        book_managerment->setObjectName(QStringLiteral("book_managerment"));
        book_managerment->setStyleSheet(QLatin1String("border-radius: 12px;\n"
""));
        tableView_2 = new QTableView(book_managerment);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(30, 130, 1101, 371));
        tableView_2->setStyleSheet(QLatin1String("\n"
"background-color: rgba(255, 255, 255, 0.6);\n"
"border-color:rgba(255, 255, 255,0.6);"));
        layoutWidget = new QWidget(book_managerment);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 1101, 45));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        isbn = new QLabel(layoutWidget);
        isbn->setObjectName(QStringLiteral("isbn"));

        verticalLayout_7->addWidget(isbn);

        isbn_line = new QLineEdit(layoutWidget);
        isbn_line->setObjectName(QStringLiteral("isbn_line"));
        isbn_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_7->addWidget(isbn_line);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_8->addWidget(label_8);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_8->addWidget(lineEdit_8);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_9->addWidget(label_9);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_9->addWidget(lineEdit_9);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_10->addWidget(label_10);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_10->addWidget(lineEdit_10);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_13->addWidget(label_13);

        lineEdit_13 = new QLineEdit(layoutWidget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_13->addWidget(lineEdit_13);


        horizontalLayout_3->addLayout(verticalLayout_13);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_11->addWidget(label_11);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_11->addWidget(lineEdit_11);


        horizontalLayout_3->addLayout(verticalLayout_11);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_14->setFont(font1);

        verticalLayout_14->addWidget(label_14);

        lineEdit_14 = new QLineEdit(layoutWidget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_14->addWidget(lineEdit_14);


        horizontalLayout_3->addLayout(verticalLayout_14);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_12->addWidget(label_12);

        lineEdit_12 = new QLineEdit(layoutWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_12->addWidget(lineEdit_12);


        horizontalLayout_3->addLayout(verticalLayout_12);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_15->addWidget(label_15);

        lineEdit_15 = new QLineEdit(layoutWidget);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;\n"
"border: 1px solid #0075af;"));

        verticalLayout_15->addWidget(lineEdit_15);


        horizontalLayout_3->addLayout(verticalLayout_15);

        buttonofrequest = new QFrame(book_managerment);
        buttonofrequest->setObjectName(QStringLiteral("buttonofrequest"));
        buttonofrequest->setGeometry(QRect(1030, 70, 100, 51));
        buttonofrequest->setStyleSheet(QLatin1String("background-color: rgba(236, 188, 255,0.5);\n"
"border-color:rgba(236, 188, 255,0.5);\n"
"border-radius:7px;"));
        horizontalLayout_4 = new QHBoxLayout(buttonofrequest);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        add_2 = new QPushButton(buttonofrequest);
        add_2->setObjectName(QStringLiteral("add_2"));
        add_2->setStyleSheet(QStringLiteral("background-image:url(:/icon/Resources/icon/add 2.png);"));
        add_2->setIcon(icon);
        add_2->setIconSize(QSize(36, 36));

        horizontalLayout_4->addWidget(add_2);

        delete_3 = new QPushButton(buttonofrequest);
        delete_3->setObjectName(QStringLiteral("delete_3"));
        delete_3->setMinimumSize(QSize(0, 0));
        delete_3->setStyleSheet(QStringLiteral(""));
        delete_3->setIcon(icon1);
        delete_3->setIconSize(QSize(36, 36));

        horizontalLayout_4->addWidget(delete_3);

        tabWidget->addTab(book_managerment, QString());
        layoutWidget1 = new QWidget(DataProcessingTechnician);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 165, 99));
        verticalLayout_16 = new QVBoxLayout(layoutWidget1);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        dataprocessor = new QPushButton(layoutWidget1);
        dataprocessor->setObjectName(QStringLiteral("dataprocessor"));
        QFont font2;
        font2.setPointSize(12);
        dataprocessor->setFont(font2);
        dataprocessor->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:55px;\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        dataprocessor->setIcon(icon2);
        dataprocessor->setIconSize(QSize(70, 70));

        verticalLayout_16->addWidget(dataprocessor);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        verticalLayout_16->addWidget(label);

        logoutpro = new QPushButton(DataProcessingTechnician);
        logoutpro->setObjectName(QStringLiteral("logoutpro"));
        logoutpro->setGeometry(QRect(1110, 30, 75, 81));
        logoutpro->setStyleSheet(QLatin1String("border:0;\n"
"background-color:rgba(255, 255, 255,0.5);\n"
"border-top-right-radius:7px;\n"
"border-bottom-right-radius:7px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutpro->setIcon(icon3);
        logoutpro->setIconSize(QSize(70, 70));
        notipro = new QPushButton(DataProcessingTechnician);
        notipro->setObjectName(QStringLiteral("notipro"));
        notipro->setGeometry(QRect(1030, 30, 81, 81));
        notipro->setStyleSheet(QLatin1String("border:0;\n"
"background-color:rgba(255, 255, 255,0.5);\n"
"border-top-left-radius:7px;\n"
"border-bottom-left-radius:7px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/school-bell.png"), QSize(), QIcon::Normal, QIcon::Off);
        notipro->setIcon(icon4);
        notipro->setIconSize(QSize(70, 70));

        retranslateUi(DataProcessingTechnician);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DataProcessingTechnician);
    } // setupUi

    void retranslateUi(QWidget *DataProcessingTechnician)
    {
        DataProcessingTechnician->setWindowTitle(QApplication::translate("DataProcessingTechnician", "DataProcessingTechnician", Q_NULLPTR));
        user_id->setText(QApplication::translate("DataProcessingTechnician", "user_id", Q_NULLPTR));
        no_of_request->setText(QApplication::translate("DataProcessingTechnician", "no_of_request", Q_NULLPTR));
        book_request->setText(QApplication::translate("DataProcessingTechnician", "book_request", Q_NULLPTR));
        author->setText(QApplication::translate("DataProcessingTechnician", "author", Q_NULLPTR));
        publisher->setText(QApplication::translate("DataProcessingTechnician", "publisher", Q_NULLPTR));
        day_of_arrival->setText(QApplication::translate("DataProcessingTechnician", "day_of_arrival", Q_NULLPTR));
        add->setText(QString());
        delete_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(request_list), QApplication::translate("DataProcessingTechnician", "Request List", Q_NULLPTR));
        isbn->setText(QApplication::translate("DataProcessingTechnician", "isbn", Q_NULLPTR));
        label_8->setText(QApplication::translate("DataProcessingTechnician", "book_name", Q_NULLPTR));
        label_9->setText(QApplication::translate("DataProcessingTechnician", "author", Q_NULLPTR));
        label_10->setText(QApplication::translate("DataProcessingTechnician", "year", Q_NULLPTR));
        label_13->setText(QApplication::translate("DataProcessingTechnician", "quantity", Q_NULLPTR));
        label_11->setText(QApplication::translate("DataProcessingTechnician", "publisher", Q_NULLPTR));
        label_14->setText(QApplication::translate("DataProcessingTechnician", "description", Q_NULLPTR));
        label_12->setText(QApplication::translate("DataProcessingTechnician", "status", Q_NULLPTR));
        label_15->setText(QApplication::translate("DataProcessingTechnician", "image", Q_NULLPTR));
        add_2->setText(QString());
        delete_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(book_managerment), QApplication::translate("DataProcessingTechnician", "Book Management ", Q_NULLPTR));
        dataprocessor->setText(QString());
        label->setText(QApplication::translate("DataProcessingTechnician", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Data Processor Name</span></p></body></html>", Q_NULLPTR));
        logoutpro->setText(QString());
        notipro->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DataProcessingTechnician: public Ui_DataProcessingTechnician {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSINGTECHNICIAN_H
