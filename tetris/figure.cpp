#include "figure.h"

figure::figure()
{
    number_of_turn = 1;
    x = qrand()%5;
    switch(x)
    {
        case 0://L
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(120, 0), QPoint(120, 20)};
        break;

        case 1://T
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(120, 0), QPoint(100, 20)};
        break;

        case 2://I
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(120, 0), QPoint(140, 0)};
        break;

        case 3://Z
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(100, 20), QPoint(120, 20)};
        break;

        case 4://Sq
        my_figure = QVector<QPoint>{QPoint(100, 0), QPoint(120, 0), QPoint(100, 20), QPoint(120, 20)};
        break;
    }
}

void figure::changeobject()
{
    my_figure.clear();
    number_of_turn = 1;
    x = qrand()%5;
    switch(x)
    {
        case 0://L
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(120, 0), QPoint(120, 20)};
        break;

        case 1://T
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(120, 0), QPoint(100, 20)};
        break;

        case 2://I
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(120, 0), QPoint(140, 0)};
        break;

        case 3://Z
        my_figure = QVector<QPoint>{QPoint(80, 0), QPoint(100, 0), QPoint(100, 20), QPoint(120, 20)};
        break;

        case 4://Sq
        my_figure = QVector<QPoint>{QPoint(100, 0), QPoint(120, 0), QPoint(100, 20), QPoint(120, 20)};
        break;
    }
}

void figure::slowride()
{
    for (int var = 0; var < 4; var++)
    {
        my_figure[var] = QPoint(my_figure[var].x(), my_figure[var].y() + Z);
    }
}

void figure::rotatefigure()
{
    QPoint p = my_figure[1];
    if(x != 4)
    {
        for (int var = 0; var < my_figure.size(); var++)
        {
            int X = my_figure[var].x() - p.x();
            int Y = my_figure[var].y() - p.y();
            my_figure[var] = QPoint(p.x() + Y, p.y() - X);
        }
    }
}

void figure::movefigure(int direction)
{
    for (int var = 0; var < 4; var++)
    {
        my_figure[var] = QPoint(my_figure[var].x() + (Z * direction), my_figure[var].y());
    }
}

