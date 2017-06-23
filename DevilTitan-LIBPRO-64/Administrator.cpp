#include "LIBPRO.h"

#include <QPixmap>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QVariant>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <algorithm>
#include <string>
#include <QtAlgorithms>
#include <algorithm>
#include <QStandardItemModel>
#include <QTableView>
#include <QStandardItemModel>
#include <QSet>
#include <QMessageBox>

Administrator::Administrator(QWidget *parent, User* curUser = Q_NULLPTR): QWidget(parent)
{
    this->curuser = new User(*curUser);
    QString temp = curuser->getUsername();
    ui.setupUi(this);
    ui.userLabel->setText(temp);
    displayUserInfo("select * from user_info ORDER BY user_id");
    displayAccountInfo("select * from user_account ORDER BY user_id AND account_name");
    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    ui.userLabel->setAlignment(Qt::AlignCenter);

    this->setWindowTitle("Administrator");
}

void Administrator::data_collector(QString *value){
        value[0] = ui.userIdLe->text();
        value[1] = ui.firstNameLe->text();
        value[2] = ui.lastNameLe->text();
        value[3] = ui.yearLe->text();
        value[4] = ui.monthLe->text();
        value[5] = ui.dayLe->text();
        value[6] = ui.phoneNumberLe->text();
        value[7] = ui.emailLe->text();
        value[8] = ui.occupationLe->text();
        value[9] = ui.companySchoolLe->text();
        value[10] = ui.addressLe->text();
        value[11] = QString::number(ui.maleCheckBox->isChecked());
        value[12] = QString::number(ui.femaleCheckBox->isChecked());
}

void Administrator::qry_exec(QSqlQuery *&qry, QString code){
    qry = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
    qry->prepare(code);
    qry->exec();
}

void Administrator::displayUserInfo(QString code){
      QSqlQuery *qry;
      qry_exec(qry, code);

      QSqlQueryModel * modal = new QSqlQueryModel;
      ui.userView->setModel(modal);
      modal ->setQuery(*qry);
      delete qry;
      ui.userView->setColumnWidth(0,100);
      ui.userView->setColumnWidth(1,100);
      ui.userView->setColumnWidth(2,125);
      ui.userView->setColumnWidth(3,150);
      ui.userView->setColumnWidth(4,50);
      ui.userView->setColumnWidth(5,140);
      ui.userView->setColumnWidth(6,125);
      ui.userView->setColumnWidth(7,200);
      ui.userView->setColumnWidth(8,120);
      ui.userView->setColumnWidth(9,250);
      ui.userView->setColumnWidth(10,300);
      modal->setHeaderData(0, Qt::Horizontal, QObject::tr("User ID"));
      modal->setHeaderData(1, Qt::Horizontal, QObject::tr("First name"));
      modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Last name"));
      modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Gender"));
      modal->setHeaderData(4, Qt::Horizontal, QObject::tr("date of birth (mm/dd/yyyy)"));
      modal->setHeaderData(5, Qt::Horizontal, QObject:: tr("Phone number"));
      modal->setHeaderData(6, Qt::Horizontal, QObject:: tr("Email"));
      modal->setHeaderData(7, Qt::Horizontal, QObject:: tr("Occupation"));
      modal->setHeaderData(8, Qt::Horizontal, QObject:: tr("Company/School"));
      modal->setHeaderData(9, Qt::Horizontal, QObject:: tr("Address"));
}

void Administrator::displayAccountInfo(QString code){
    QSqlQuery *qry;
    qry_exec(qry, code);

    QSqlQueryModel * modal = new QSqlQueryModel;
    ui.accountView->setModel(modal);
    modal ->setQuery(*qry);
    delete qry;
    ui.accountView->setColumnWidth(1,200);
    ui.accountView->setColumnWidth(2,200);
    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("User ID"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Account name"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Password"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Banned?"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Reader"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Librarian"));
    modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Administrator"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Data Processor"));
    ui.accountView->setColumnHidden(8,true);
    ui.accountView->setColumnHidden(9,true);
    ui.accountView->setColumnHidden(10,true);
    ui.accountView->setColumnHidden(11,true);
    ui.accountView->setColumnHidden(12,true);
    ui.accountView->setColumnHidden(13,true);
    ui.accountView->setColumnHidden(14,true);
    ui.accountView->setColumnHidden(15,true);
}

