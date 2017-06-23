#pragma once

#include <QWidget>
#include "ui_DataProcessingTechnician.h"
#include "user.h"
#include "global.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include "QSqlError"
#include <QSqlQueryModel>
#include "switchrole.h"
#include "loginform.h"
#include "changepassword.h"
#include "changetheme.h"
#include "notification.h"
#include <QTime>
#include <QDateTime>

class DataProcessingTechnician : public QWidget
{
	Q_OBJECT

public:
    DataProcessingTechnician(QWidget *parent = Q_NULLPTR,User * curUser = NULL);
	~DataProcessingTechnician();
    void displaybook();
    void clear();
    void displayNotify();
    void updateTime();

private slots:
    void on_waitTable_clicked(const QModelIndex &index);

    void on_bookTable_clicked(const QModelIndex &index);

    void on_isbnsearch_textChanged(const QString &arg1);

    void on_booknamesearch_textChanged(const QString &arg1);

    void on_requestTable_clicked(const QModelIndex &index);

    void on_insertButton_2_clicked();

    void on_isbn_editingFinished();

    void on_searchButton_clicked();

    void on_insertButton_clicked();

    void on_searchButton_3_clicked();

    void on_book_name_textChanged(const QString &arg1);

    void on_username_textChanged(const QString &arg1);

    void on_logout_clicked();

    void on_publicChat_3_clicked();

    void on_theme_clicked();

    void on_publicChat_6_clicked();

    void on_publicChat_2_clicked();

private:
	Ui::DataProcessingTechnician ui;
    QString curISBN;
    int curidx;
    User* curUser;
    QTimer *count;
    QTime now;
    QDateTime date;

};
