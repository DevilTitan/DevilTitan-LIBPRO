/********************************************************************************
** Form generated from reading UI file 'LIBPRO.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBPRO_H
#define UI_LIBPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPRO
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *reader;
    QPushButton *librarian;
    QLabel *readerLabel;
    QLabel *librarianLabel;
    QPushButton *data;
    QLabel *databaseLabel;
    QPushButton *admin;
    QLabel *administratorLabel;
    QLabel *roleLabel;
    QPushButton *loginButton;
    QLabel *errorlbl;

    void setupUi(QMainWindow *LIBPRO)
    {
        if (LIBPRO->objectName().isEmpty())
            LIBPRO->setObjectName(QStringLiteral("LIBPRO"));
        LIBPRO->setEnabled(true);
        LIBPRO->resize(672, 454);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LIBPRO->sizePolicy().hasHeightForWidth());
        LIBPRO->setSizePolicy(sizePolicy);
        LIBPRO->setMinimumSize(QSize(300, 0));
        LIBPRO->setMaximumSize(QSize(800, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/LP icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPRO->setWindowIcon(icon);
        LIBPRO->setLayoutDirection(Qt::LeftToRight);
        LIBPRO->setAutoFillBackground(false);
        LIBPRO->setStyleSheet(QLatin1String("#centralWidget{\n"
"box-shadow: 10px 10px 5px #888888;\n"
"border-image: url(:/appscreen/Resources/appscreen/background.png);\n"
"\n"
"}\n"
"#userForm\n"
"{\n"
"color: rgba(74, 252, 255,80);\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color: white;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-radius: 3px;\n"
"}\n"
"QLabel{\n"
"font: 10pt \"Calibri\";\n"
"}\n"
"\n"
""));
        LIBPRO->setIconSize(QSize(24, 24));
        centralWidget = new QWidget(LIBPRO);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 30, 611, 381));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"background-color: rgba(73, 189, 221,0.3);\n"
"border-radius: 5px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        reader = new QPushButton(frame);
        reader->setObjectName(QStringLiteral("reader"));
        reader->setEnabled(true);
        reader->setGeometry(QRect(30, 120, 111, 101));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reader->sizePolicy().hasHeightForWidth());
        reader->setSizePolicy(sizePolicy1);
        reader->setMouseTracking(false);
        reader->setStyleSheet(QLatin1String("#readerAccess{\n"
"border-image: url(:/icon/Resources/icon/reader.png);\n"
"}\n"
"#readerAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#readerAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/reader.png"), QSize(), QIcon::Normal, QIcon::Off);
        reader->setIcon(icon1);
        reader->setIconSize(QSize(100, 100));
        reader->setCheckable(true);
        reader->setAutoDefault(false);
        reader->setFlat(false);
        librarian = new QPushButton(frame);
        librarian->setObjectName(QStringLiteral("librarian"));
        librarian->setEnabled(true);
        librarian->setGeometry(QRect(170, 120, 101, 101));
        librarian->setStyleSheet(QLatin1String("#librarianAccess{\n"
"	border-image: url(:/icon/Resources/icon/librarian.png);\n"
"}\n"
"#librarianAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#librarianAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/librarian.png"), QSize(), QIcon::Normal, QIcon::Off);
        librarian->setIcon(icon2);
        librarian->setIconSize(QSize(100, 100));
        readerLabel = new QLabel(frame);
        readerLabel->setObjectName(QStringLiteral("readerLabel"));
        readerLabel->setGeometry(QRect(60, 230, 71, 31));
        readerLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        librarianLabel = new QLabel(frame);
        librarianLabel->setObjectName(QStringLiteral("librarianLabel"));
        librarianLabel->setGeometry(QRect(190, 230, 81, 31));
        librarianLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        data = new QPushButton(frame);
        data->setObjectName(QStringLiteral("data"));
        data->setEnabled(true);
        data->setGeometry(QRect(300, 120, 111, 101));
        sizePolicy1.setHeightForWidth(data->sizePolicy().hasHeightForWidth());
        data->setSizePolicy(sizePolicy1);
        data->setStyleSheet(QLatin1String("#dataProcessorAccess{\n"
"	border-image: url(:/icon/Resources/icon/dataProcessor.png);\n"
"}\n"
"#dataProcessorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#dataProcessorAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/dataProcessor.png"), QSize(), QIcon::Normal, QIcon::Off);
        data->setIcon(icon3);
        data->setIconSize(QSize(100, 100));
        databaseLabel = new QLabel(frame);
        databaseLabel->setObjectName(QStringLiteral("databaseLabel"));
        databaseLabel->setGeometry(QRect(300, 230, 131, 31));
        databaseLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        admin = new QPushButton(frame);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setEnabled(true);
        admin->setGeometry(QRect(440, 120, 111, 101));
        sizePolicy1.setHeightForWidth(admin->sizePolicy().hasHeightForWidth());
        admin->setSizePolicy(sizePolicy1);
        admin->setStyleSheet(QLatin1String("#administratorAccess{\n"
"	border-image: url(:/icon/Resources/icon/administrator.png);\n"
"}\n"
"#administratorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#administratorAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/administrator.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin->setIcon(icon4);
        admin->setIconSize(QSize(100, 100));
        administratorLabel = new QLabel(frame);
        administratorLabel->setObjectName(QStringLiteral("administratorLabel"));
        administratorLabel->setGeometry(QRect(440, 230, 121, 31));
        administratorLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        roleLabel = new QLabel(frame);
        roleLabel->setObjectName(QStringLiteral("roleLabel"));
        roleLabel->setGeometry(QRect(230, 70, 171, 41));
        roleLabel->setStyleSheet(QLatin1String("#roleLabel{\n"
"font: 10pt\"Segoe UI\";\n"
"font-weight:600;\n"
"}"));
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(220, 320, 171, 41));
        loginButton->setStyleSheet(QLatin1String("#loginButton {\n"
"	\n"
"color: white;\n"
"\n"
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
"min-width: 80px;background-color: rgba(255,255,255, 1);\n"
"\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"font-weight:600;\n"
"border-radius:4px;\n"
"\n"
"font-size:16px;\n"
"border: 2px solid rgb(77, 166, 255);\n"
"color:rgb(77,166,255);\n"
"}\n"
"\n"
"#loginButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"background-color:rgba(77, 166, 255,0.6);\n"
"border:0px;\n"
"color:white;\n"
"}\n"
""
                        "\n"
"#loginButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        errorlbl = new QLabel(frame);
        errorlbl->setObjectName(QStringLiteral("errorlbl"));
        errorlbl->setGeometry(QRect(40, 20, 531, 31));
        errorlbl->setStyleSheet(QLatin1String("border: 2px solid red;\n"
"background-color:rgba(255, 255, 255, 0.6);\n"
"border-radius: 3px;"));
        LIBPRO->setCentralWidget(centralWidget);

        retranslateUi(LIBPRO);

        reader->setDefault(false);


        QMetaObject::connectSlotsByName(LIBPRO);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPRO)
    {
        LIBPRO->setWindowTitle(QApplication::translate("LIBPRO", "LIBPRO", Q_NULLPTR));
        reader->setText(QString());
        librarian->setText(QString());
        readerLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Reader</span></p></body></html>", Q_NULLPTR));
        librarianLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Librarian</span></p></body></html>", Q_NULLPTR));
        data->setText(QString());
        databaseLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Data Processor</span></p></body></html>", Q_NULLPTR));
        admin->setText(QString());
        administratorLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Administrator</span></p></body></html>", Q_NULLPTR));
        roleLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Choose your role:</span></p></body></html>", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LIBPRO", "CHOOSE", Q_NULLPTR));
        errorlbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LIBPRO: public Ui_LIBPRO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
