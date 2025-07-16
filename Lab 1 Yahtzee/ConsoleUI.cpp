#include "ConsoleUI.h"
#include <iostream>
#include <string>
using namespace std;
//shows the face values of dice after each turn
void ConsoleUI::displayDice(const int faceValues[5]) 
{
    cout << "Dice:" << endl; 
    for (int i = 0; i < 5; i++)
    cout << "#" << (i + 1)  << " has the value of " << faceValues[i] << "\n";
    cout << endl; 
}

//vital part of interacting with user, asks user which dice they'd like to roll
void ConsoleUI::getDiceToRoll(bool toRoll[5])
{
   

  for (int i = 0; i < 5; ++i)
        toRoll[i] = false; //no dice chosen to reroll 

    cout << "Enter dice numbers (1-5) one at a time to reroll or enter 0 to keep all." << endl;
    cout << "Then 0 when you're done choosing." << endl;

    int choice;
    while (true) 
    {
        cout << "Die number to reroll (1-5 or 0 to finish/keep all): ";
        cin >> choice;

        if (choice == 0) // stops loop when user is finished
            break;

        if (choice >= 1 && choice <= 5) { // ensure choice is between 1 and 5
            toRoll[choice - 1] = true;
        }
        else //safety
        {
            cout << "Invalid input. Please enter a number from 1 to 5, or 0 to finish." << endl;
        }
    }
}

//give the user the option to choose which category to score that has not been used
int ConsoleUI::selectCategory(const bool usedCategories[6])

{
    //categories
    const char* labels[6] = 
    {
        "Aces", "Twos", "Threes", "Fours", "Fives", "Sixes"
    };

    cout << "Choose a category to score:\n";
    for (int i = 0; i < 6; i++)
    {
        if (!usedCategories[i]) //only lists categories not used
            cout << (i + 1) << ". " << labels[i] << "\n";
    }

    int choice;
    do 
    {
        cout << "Enter choice (1-6): ";
        cin >> choice;
   
    }
    while (choice < 1 || choice > 6|| usedCategories[choice - 1]); // makes sure choice is valid
    

    return choice;
}

void ConsoleUI::displayScore(int totalScore)
{
    cout << "Final Score: " << totalScore << "\n"; //shows user the final score when game is done
}

void ConsoleUI::displayScoreTable(const int scores[6], const bool used[6])

{
    const char* labels[6] = 
    {
        "Aces", "Twos", "Threes", "Fours", "Fives", "Sixes"
    };
    //shows the current score for each category
    cout << "\nCurrent Score Table:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << (i + 1) << ". " << labels[i] << ": ";
        if (used[i])
            cout << scores[i] << endl;
        else
            cout << "Not scored" << endl; //prints the category that have not been chosen by user
    }
    cout << endl;
}