Administrator::~Administrator(){
    delete curuser;
}

void Administrator::on_maleCheckBox_stateChanged(int arg1)
{
    if(ui.femaleCheckBox->isChecked() == ui.maleCheckBox->isChecked() && ui.maleCheckBox->isChecked() == 1 ){
        ui.femaleCheckBox->setChecked(!ui.femaleCheckBox->isChecked());
    }
}

void Administrator::on_femaleCheckBox_stateChanged(int arg1)
{
    if(ui.femaleCheckBox->isChecked() == ui.maleCheckBox->isChecked() && ui.femaleCheckBox->isChecked() == 1){
        ui.maleCheckBox->setChecked(!ui.maleCheckBox->isChecked());
    }
}

void Administrator::on_deleteButton_clicked()
{
    //Lấy thông tin từ các line edit và check box và lưu lại dưới dạng QString trong mảng value
    QString value[13];
    data_collector(value);
    /*************************/
    QSqlQuery *qry;
    QString code = "SELECT * FROM user_info WHERE user_id= " + value[0];
    qry_exec(qry,code);
    if (qry->size() == 1){
        QMessageBox messageBox;
        QString message = "Do you want to delete user " + value[0] + " from the list?";
        messageBox.setText(message);
        messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int res = messageBox.exec();
        if (res == QMessageBox::Ok){
            code = "DELETE FROM user_info WHERE user_id = " + value[0];
            qry_exec(qry,code);
            displayUserInfo("select * from user_info ORDER BY user_id");
        }
    }
    else if (qry->size() == 0 || value[0] == ""){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Cannot find the specified user!");
        messageBox.setFixedSize(500,200);
    }
    delete qry;
}

void Administrator::errorInsert(int state){
    QMessageBox messageBox;
    if (state == 0)
        messageBox.critical(0,"Data insufficient","Please fill up all the neccessary information!");
    else if(state == 1)
        messageBox.critical(0,"Error","Please specify new user's gender!");
    else if(state == 2)
        messageBox.critical(0,"Error inserting user/account information","Please recheck all of your given information for the new user!");
    else if(state == 3)
        messageBox.critical(0,"Duplicate user ID","Please give a different ID for the new user!");
    else if(state == 4)
        messageBox.critical(0,"Duplicate user account name","Please give a different account name for the new user!");
    else if(state == 5)
        messageBox.critical(0,"Error creating new account","The specified user does not seem to exist!");
    else if(state == 6)
        messageBox.critical(0,"Error creating new account","Please specify at least one role for the new account!");
    messageBox.setFixedSize(500,200);
}

bool Administrator::on_insertButton_clicked()
{
    //Lấy thông tin từ các line edit và check box và lưu lại dưới dạng QString trong mảng value
    QString value[13];
    data_collector(value);
    /******************************/
    //Kiểm tra các thông tin từ người dủng có đầy đủ hay không
    for(int i = 0; i < 13; i++){
        if (value[i] == ""){
            errorInsert(0); //Hàm tạo thông báo lỗi
            return 0;
        }
    }
    if(value[11] == value[12]){
        errorInsert(1);
        return 0;
    }
    bool gender;
    if (value[11] == "1")
        gender = 1;
    else if (value[12] == "1")
        gender = 0;
    /****************************/
    QSqlQuery *qry;
    qry_exec(qry, "SELECT * FROM user_info");
    int pre = qry->size(); //Số lượng của thông tin trong bản trước khi thực hiện lệnh
    //Kiểm tra xem ID đã tồn tại trong bảng chưa
    qry_exec(qry, "SELECT * FROM user_info where user_id =" + value[0]);
    if (qry->size() > 0){
        errorInsert(3);
        return 0;
    }
    /***************************************/
    //Thực hiện lệnh thêm thông tin người dùng vào bảng
    QString code = "INSERT INTO user_info (`user_id`, `first_name`, `last_name`,"
            "`Gender`, `doB`, `phone_number`, `email`, `occupation`, `company_school`, `Address`) VALUES (" + value[0] + ",'" + value[1] + "','" + value[2]
            +"'," + QString::number(gender) + ",'" + value[3] + "-" + value[4] + "-" + value[5]+ "','" +
            value[6] + "','" + value[7] + "','" + value[8] + "','" + value[9] + "','"
            + value[10] + "')";
    qry_exec(qry, code);
    /**************************************/
    //KT do chinh xac cua thông tin người dùng đưa vào
    qry_exec(qry, "SELECT * FROM user_info");
    int aft = qry->size(); //Số lượng thông tin sau khi người dùng đưa vảo
    if (pre == aft){
        errorInsert(2);
        return 0;
    }
    /*************************************/
    displayUserInfo("select * from user_info ORDER BY user_id");
    delete qry;
}

