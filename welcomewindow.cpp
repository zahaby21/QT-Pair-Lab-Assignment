#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "registerwindow.h"
#include "ui_registerwindow.h"

WelcomeWindow::WelcomeWindow(const QString &username, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
    , username(username)
    , age(age)
{

    ui->setupUi(this);
    QString ageString= QString::number(age);
    QString hellotext= "Hello " + username + " " + ageString;
    ui->hellolabel->setText(hellotext);
    QPixmap pix (":/Image/71T3b5xc2vL._AC_UF894,1000_QL80_.jpg");
    ui->imagelabel->setPixmap(pix.scaled(351,221));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_logoutButton_clicked()
{
    hide();
    LoginWindow* loginwindow= new LoginWindow(this);
    loginwindow->show();
}

