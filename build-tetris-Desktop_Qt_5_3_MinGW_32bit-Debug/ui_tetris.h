/********************************************************************************
** Form generated from reading UI file 'tetris.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TETRIS_H
#define UI_TETRIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "form.h"
#include "nextfigure.h"

QT_BEGIN_NAMESPACE

class Ui_tetris
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    form *Gamewidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    Nextfigure *nextFigWidget;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QPushButton *startbutton;
    QPushButton *pausebutton;
    QPushButton *refreshbutton;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tetris)
    {
        if (tetris->objectName().isEmpty())
            tetris->setObjectName(QStringLiteral("tetris"));
        tetris->resize(718, 566);
        centralWidget = new QWidget(tetris);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Gamewidget = new form(centralWidget);
        Gamewidget->setObjectName(QStringLiteral("Gamewidget"));
        Gamewidget->setMinimumSize(QSize(220, 400));

        gridLayout->addWidget(Gamewidget, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        nextFigWidget = new Nextfigure(centralWidget);
        nextFigWidget->setObjectName(QStringLiteral("nextFigWidget"));
        nextFigWidget->setMinimumSize(QSize(180, 80));

        verticalLayout_2->addWidget(nextFigWidget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        startbutton = new QPushButton(centralWidget);
        startbutton->setObjectName(QStringLiteral("startbutton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startbutton->sizePolicy().hasHeightForWidth());
        startbutton->setSizePolicy(sizePolicy);
        startbutton->setMinimumSize(QSize(160, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        startbutton->setFont(font1);

        verticalLayout->addWidget(startbutton);

        pausebutton = new QPushButton(centralWidget);
        pausebutton->setObjectName(QStringLiteral("pausebutton"));
        sizePolicy.setHeightForWidth(pausebutton->sizePolicy().hasHeightForWidth());
        pausebutton->setSizePolicy(sizePolicy);
        pausebutton->setMinimumSize(QSize(160, 30));
        pausebutton->setFont(font1);

        verticalLayout->addWidget(pausebutton);

        refreshbutton = new QPushButton(centralWidget);
        refreshbutton->setObjectName(QStringLiteral("refreshbutton"));
        sizePolicy.setHeightForWidth(refreshbutton->sizePolicy().hasHeightForWidth());
        refreshbutton->setSizePolicy(sizePolicy);
        refreshbutton->setMinimumSize(QSize(160, 30));
        refreshbutton->setFont(font1);

        verticalLayout->addWidget(refreshbutton);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(160, 30));
        pushButton_4->setFont(font1);

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(160);
        sizePolicy1.setVerticalStretch(30);
        sizePolicy1.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy1);
        lcdNumber->setMinimumSize(QSize(160, 30));

        verticalLayout->addWidget(lcdNumber);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        tetris->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(tetris);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 718, 26));
        tetris->setMenuBar(menuBar);
        mainToolBar = new QToolBar(tetris);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        tetris->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(tetris);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        tetris->setStatusBar(statusBar);

        retranslateUi(tetris);
        QObject::connect(pushButton_4, SIGNAL(clicked()), tetris, SLOT(close()));
        QObject::connect(startbutton, SIGNAL(clicked()), Gamewidget, SLOT(newgame()));
        QObject::connect(refreshbutton, SIGNAL(clicked()), Gamewidget, SLOT(refresh()));
        QObject::connect(Gamewidget, SIGNAL(score_change(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(pausebutton, SIGNAL(clicked()), Gamewidget, SLOT(pause_game()));
        QObject::connect(Gamewidget, SIGNAL(pausebutton_change_text()), tetris, SLOT(pause_pressed()));
        QObject::connect(Gamewidget, SIGNAL(send_next_figure(figure*)), nextFigWidget, SLOT(getfigure(figure*)));

        QMetaObject::connectSlotsByName(tetris);
    } // setupUi

    void retranslateUi(QMainWindow *tetris)
    {
        tetris->setWindowTitle(QApplication::translate("tetris", "tetris", 0));
        label_2->setText(QApplication::translate("tetris", "next", 0));
        startbutton->setText(QApplication::translate("tetris", "start", 0));
        pausebutton->setText(QApplication::translate("tetris", "pause", 0));
        refreshbutton->setText(QApplication::translate("tetris", "refresh", 0));
        pushButton_4->setText(QApplication::translate("tetris", "exit", 0));
        label->setText(QApplication::translate("tetris", "SCORE", 0));
    } // retranslateUi

};

namespace Ui {
    class tetris: public Ui_tetris {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TETRIS_H
