#include "practic.h"
#include "../exitwindow/exitwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    practic w;
    w.show();
    return a.exec();
}
