//
// Created by syurskyi on 7/27/2020.
//

#include "mammal.h"

mammal::mammal(QObject *parent) : animal(parent)
{
    qInfo() << this << " constructed";
}
