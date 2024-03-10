#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "registerwindow.h"
#include "ui_registerwindow.h"

LoginWindow::LoginWindow( QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)

{
    ui->setupUi(this);
    ui->errorlabel->setVisible(false);
}


LoginWindow::~LoginWindow()
{
    delete ui;
}



void LoginWindow::on_LoginpushButton_clicked()
{
    for(int i=0; i<usersCount; i++){
        if( ui->usernamelineEdit->text() == usernames[i] && ui->passwordlineEdit->text() == passwords[i]){

            int age= ages[i];
            QString username = usernames[i];

        hide();
        WelcomeWindow* welcomewindow = new WelcomeWindow(username, age, this);
        welcomewindow->show();
        }
    else{
        ui->errorlabel->setVisible(true);
    }


}
}


void LoginWindow::on_RegisterpushButton_clicked()
{
    hide();
    RegisterWindow* registerwindow= new RegisterWindow(this);
    registerwindow->show();
}

