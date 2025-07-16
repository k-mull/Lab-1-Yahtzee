#ifndef CONSOLEUI_H
#define CONSOLEUI_H
class ConsoleUI 
{
public:
    //function needed to display the 5 dice
    void displayDice(const int faceValues[5]); 
    //makes the dice roll when asked
    void getDiceToRoll(bool toRoll[5]); //bool used to track the rerolls
    //allows user to choice the category to score
    int selectCategory(const bool usedCategories[6]);
    //display total score at end
    void displayScore(int totalScore);
    //display table with categories and their sums
    void displayScoreTable(const int scores[6], const bool used[6]);
};

#endif
