#include "ExampleClass.h"
#include "QThread"
ExampleClass::ExampleClass()
{

    qDebug("Start");
    connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));
    qDebug("End");
}
void ExampleClass::startToWait(){
    QThread::msleep(1000);
    emit readyToSay();
}
void ExampleClass::sayHelloSlot(){
    qDebug("Terve");
}
