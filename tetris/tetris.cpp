#include "tetris.h"
#include "ui_tetris.h"

tetris::tetris(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tetris)
{
    ui->setupUi(this);
    QTime midnight(0,0,0);//это дает рандом
    qsrand(midnight.secsTo(QTime::currentTime()));//это дает рандом

    QPixmap myPix("C:/GIT PUSH/tetris/tetris/FON.jpg");
    QPalette my_palette;
    my_palette.setBrush(QPalette::Window, QBrush(myPix));
    this->setPalette(my_palette);

    setFixedSize(700, 525);
}

void tetris::pause_pressed()
{
    if (ui->pausebutton->text() == "pause")
    {
        ui->pausebutton->setText("continue");
    }
    else
    {
        ui->pausebutton->setText("pause");
    }
}

tetris::~tetris()
{
    delete ui;
}


