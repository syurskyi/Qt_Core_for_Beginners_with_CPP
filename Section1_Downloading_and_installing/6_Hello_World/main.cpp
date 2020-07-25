//
// Created by syurskyi on 7/25/2020.
//

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hello Mr Yurskyi!!!";

    return a.exec();
}
