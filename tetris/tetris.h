#ifndef TETRIS_H
#define TETRIS_H

#include <QMainWindow>
#include <QTime>//это дает рандом
#include <QPixmap>
#include <QBrush>
#include <QPalette>

namespace Ui {
class tetris;
}

class tetris : public QMainWindow
{
    Q_OBJECT

public:
    explicit tetris(QWidget *parent = nullptr);
    ~tetris();

public slots:
    void pause_pressed();

private:
    Ui::tetris *ui;
};

#endif // TETRIS_H
