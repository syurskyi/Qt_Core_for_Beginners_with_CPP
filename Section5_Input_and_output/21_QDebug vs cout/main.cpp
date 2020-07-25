//
// Created by syurskyi on 7/25/2020.
//

#include <QCoreApplication>

#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;

    qInfo() << "Enter your age:";
    cin >> age;
    qInfo() << "you are " << age << " years old";

    qInfo() << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical";

    qFatal("Test CRASH  !!!!!");

    return a.exec();
}
