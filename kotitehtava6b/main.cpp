#include <QCoreApplication>
#include "ExampleClass.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass c;
    c.startToWait();
    return a.exec();
}