bool Administrator::on_searchButton_clicked()
{
    QString value[13];
    data_collector(value);
    QString code[11];
    QString col[10];
    col[0] = "user_id";
    col[1] = "first_name";
    col[2] = "last_name";
    col[3] = "Gender";
    col[4] = "doB";
    col[5] = "phone_number";
    col[6] = "email";
    col[7] = "occupation";
    col[8] = "company_school";
    col[9] = "Address";
    bool init = 0;
    for(int i = 0; i < 10; i++){
        if (i == 0){
            if (value[i] != ""){
                if (init == 0){
                    code[i] = col[i] + " = " + value[i];
                    init = 1;
                }
                else
                    code[i] = " AND " + col[i] + " = " + value[i];
            }
        }

        if (i == 1 || i == 2){
            if (value[i] != ""){
                if (init == 0){
                    code[i] = col[i] + " = '" + value[i] + "'";
                    init = 1;
                }
                else
                    code[i] = " AND " + col[i] + " = '" + value[i] + "'";
            }
        }

        if (i == 3){
            if (value[11] != value[12]){
                if (init == 0){
                    if (value[11] == "1")
                        code[i] = col[i] + " = 1";
                    else
                        code[i] = col[i] + " = 0";
                    init = 1;
                }
                else{
                    if (value[11] == "1")
                        code[i] = " AND " + col[i] + " = 1";
                    else
                        code[i] = " AND " + col[i] + " = 0";
                }
            }
        }

        if (i == 4){
            if (value[3] != "" && value[4] != "" && value[5] != ""){
                QString date = value[3] + "-" + value[4] + "-" + value[5];
                if (init == 0){
                    code[i] = col[i] + " = '" + date + "'";
                    init = 1;
                }
                else
                    code[i] = " AND " + col[i] + " = '" + date + "'";
            }
            else if(!(value[3] == "" || value[4] == "" || value[5] == "")){
                QMessageBox messageBox;
                messageBox.critical(0,"Error searching with the given date","Please fill up date based on the given format!");
                return 0;
            }
        }

        if (i >= 5){
            if (value[i + 1] != ""){
                if (init == 0){
                    code[i] = col[i] +  " = '" + value[i + 1] + "'";
                    init = 1;
                }
                else
                    code[i] = " AND " + col[i] + " = '" + value[i + 1] + "'";
            }
        }
    }
    QSqlQuery *qry;
    QString fullcode = "SELECT * FROM user_info ";
    int blank = 0; //Bien xac dinh cho truong hop lay het
    for(int i = 0 ; i < 11; i++){
        if (code[i] == "")
            ++blank;
    }
    if (blank != 11)
        fullcode += "WHERE ";
    for(int i = 0 ; i < 11; i++)
        fullcode += code[i];
    fullcode += " ORDER BY user_id";
    qDebug() << fullcode;

    qry_exec(qry, fullcode);
    if (qry->size() == 0){
        QMessageBox messageBox;
        messageBox.warning(0,"Warning","No result matches the given information!");
        delete qry;
        return 0;
    }
    displayUserInfo(fullcode);
    delete qry;
    return 0;
}

