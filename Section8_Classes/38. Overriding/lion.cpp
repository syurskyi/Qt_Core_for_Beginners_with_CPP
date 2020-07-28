//
// Created by syurskyi on 7/27/2020.
//

#include "lion.h"

lion::lion(QObject *parent) : feline(parent)
{

}

void lion::speak()
{
    qInfo() << "ROAR!!!!";

    //call the function from the base class
    feline::speak();

}
