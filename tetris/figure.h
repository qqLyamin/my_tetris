#ifndef FIGURE_H
#define FIGURE_H

#include <QVector>
#include <QPoint>
#include "tetris.h"
#include <QDebug>

static const uint Z = 20;

class figure
{
public:
    int x = 0;

    QVector<QPoint> my_figure;

    uint number_of_turn = 1;

public:

    void changeobject();//метод который старую фигуру делает
                        //частью формы и вызывает следующую
    void slowride();//метод который будет опускать фигуру вниз
    void rotatefigure();//метод вращающий фигуру
    void movefigure(int);//метод, двигающий фигуру
    figure();
};

#endif // FIGURE_H
