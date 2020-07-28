//
// Created by syurskyi on 7/27/2020.
//

#include "feline.h"

feline::feline(QObject *parent) : mammal(parent)
{
    qInfo() << this << " constructed";
}
