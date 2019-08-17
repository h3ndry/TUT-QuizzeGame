#ifndef QUIZZEGAME_H
#define QUIZZEGAME_H

#include <QMainWindow>

namespace Ui {
class QuizzeGame;
}

class QuizzeGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuizzeGame(QWidget *parent = nullptr);
    ~QuizzeGame();

private:
    Ui::QuizzeGame *ui;
};

#endif // QUIZZEGAME_H
