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
    QString ageString= QString::number(age);
    QString hellotext= "hello" + username + ageString;
    ui->hellolabel->setText(hellotext);
    ui->setupUi(this);
    QPixmap pix ("/Users/adamrefaat/Desktop/QT-Pair-Lab-Assignment");
    int w= ui->imagelabel-> width();
    int h= ui->imagelabel-> height();
    ui->imagelabel->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
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

