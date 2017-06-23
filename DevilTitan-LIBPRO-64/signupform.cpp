#include "LIBPRO.h"
#include "ui_signupform.h"
#include <QGraphicsEffect>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlDatabase>
signupForm::signupForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signupForm)
{
    ui->setupUi(this);

    QPixmap bkgnd(":/appscreen/Resources/appscreen/2a.jpg");
//    bkgnd = bkgnd.scaled();
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setColor(QColor("rgb(37, 103, 55)"));
    effect->setOffset(1, 1);
    ui->login->setGraphicsEffect(effect);

    ui->warning->hide();
    ui->label_12->hide();
    ui->label_4->hide();
    ui->warning->setAlignment(Qt::AlignHCenter);

    this->setWindowTitle("Sign Up");
}

signupForm::~signupForm()
{
    delete ui;
}

void signupForm::on_accountName_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->accountName->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);;border-bottom: 3px solid #25D500; background-color: white; border-radius: 2px;");
    }
    else
    {
        ui->accountName->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
    }
}

void signupForm::on_accountName_editingFinished()
{
    ui->accountName->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_email_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->email->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500;background-color: white; border-radius: 2px;");
    }
    else
        ui->email->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_email_editingFinished()
{
    ui->email->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_password_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->password->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500;background-color: white; border-radius: 2px;");
    }
    else
        ui->password->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_password_editingFinished()
{
    ui->password->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_confirm_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->confirm->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500;background-color: white; border-radius: 2px;");
    }
    else
        ui->confirm->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");

}

void signupForm::on_confirm_editingFinished()
{
    ui->confirm->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_signup_clicked()
{
    bool identificationCheck = true;
    bool accountNameCheck = true;
    bool emailCheck = false;
    bool characterCheck = true;

    QSqlQuery qry (QSqlDatabase::database("libpro_user")) ;
    qry.prepare("select * from user_account where user_id = " + ui->identification->text());

    if (qry.exec())
    {
        if (!qry.value(0).isNull())
            identificationCheck = false;
    }

    for (int i = 0; i < ui->identification->text().size(); i++)
    {
        if (ui->identification->text()[i] >= 'A' && ui->identification->text()[i] <= 'z')
        {
            characterCheck = false;
            break;
        }
    }

    qry.prepare("select * from user_account where user_id = " + ui->accountName->text());
    if (qry.exec())
    {
        if (!qry.value(0).isNull())
            accountNameCheck = false;
    }

    for (int i = 0; i < ui->email->text().size(); i++)
    {
        if (ui->email->text()[i] == '@')
        {
            emailCheck = true;
            break;
        }
    }

    if (ui->identification->text() == "" || ui->accountName->text() ==  "" || ui->password->text() == ""
            || ui->confirm->text() == "" || ui->email->text()  == "")
    {
        ui->warning->setText("SOME FIELD IS MISSING!");
        ui->warning->show();
        QTimer::singleShot(5000, this, SLOT(hideLabel()));
    }
    else if (ui->identification->text().size() != 9 && ui->identification->text().size() != 12)
    {
        ui->warning->setText("INVALID IDENTIFICATION");
        ui->warning->show();
        QTimer::singleShot(5000, this, SLOT(hideLabel()));
    }
    else if (!emailCheck)
    {
        ui->warning->setText("INVALID EMAIL");
        ui->warning->show();
        QTimer::singleShot(5000, this, SLOT(hideLabel()));
    }
    else if (!identificationCheck)
    {
        ui->warning->setText("IDENTIFICATION ALREADY EXISTS!");
        ui->warning->show();
        QTimer::singleShot(5000, this, SLOT(hideLabel()));
    }
    else if (ui->identification->text().size() < 5 || ui->accountName->text().size() < 5 || ui->password->text().size() < 5
             || ui->confirm->text().size() < 5 || ui->email->text().size() < 5)
    {
        ui->warning->setText("SHORT ACCOUNT OR PASSWORD");
        ui->warning->show();
        ui->label_4->show();
        ui->label_12->show();
        QTimer::singleShot(5000, this, SLOT(hideLabel()));
    }
    else if (!accountNameCheck)
    {
        ui->warning->setText("ACCOUNT NAME ALREADY EXISTS");
        ui->warning->show();
        QTimer::singleShot(5000, this, SLOT(hideLabel()));
    }
    else if (ui->password->text() != ui->confirm->text())
    {
        ui->warning ->setText("PASSWORDS DO NOT MATCH");
        ui->warning->show();
        QTimer::singleShot(5000, this, SLOT(hideLabel()));
    }
    //if sign up successfully
    else
    {
        QSqlQuery qry1 (QSqlDatabase::database("libpro_user"));
        qry1.exec("insert into `user_account` (`user_id`, `account_name`, `password`) values "
                           "(" + ui->identification->text() + ", " + ui->accountName->text() + ", " + ui->password->text() + ")");
        qry1.exec("insert into `user_info` (`user_id`, `email`) values (" + ui->identification->text() + ", " + ui->email->text() + ")");

        QSqlQuery qry2 (QSqlDatabase::database("graph"));
        qry2.exec("CREATE TABLE IF NOT EXISTS " + ui->accountName->text() + " (date DATE PRIMARY KEY, quantity int(5) NOT NULL DEFAULT '0')");

        QDateTime now;
        QString year = now.currentDateTime().toString().right(4);
        bool isNotLeap = (year.toInt() - 2016) % 4;
        if (!isNotLeap)
        {
            for (int i = 0; i < 366; i++)
                qry2.exec("insert into " + ui->accountName->text() +
                          " (date) values (ADDDATE('" + year + "-01-01', INTERVAL " +  QString::number(i) +" DAY));");
        }
        else
        {
            for (int i = 0; i < 365; i++)
                qry2.exec("insert into " + ui->accountName->text() +
                          " (date) values (ADDDATE('" + year + "-01-01', INTERVAL " +  QString::number(i) +" DAY));");
        }

    }
}

void signupForm::on_login_clicked()
{
    LoginForm*w = new LoginForm;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

void signupForm::hideLabel()
{
    ui->warning->hide();
    ui->label_4->hide();
    ui->label_12->hide();
}

void signupForm::on_identification_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->identification->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500; background-color: white; border-radius: 2px;");
    }
    else
    {
        ui->identification->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
    }

}


void signupForm::on_identification_editingFinished()
{
    ui->identification->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}
