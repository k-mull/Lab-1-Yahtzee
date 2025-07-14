#include "GameLogic.h"
#include "ConsoleUI.h"
GameLogic::GameLogic() 
{
    for (int i = 0; i < 6; i++) 
    {
        scores[i] = 0;
        usedCategories[i] = false;
    }
}

void GameLogic::rollDice(bool toRoll[5])
{
    for (int i = 0; i < 5; i++)
        if (toRoll[i])
            dice[i].roll();
}

int GameLogic::calculateScore(int category) 
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    if (dice[i].getValue() == category)
            sum += dice[i].getValue();
    return sum;
}

void GameLogic::playGame() 
{
    ConsoleUI ui;

    for (int catNum = 0; catNum < 6; catNum++) 
    {
        bool toRoll[5] = { true, true, true, true, true };

  
        for (int rounds = 0; rounds < 3; rounds++)
        {
            rollDice(toRoll);
            int values[5];
            for (int i = 0; i < 5; ++i)
                values[i] = dice[i].getValue();
            ui.displayDice(values);

            if (rounds < 2)
                ui.getDiceToRoll(toRoll, rounds);
        }

        ui.displayScoreTable(scores, usedCategories);

        int choice = ui.selectCategory(usedCategories);
        usedCategories[choice - 1] = true;
        scores[choice - 1] = calculateScore(choice);

        ui.displayScoreTable(scores, usedCategories);
    }

    int total = 0;
    for (int i = 0; i < 6; ++i)
        total += scores[i];

    ui.displayScore(total);
}
