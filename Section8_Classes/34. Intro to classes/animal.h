//
// Created by syurskyi on 7/27/2020.
//

#ifndef ANIMAL_H //if not defined
#define ANIMAL_H //define it

#include <QObject>
#include <QDebug>

//Blueprint
class animal : public QObject
{
    Q_OBJECT
    //here - private
public:
    //public
    explicit animal(QObject *parent = nullptr);

    void speak(QString message);




signals:

public slots:
};

#endif // ANIMAL_H
