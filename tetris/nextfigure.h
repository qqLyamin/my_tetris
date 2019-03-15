#ifndef NEXTFIGURE_H
#define NEXTFIGURE_H

#include <QWidget>
#include <QFrame>
#include "figure.h"
#include <QPainter>

class Nextfigure : public QWidget
{
    Q_OBJECT

    figure * next;
    bool is_game_started = false;

    QSize s;

public:
    explicit Nextfigure(QWidget *parent = nullptr);
    friend class figure;



signals:

public slots:

    void getfigure(figure *);

protected:
    virtual void paintEvent(QPaintEvent *) override;
};

#endif // NEXTFIGURE_H
