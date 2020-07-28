//
// Created by syurskyi on 7/27/2020.
//


#include "feline.h"

feline::feline(QObject *parent) : QObject(parent)
{

}

void feline::speak()
{
    qInfo() << "meow";
}
