#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class logIn; }
QT_END_NAMESPACE

class logIn : public QMainWindow
{
    Q_OBJECT

public:
    logIn(QWidget *parent = nullptr);
    ~logIn();
    
private slots:
    void swapPage();
    void check();
    void createProfile();

private:
    Ui::logIn *ui;
};
#endif // LOGIN_H
