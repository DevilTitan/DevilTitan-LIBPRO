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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Librarian
{
public:
    QTabWidget *tabWidget;
    QWidget *ReaderRent;
    QTableView *borrowTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_2;
    QWidget *violation;
    QTableWidget *tableWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Librarian)
    {
        if (Librarian->objectName().isEmpty())
            Librarian->setObjectName(QStringLiteral("Librarian"));
        Librarian->resize(1122, 580);
        tabWidget = new QTabWidget(Librarian);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 120, 1081, 451));
        ReaderRent = new QWidget();
        ReaderRent->setObjectName(QStringLiteral("ReaderRent"));
        borrowTable = new QTableView(ReaderRent);
        borrowTable->setObjectName(QStringLiteral("borrowTable"));
        borrowTable->setGeometry(QRect(10, 90, 1051, 391));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(borrowTable->sizePolicy().hasHeightForWidth());
        borrowTable->setSizePolicy(sizePolicy);
        borrowTable->horizontalHeader()->setMinimumSectionSize(200);
        layoutWidget = new QWidget(ReaderRent);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 1011, 46));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_4->addWidget(lineEdit);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_10->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_11->addWidget(pushButton_2);


        horizontalLayout_2->addLayout(verticalLayout_11);

        tabWidget->addTab(ReaderRent, QString());
        violation = new QWidget();
        violation->setObjectName(QStringLiteral("violation"));
        tableWidget = new QTableWidget(violation);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 90, 1051, 391));
        tableWidget->horizontalHeader()->setDefaultSectionSize(300);
        layoutWidget1 = new QWidget(violation);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 10, 1001, 46));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_5->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_6->addWidget(lineEdit_6);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_7->addWidget(label_7);

        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_7->addWidget(lineEdit_7);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer = new QSpacerItem(72, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_8->addWidget(pushButton_6);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_9->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_9);

        tabWidget->addTab(violation, QString());

        retranslateUi(Librarian);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Librarian);
    } // setupUi

    void retranslateUi(QWidget *Librarian)
    {
        Librarian->setWindowTitle(QApplication::translate("Librarian", "Librarian", Q_NULLPTR));
        label->setText(QApplication::translate("Librarian", "M\303\243 s\341\273\221 \304\221\341\273\231c gi\341\272\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("Librarian", "M\303\243 s\341\273\221 s\303\241ch", Q_NULLPTR));
        label_4->setText(QApplication::translate("Librarian", "Ng\303\240y h\341\272\277t h\341\272\241n", Q_NULLPTR));
        label_3->setText(QApplication::translate("Librarian", "Ng\303\240y m\306\260\341\273\243n", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Librarian", "Th\303\252m", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Librarian", "T\303\254m ki\341\272\277m", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReaderRent), QApplication::translate("Librarian", "Danh s\303\241ch m\306\260\341\273\243n s\303\241ch", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Librarian", "M\303\243 s\341\273\221 ng\306\260\341\273\235i \304\221\341\273\215c", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Librarian", "Vi ph\341\272\241m", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Librarian", "Ng\303\240y vi ph\341\272\241m", Q_NULLPTR));
        label_5->setText(QApplication::translate("Librarian", "M\303\243 s\341\273\221 ng\306\260\341\273\235i \304\221\341\273\215c", Q_NULLPTR));
        label_6->setText(QApplication::translate("Librarian", "Vi ph\341\272\241m", Q_NULLPTR));
        label_7->setText(QApplication::translate("Librarian", "Ng\303\240y vi ph\341\272\241m", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Librarian", "Th\303\252m", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Librarian", "T\303\254m ki\341\272\277m", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(violation), QApplication::translate("Librarian", "Vi ph\341\272\241m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Librarian: public Ui_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
