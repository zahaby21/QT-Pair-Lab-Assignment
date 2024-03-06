#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "registerwindow.h"
#include "ui_registerwindow.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);


    ~LoginWindow();

private slots:
    void on_LoginpushButton_clicked();

    void on_RegisterpushButton_clicked();

private:
    int age;
    QString username;
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
