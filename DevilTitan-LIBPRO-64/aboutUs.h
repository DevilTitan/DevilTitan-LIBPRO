#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QDialog>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class aboutUs;
}

class aboutUs : public QDialog
{
    Q_OBJECT

public:
    explicit aboutUs(QWidget *parent = 0);
    ~aboutUs();

private slots:
    void on_KhoaButton_clicked();

    void on_HDuongButton_clicked();

    void on_NghiaButton_clicked();

    void on_CDuongButton_clicked();

private:
    Ui::aboutUs *ui;
};

#endif // ABOUTUS_H
