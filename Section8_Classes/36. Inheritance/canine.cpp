//
// Created by syurskyi on 7/27/2020.
//

#include "canine.h"

canine::canine(QObject *parent) : mammal(parent)
{
    qInfo() << this << " constructed";
}