bool Administrator::on_updateButton_clicked()
{
    QString value[13];
    data_collector(value);

    QSqlQuery *qry;
    if (value[0] == ""){
        QMessageBox messageBox;
        messageBox.warning(0,"Warning","No user to update!");
        return 0;
    }
    QString code[11];
    QString col[10];
    col[0] = "user_id";
    col[1] = "first_name";
    col[2] = "last_name";
    col[3] = "Gender";
    col[4] = "doB";
    col[5] = "phone_number";
    col[6] = "email";
    col[7] = "occupation";
    col[8] = "company_school";
    col[9] = "Address";
    //KT ID
    if(value[0] == ""){
        QMessageBox mess;
        mess.critical(0,"Error updating user's data","Please specify the user you want to update!");

    }
    bool init = 0;
    for(int i = 9; i >= 0; i--){

        if (i == 1 || i == 2){
            if (value[i] != ""){
                if (init == 0){
                    code[i] = col[i] + " = '" + value[i] + "'";
                    init = 1;
                }
                else
                    code[i] = col[i] + " = '" + value[i] + "', ";
            }
        }

        if (i == 3){
            if (value[11] != value[12]){
                if (init == 0){
                    if (value[11] == "1")
                        code[i] = col[i] + " = 1";
                    else
                        code[i] = col[i] + " = 0";
                    init = 1;
                }
                else{
                    if (value[11] == "1")
                        code[i] = col[i] + " = 1, ";
                    else
                        code[i] = col[i] + " = 0, ";
                }
            }
        }

        if (i == 4){
            if (value[3] != "" && value[4] != "" && value[5] != ""){
                QString date = value[3] + "-" + value[4] + "-" + value[5];
                if (init == 0){
                    code[i] = col[i] + " = '" + date + "'";
                    init = 1;
                }
                else
                    code[i] = col[i] + " = '" + date + "', ";
            }
            else if(!(value[3] == "" || value[4] == "" || value[5] == "")){
                QMessageBox messageBox;
                messageBox.critical(0,"Error updating with the given date","Please fill up date based on the given format!");
                return 0;
            }
        }

        if (i >= 5){
            if (value[i + 1] != ""){
                if (init == 0){
                    code[i] = col[i] +  " = '" + value[i + 1] + "'";
                    init = 1;
                }
                else
                    code[i] = col[i] + " = '" + value[i + 1] + "', ";
            }
        }
    }
    QString fullcode = "UPDATE user_info SET ";
    for (int i = 0; i < 11; i++)
        fullcode += code[i];
    code[0] = " WHERE user_id = " + value[0];
    fullcode += code[0];
    qDebug() << fullcode;
    int blank = 0; //Bien xac dinh cho truong hop khong co info
    for(int i = 0 ; i < 11; i++){
        if (code[i] == "")
            ++blank;
    }
    if (blank == 11){
        QMessageBox messageBox;
        messageBox.warning(0,"Warning","No information to update!");
        return 0;
    }
    if (!(ui.notiUpdate->isChecked())){
        QMessageBox messageBox;
        QString message = "Changes is about to be made. Do you want to update the data of user " + value[0] + " to the list?";
        messageBox.setText(message);
        messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::No);
        int res = messageBox.exec();
        if (res == QMessageBox::Ok){
            qry_exec(qry,fullcode);
            displayUserInfo("select * from user_info ORDER BY user_id");
            return 0;
        }
    }
    else{
        qry_exec(qry,fullcode);
        displayUserInfo("select * from user_info ORDER BY user_id");
        return 0;
    }
    return 0;
}

void Administrator::account_collector(QString *value){
    value[0] = ui.userIdLe_2->text();
    value[1] = ui.accountNameLe->text();
    value[2] = ui.passwordLe->text();
    value[3] = QString::number(ui.banCheckBox->isChecked());
    value[4] = QString::number(ui.readerCheckBox->isChecked());
    value[5] = QString::number(ui.librarianCheckBox->isChecked());
    value[6] = QString::number(ui.dataProcessorCheckBox->isChecked());
    value[7] = QString::number(ui.administratorCheckBox->isChecked());
}

