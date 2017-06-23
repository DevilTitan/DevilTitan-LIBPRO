#include "aboutUs.h"
#include "ui_aboutUs.h"

aboutUs::aboutUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutUs)
{
    ui->setupUi(this);
}

aboutUs::~aboutUs()
{
    delete ui;
}

void aboutUs::on_KhoaButton_clicked(){
    QString link = "https://www.facebook.com/profile.php?id=100003656356380";
    QDesktopServices::openUrl(QUrl(link));
}

void aboutUs::on_HDuongButton_clicked()
{
    QString link = "https://www.facebook.com/iGremliN";
    QDesktopServices::openUrl(QUrl(link));
}

void aboutUs::on_NghiaButton_clicked()
{
    QString link = "https://www.facebook.com/profile.php?id=100007446979279&ref=br_rs";
    QDesktopServices::openUrl(QUrl(link));
}

void aboutUs::on_CDuongButton_clicked()
{
    QString link = "https://www.facebook.com/profile.php?id=100004881823714&ref=br_rs";
    QDesktopServices::openUrl(QUrl(link));
}
