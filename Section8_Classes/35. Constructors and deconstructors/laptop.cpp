//
// Created by syurskyi on 7/27/2020.
//

#include "laptop.h"

laptop::laptop(QObject *parent, QString name) : QObject(parent)
{
    //When created - "this" is automatically created
    this->name = name;
    qInfo() << this << name << " constructed";
}

laptop::~laptop()
{
    //When destroyed
    qInfo() << this << name << " deconstructed";
}

double laptop::asKilograms()
{
    return this->weight * 0.453592;
}

void laptop::test()
{
    qInfo() << this << name << asKilograms();

}
