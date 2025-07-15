#ifndef CONSOLEUI_H
#define CONSOLEUI_H
class ConsoleUI 
{
public:
    void displayDice(const int faceValues[5]);
    void getDiceToRoll(bool toRoll[5]);
    int selectCategory(const bool usedCategories[6]);
    void displayScore(int totalScore);
    void displayScoreTable(const int scores[6], const bool used[6]);
};

#endif
