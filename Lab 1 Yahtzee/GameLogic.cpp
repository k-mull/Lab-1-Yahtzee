#include "GameLogic.h"
#include "ConsoleUI.h"
GameLogic::GameLogic() //constructor that initializes arrays score and categories that have been used
{
    for (int i = 0; i < 6; i++) 
    {
        scores[i] = 0;
        usedCategories[i] = false;
     
    }
}

void GameLogic::rollDice(bool toRoll[5]) //rolls dice that are marked true in array
{
    for (int i = 0; i < 5; i++)
        if (toRoll[i])
            dice[i].roll();
}

int GameLogic::calculateScore(int category)  //calculates score for each category and adds the values that match the categor number
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    if (dice[i].getValue() == category)
            sum += dice[i].getValue();
    return sum;
}

void GameLogic::playGame()  //allow for user to play game by making instanse of console
{
    ConsoleUI ui;

    for (int catNum = 0; catNum < 6; catNum++)  //one round per category
    {
        bool toRoll[5] = { true, true, true, true, true }; //makes sure that dice are rolled first time
        
  
        for (int rounds = 0; rounds < 3; rounds++) //allows for 3 turns
        {
            rollDice(toRoll);
            int values[5];
            for (int i = 0; i < 5; ++i)
                values[i] = dice[i].getValue();  //gets value
            ui.displayDice(values); //shows value after each roll

           if (rounds < 2) //allows user to choose dice to reroll for 2 rounds
               ui.getDiceToRoll(toRoll);
        }

        ui.displayScoreTable(scores, usedCategories); //show what the table currently looks like

        int choice = ui.selectCategory(usedCategories); //user chooses category
        usedCategories[choice - 1] = true;
        scores[choice - 1] = calculateScore(choice);

        ui.displayScoreTable(scores, usedCategories);
    }

    int total = 0;
    for (int i = 0; i < 6; ++i)
        total += scores[i];

    ui.displayScore(total); //scores of each category all added up and displayed
}
