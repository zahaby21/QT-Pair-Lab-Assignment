#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H
#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "registerwindow.h"
#include "ui_registerwindow.h"

#include <QDialog>

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWindow(const QString &username, int age, QWidget *parent = nullptr);
    ~WelcomeWindow();

private slots:
    void on_logoutButton_clicked();

private:
    Ui::WelcomeWindow *ui;
    QString username;
    int age;

};

#endif // WELCOMEWINDOW_H
