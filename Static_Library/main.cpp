#include <QCoreApplication>
#include "Header/Talk.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    Talk *lptObject = new Talk("Now, I am exited");

    lptObject->vSayHello();
    lptObject->vSay();
    lptObject->vSetMessage("Bye! See you again");
    lptObject->vSay();

    return a.exec();
}
