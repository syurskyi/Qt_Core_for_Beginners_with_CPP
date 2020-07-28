//
// Created by syurskyi on 7/27/2020.
//

#ifndef MONSTER_H
#define MONSTER_H

#include <QObject>
#include "feline.h"
#include "canine.h"

class monster : public feline, canine
{
    Q_OBJECT
public:
    explicit monster(QObject *parent = nullptr);

signals:

public slots:
};

#endif // MONSTER_H
