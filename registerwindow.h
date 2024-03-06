#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H
#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "registerwindow.h"
#include "ui_registerwindow.h"

#include <QDialog>

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();

private slots:
    void on_RegisterpushButton2_clicked();

private:
    Ui::RegisterWindow *ui;
    QString getUsername;
    QString getPassword;
    QString getRepass;
    QString getMonth;
    QString getDay;
    QString getYear;
    bool isMaleChecked;
    bool isFemaleChecked;
    bool isUserChecked;
    bool isAdminChecked;
    bool isActionChecked;
    bool isDramaChecked;
    bool isComedyChecked;
    bool isHorrorChecked;
    bool isRomanceChecked;
    bool isOtherChecked;


};

#endif // REGISTERWINDOW_H
