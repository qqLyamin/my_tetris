#include "nextfigure.h"

Nextfigure::Nextfigure(QWidget *parent) : QWidget(parent)
{
    s.setWidth(180);
    s.setHeight(80);
    setFixedSize(s);
}

void Nextfigure::getfigure(figure * my_next)
{
    next = my_next;
    is_game_started = true;
    repaint();
}

void Nextfigure::paintEvent(QPaintEvent *)
{
    if (is_game_started)
    {
        QPainter my_painter(this);
        for (auto & x : next->my_figure)
        {
            my_painter.fillRect(x.x() - 25, x.y(), 19 , 19, QColor(124, 252, 0));
        }
    }
}
