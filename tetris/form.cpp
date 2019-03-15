#include "form.h"

form::form(QWidget *parent) : QWidget(parent)
{
    my_form.resize(my_rows);
    for (auto & var : my_form)
    {
        var.resize(my_colomns);
        var.fill(EmptyColor);
    }

    current = new figure;
    next_figure = new figure;

    my_size.setWidth(W * my_colomns);
    my_size.setHeight(W * my_rows);

    setFixedSize(my_size);

}

void form::refresh()
{
    for (auto & var : my_form)
    {
        var.fill(EmptyColor);
    }
    current->changeobject();
    next_figure->changeobject();
    emit send_next_figure(next_figure);
    this->setFocus();
    repaint();
    my_score = 0;
    emit score_change(my_score);
}

void form::newgame()
{
    if (is_started == false)
    {
        is_started = true;
    }
    else
    {
        killTimer(id_timer);
    }
    for (auto & var : my_form)
    {
        var.fill(EmptyColor);
    }
    current->changeobject();

    my_score = 0;
    id_timer = startTimer(300);
    emit send_next_figure(next_figure);

    this->setFocus();
}

void form::pause_game()
{
    if(is_started)
    {
        killTimer(id_timer);
        is_started = false;
        emit pausebutton_change_text();
    }
    else
    {
        id_timer = startTimer(300);
        is_started = true;
        emit pausebutton_change_text();
    }
    this->setFocus();
}

void form::paintEvent(QPaintEvent * my_painter)
{
    QPainter my_Qpainter(this);

    for (int i = 0; i < my_colomns; i++)
    {
        for (int j = 0; j < my_rows; j++)
        {
            my_Qpainter.fillRect(i * W, j * W, W - 1, W - 1, my_form[j][i]);
        }
    }
    if(is_started)
    {
        for (auto & var : current->my_figure)
        {
            my_Qpainter.fillRect(var.x(), var.y(), W - 1, W - 1, QColor(124, 252, 0));
        }
    }
}

void form::reWriteForm()
{
    for (int var = 0; var < 4; var++)
    {
        my_form[(current->my_figure[var].y())/W][(current->my_figure[var].x())/W] = QColor(124, 252, 0);
    }
    std::swap(current, next_figure);
    endGame();
    next_figure->changeobject();
    emit send_next_figure(next_figure);
    clearLine();
    if(number_for_clear)
    {
        formMakeup(number_for_clear);
    }
}

void form::clearLine()
{
    int counter;
    for (int var = 0; var < my_rows; ++var)
    {
        counter = 0;
        for (int i = 0; i < my_colomns; i++)
        {
            if(my_form[var][i] != EmptyColor)
            {
                counter++;
            }
            else
            {
                i = my_colomns;
                break;
            }
        }
        if(counter == my_colomns)
        {
            my_form[var].fill(EmptyColor);
            number_for_clear = var;
            my_score += 10 * my_colomns;
            emit score_change(my_score);
        }
    }
}

void form::formMakeup(int var)
{
    int number_row = 0;
    int y = 0;

    QVector<QVector<QColor>> tmp123;
    tmp123.resize(my_rows);
    for (auto & X : tmp123)
    {
        X.resize(my_colomns);
        X.fill(EmptyColor);
    }

    for (int j = var; j >= 0; j--)
    {
        for (int i = 0; i < my_colomns; i++)
        {
            if (!y)
            {
                if (my_form[j][i] != EmptyColor)
                {
                    y++;
                    number_row = j;
                }
            }
            else
            {
                break;
            }
        }
        if (number_row)
        {
            break;
        }
    }

    if (number_row)
    {
        for (int j = number_row; j >= 0; j--, var--)
        {
            for (int i = 0; i < my_colomns; i++)
            {
                my_form[var][i] = my_form[j][i];
            }
        }
    }

    number_for_clear = 0;
}


void form::timerEvent(QTimerEvent *)
{
    if (is_started)
    {
        for (int var = 0; var < 4; var++)
        {
            if (current->my_figure[var].y() != W * (my_rows - 1))
            {
                if (my_form[(current->my_figure[var].y() + W)/W][(current->my_figure[var].x())/W] != EmptyColor)
                {
                    reWriteForm();
                    repaint();
                    return;
                }
            }
            else
            {
                reWriteForm();
                repaint();
                return;
            }
        }
        current->slowride();
        repaint();
    }
}

void form::keyPressEvent(QKeyEvent * event)
{
    if(is_started)
    {
        if(event->key() == Qt::Key_Up)
        {
            QPoint p = current->my_figure[1];
            for (int var = 0; var < current->my_figure.size(); var++)
            {
                int X = current->my_figure[var].x() - p.x();
                int Y = current->my_figure[var].y() - p.y();
                QPoint tmp = QPoint(p.x() + Y, p.y() - X);
                if (tmp.x() < 0 || tmp.x() >= my_colomns * W || tmp.y() < 0 || tmp.y() >= my_rows * W || my_form[tmp.y()/W][tmp.x()/W] != EmptyColor)
                {
                    return;
                }
            }
            current->rotatefigure();
        }
        else if(event->key() == Qt::Key_Space)
        {
            int m = 0;
            for (auto & x : current->my_figure)
            {
                if ((x.y() != (my_rows - 1) * W) && my_form[(x.y() + W)/W][x.x()/W] == EmptyColor)
                {
                    m++;
                    is_pressed_space = true;
                }
                else
                {
                    is_pressed_space = false;
                }
            }

            if (is_pressed_space && m == 4)
            {
                current->slowride();
            }
            repaint();
        }

        if(event->key() == Qt::Key_Left)
        {
            for (auto & var : current->my_figure)
            {
                if(var.x()/W == 0 || my_form[var.y()/W][(var.x()- W)/W] != EmptyColor)
                {
                   return;
                }
            }
            current->movefigure(-1);
            repaint();
        }

        if(event->key() == Qt::Key_Right)
        {
            for (auto & var : current->my_figure)
            {
                if(var.x()/W == (my_colomns - 1) || my_form[var.y()/W][(var.x()+ W)/W] != EmptyColor)
                {
                   return;
                }
            }
            current->movefigure(1);
            repaint();
        }
    }
}


void form::endGame()
{
    for (auto & VAR : current->my_figure)
    {
        if (my_form[VAR.y()/W][VAR.x()/W] != EmptyColor)
        {
            killTimer(id_timer);
            QMessageBox::information(this, "End Game!", "That's all");
            is_started = false;
            return;
        }
    }
}















