//
// Created by syurskyi on 7/27/2020.
//

#include "animal.h"

animal::animal(QObject *parent) : QObject(parent)
{
    qInfo() << this << " constructed";
}
