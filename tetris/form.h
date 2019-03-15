#ifndef FORM_H
#define FORM_H
#define EmptyColor QColor(122, 158, 175)

#include <QWidget>
#include <QVector>
#include <QPainter>
#include "figure.h"
#include <QDebug>
#include <QKeyEvent>
#include <QColor>
#include <QPoint>
#include <QMessageBox>

static const uint W = 20;

class form : public QWidget
{
    Q_OBJECT

    QVector<QVector<QColor>> my_form;

    uint my_rows = 20;
    uint my_colomns = 11;

    int number_for_clear;

    bool is_started = false;
    bool is_pressed_space = false;

    int my_score = 0;
    uint id_timer;
    QSize my_size;
protected:
    figure * current;
    figure * next_figure;
public:
    explicit form(QWidget *parent = nullptr);

signals:

    void score_change(int);
    void pausebutton_change_text();
    void send_next_figure(figure * );

public slots:

    void refresh();
    void newgame();
    void pause_game();

protected:

    virtual void paintEvent(QPaintEvent *) override;
    virtual void timerEvent(QTimerEvent *) override;
    void reWriteForm();
    void clearLine();//удаляет заполненную линию
    void formMakeup(int);
    void endGame();

protected:
    virtual void keyPressEvent(QKeyEvent *);
};

#endif // FORM_H
