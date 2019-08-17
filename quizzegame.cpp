#include "quizzegame.h"
#include "ui_quizzegame.h"

QuizzeGame::QuizzeGame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QuizzeGame)
{
    ui->setupUi(this);
}

QuizzeGame::~QuizzeGame()
{
    delete ui;
}
