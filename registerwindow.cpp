#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "registerwindow.h"
#include "ui_registerwindow.h"


RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->errorUsername->setVisible(false);
    ui->errorRepass->setVisible(false);
    ui->errorAge->setVisible(false);
    ui->errorFields->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_RegisterpushButton2_clicked()
{
    QString getUsername= ui->usernameEdit2->text();
    QString getPassword= ui->passwordEdit2->text();
    QString getRepass= ui->repassEdit->text();
    QString getYear= ui->YearlineEdit->text();
    int y= getYear.toInt();
    bool isMaleChecked= ui-> MaleradioButton->isChecked();
    bool isFemaleChecked= ui-> FemaleradioButton->isChecked();
    bool isUserChecked= ui-> UserradioButton->isChecked();
    bool isAdminChecked= ui-> AdminradioButton->isChecked();
    bool isActionChecked= ui->ActioncheckBox->isChecked();
    bool isDramaChecked= ui->DramacheckBox->isChecked();
    bool isComedyChecked= ui->ComedycheckBox->isChecked();
    bool isHorrorChecked= ui->HorrorcheckBox->isChecked();
    bool isRomanceChecked= ui->RomancecheckBox->isChecked();
    bool isOtherChecked= ui->OthercheckBox->isChecked();


    for(int i = 0; i < usersCount; i++){

        if(ui->usernameEdit2->text() == usernames[i])
        {
            ui->errorUsername->setVisible(true);
            break;
        }
        else {
            ui->errorUsername->setVisible(false);
        }
    }



    if(getPassword!= getRepass)
    {
        ui->errorRepass-> setVisible(true);
    }
    else {
        ui->errorRepass-> setVisible(false);
    }

    if(2024- y <12)
    {
        ui->errorAge-> setVisible(true);
    }
    else {
        ui->errorAge-> setVisible(false);
    }

    if (isMaleChecked==false && isFemaleChecked== false)
    {
        ui->errorFields-> setVisible(true);
    }
    else {
        ui->errorFields-> setVisible(false);
    }

    if (isUserChecked== false && isAdminChecked== false)
    {
        ui->errorFields-> setVisible(true);
    }
    else {
        ui->errorFields-> setVisible(false);
    }

    if (isActionChecked== false && isDramaChecked== false && isComedyChecked== false && isHorrorChecked== false && isRomanceChecked== false && isOtherChecked== false)
    {
        ui->errorFields-> setVisible(true);
    }
    else {
        ui->errorFields-> setVisible(false);
    }

    int a = 2024-y;

    if(!(ui->errorUsername-> isVisible() && ui->errorRepass-> isVisible() && ui->errorAge-> isVisible() && ui->errorFields-> isVisible())){


        usernames[usersCount] = ui->usernameEdit2->text();
        passwords[usersCount] = ui->passwordEdit2->text();
        ages[usersCount]=a;
        usersCount++;
        hide();
        WelcomeWindow* ww = new WelcomeWindow(getUsername, a, this);
        ww->show();
    }
}