bool Administrator::on_insertButton_2_clicked()
{
    QString value[8];
    account_collector(value);
    //KT tinh day du
    for(int i = 0; i < 8; i++){
        if (value[i] == ""){
            errorInsert(0);
            return 0;
        }
    }
    //KT tinh ton tai cua 1 role
    if (value[4] == "0" && value[5] == "0" && value[6] == "0" && value[7] == "0"){
        errorInsert(6);
        return 0;
    }
    /*************/
    QSqlQuery *qry;
    //KT tinh ton tai cua user_id
    qry_exec(qry,"SELECT * FROM user_info where user_id = " + value[0]);
    if (qry->size() == 0){
        errorInsert(5);
        return 0;
    }
    qry_exec(qry, "SELECT * FROM user_account");
    int pre = qry->size();
    //KT Id
    qry_exec(qry, "SELECT * FROM user_account where account_name = '" + value[1] + "'");
    if (qry->size() > 0){
        errorInsert(4);
        return 0;
    }
    QString code = "INSERT INTO `user_account`(`user_id`, `account_name`, `password`, `is_banned`, `reader`, `librarian`, `dataProcessing`, `administrator`) VALUES ( "
            + value[0] + ",'" + value[1] + "', '" + value[2] + "', " + value[3] + "," + value[4] + "," + value[5] + "," + value[6] + "," + value[7] + ")";
    qDebug() << code;
    qry_exec(qry, code);
    //KT do chinh xac cua info
    qry_exec(qry, "SELECT * FROM user_info");
    int aft = qry->size();
    if (pre == aft){
        errorInsert(2);
        return 0;
    }
    displayAccountInfo("select * from user_account ORDER BY user_id AND account_name");
    delete qry;
}

bool Administrator::on_searchButton_2_clicked()
{
    QString value[8];
    account_collector(value);
    QString code[8];
    QString col[8];
    col[0] = "user_id";
    col[1] = "account_name";
    col[2] = "password";
    col[3] = "is_banned";
    col[4] = "reader";
    col[5] = "librarian";
    col[6] = "dataProcessing";
    col[7] = "administrator";
    QString accol;
    bool init = 0;
    for(int i = 0; i < 8; i++){
        if (i == 1 || i == 2){
            if (value[i] != ""){
                if (init == 0){
                    code[i] = col[i] + " = '" + value[i] + "'";
                    init = 1;
                }
                else
                    code[i] = " AND " + col[i] + " = '" + value[i] + "'";
            }
        }
        else{
            if (value[i] != "0" && value[i] != ""){
                if(init == 0){
                    code[i] = col[i] + " = " + value[i];
                    init = 1;
                }
                else
                    code[i] = " AND " + col[i] + " = " + value[i];
            }
        }
    }
    QSqlQuery *qry;
    QString fullcode = "SELECT * FROM user_account ";
    int blank = 0; //Bien xac dinh cho truong hop lay het
    for(int i = 0 ; i < 8; i++){
        if (code[i] == "")
            ++blank;
    }
    if (blank != 8)
        fullcode += "WHERE ";
    for(int i = 0 ; i < 8; i++){
        fullcode += code[i];
        if (i == 2)
            fullcode += accol;
    }
    fullcode += " ORDER BY user_id";

    qry_exec(qry, fullcode);
    if (qry->size() == 0){
        QMessageBox messageBox;
        messageBox.warning(0,"Warning","No result matches the given information!");
        delete qry;
        return 0;
    }
    displayAccountInfo(fullcode);
    delete qry;
    return 0;
}

