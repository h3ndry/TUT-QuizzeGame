#include "quizzegame.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizzeGame w;
    w.show();

    return a.exec();
}
