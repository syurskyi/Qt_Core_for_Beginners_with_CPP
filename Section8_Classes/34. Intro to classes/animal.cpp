//
// Created by syurskyi on 7/27/2020.
//

#include "animal.h"
//...inside animal...#include <QDebug>
animal::animal(QObject *parent) : QObject(parent)
{

}

void animal::speak(QString message)
{
    //perform magic
    qDebug() << message;
}