void Administrator::on_deleteButton_2_clicked()
{
    QString value[8];
    account_collector(value);
    QSqlQuery *qry;
    QString code = "SELECT * FROM user_account WHERE account_name = '" + value[1] + "'";
    qry_exec(qry,code);
    if (qry->size() == 1){
        QMessageBox messageBox;
        QString message = "Do you want to delete account " + value[1] + " from the list?";
        messageBox.setText(message);
        messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int res = messageBox.exec();
        if (res == QMessageBox::Ok){
            code = "DELETE FROM user_account WHERE account_name = '" + value[1] + "'";
            qDebug() << code;
            qry_exec(qry,code);
            displayAccountInfo("select * from user_account ORDER BY user_id AND account_name");
        }
    }
    else if (qry->size() == 0){
        QMessageBox messageBox;
        messageBox.critical(0,"Error","Cannot find the specified user/account!");
        messageBox.setFixedSize(500,200);
    }
    delete qry;
}

bool Administrator::on_updateButton_2_clicked()
{
    QString value[8];
    account_collector(value);

    QSqlQuery *qry;
    qry_exec(qry,"SELECT * FROM user_account WHERE account_name = '" + value[1] + "'");
    if (qry->size() == 0){
        QMessageBox messageBox;
        messageBox.warning(0,"Warning","No account to update!");
        return 0;
    }
    QString code[8];
    QString col[8];
    col[0] = "user_id";
    col[1] = "account_name";
    col[2] = "password";
    col[3] = "is_banned";
    col[4] = "reader";
    col[5] = "librarian";
    col[6] = "dataProcessing";
    col[7] = "administrator";
    bool init = 0;
    for(int i = 0; i < 8; i++){
        if (i == 1 || i == 2){
            if (value[i] != ""){
                if (init == 0){
                    code[i] = col[i] + " = '" + value[i] + "'";
                    init = 1;
                }
                else
                    code[i] = ", " + col[i] + " = '" + value[i] + "'";
            }
        }
        else{
            if (value[i] == "1"){
                if(init == 0){
                    code[i] = col[i] + " = " + value[i];
                    init = 1;
                }
                else
                    code[i] = ", " + col[i] + " = " + value[i];
            }
        }
    }
    QString fullcode = "UPDATE user_account SET ";
    for (int i = 0; i < 8; i++)
        fullcode += code[i];
    fullcode += " WHERE account_name = '" + value[1] + "'";
    qDebug() << fullcode;
    int blank = 0; //Bien xac dinh cho truong hop khong co info
    for(int i = 0 ; i < 8; i++){
        if (code[i] == "")
            ++blank;
    }
    if (blank == 8){
        QMessageBox messageBox;
        messageBox.warning(0,"Warning","No information to update!");
        return 0;
    }
    if (!(ui.notiUpdate_2->isChecked())){
        QMessageBox messageBox;
        QString message = "Changes is about to be made. Do you want to update the data of account " + value[1] + " to the list?";
        messageBox.setText(message);
        messageBox.setStandardButtons(QMessageBox::Ok | QMessageBox::No);
        int res = messageBox.exec();
        if (res == QMessageBox::Ok){
            qry_exec(qry,fullcode);
            displayAccountInfo("select * from user_account ORDER BY user_id AND account_name");
            return 0;
        }
    }
    else{
        qry_exec(qry,fullcode);
        displayAccountInfo("select * from user_account ORDER BY user_id AND account_name");
        return 0;
    }
    return 0;
}

void Administrator::on_logOutButton_clicked()
{
    QMessageBox messBox;
    messBox.setWindowTitle("Exit");
    messBox.setText("Are you sure you want to sign out and go back to the login screen?");
    messBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    int res = messBox.exec();
    if (res == QMessageBox::Yes){
        LoginForm *x = new LoginForm;
        x->setAttribute(Qt::WA_DeleteOnClose);
        this->close();
        x->exec();
    }
}

void Administrator::on_roleButton_clicked(){
    SwitchRole *w = new SwitchRole (this,this->curuser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setModal(true);
    w->exec();
}

void Administrator::on_messageButton_clicked(){
    sendNotification *w = new sendNotification;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setModal(true);
    w->exec();
}


void Administrator::on_theme_clicked()
{
    ChangeTheme *w = new ChangeTheme(this,curuser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setModal(true);
    w->exec();
}

void Administrator::on_LIBPROButton_clicked(){
    aboutUs *w = new aboutUs;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setModal(true);
    w->exec();
}
