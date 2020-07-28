//
// Created by syurskyi on 7/27/2020.
//

#include <QCoreApplication>

#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal cat;
    animal dog;
    animal bird;

    cat.speak("meow");
    dog.speak("bark");
    bird.speak("caw");

    return a.exec();
}
