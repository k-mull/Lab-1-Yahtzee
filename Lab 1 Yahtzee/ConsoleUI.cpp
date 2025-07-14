#include "ConsoleUI.h"
#include <iostream>
#include <string>
using namespace std;
void ConsoleUI::displayDice(const int faceValues[5]) 
{

    cout << "Dice:" << endl; 
    for (int i = 0; i < 5; i++)
    cout << "#" << (i + 1)  << " has the value of " << faceValues[i] << "\n";
    cout << endl; 
}

void ConsoleUI::getDiceToRoll(bool toRoll[5], int rollNumber)
{
    cout << "Roll " << (rollNumber + 2) << endl;

  
    for (int i = 0; i < 5; ++i)
        toRoll[i] = false;

    cout << "Enter dice numbers (1-5) one at a time to reroll." << endl;
    cout << "Enter 0 when you're done choosing." << endl;

    int choice;
    while (true) 
    {
        cout << "Die number to reroll (1-5 or 0 to finish): ";
        cin >> choice;

        if (choice == 0)
            break;

        if (choice >= 1 && choice <= 5) {
            toRoll[choice - 1] = true;
        }
        else
        {
            cout << "Invalid input. Please enter a number from 1 to 5, or 0 to finish." << endl;
        }
    }
}

int ConsoleUI::selectCategory(const bool usedCategories[6])
{
    const char* labels[6] = 
    {
        "Aces", "Twos", "Threes", "Fours", "Fives", "Sixes"
    };

    cout << "Choose a category to score:\n";
    for (int i = 0; i < 6; i++)
    {
        if (!usedCategories[i])
            cout << (i + 1) << ". " << labels[i] << "\n";
    }

    int choice;
    do 
    {
        cout << "Enter choice (1-6): ";
        cin >> choice;
   
    }
    while (choice < 1 || choice > 6|| usedCategories[choice - 1]);

    return choice;
}

void ConsoleUI::displayScore(int totalScore)
{
    cout << "Final Score: " << totalScore << "\n";
}

void ConsoleUI::displayScoreTable(const int scores[6], const bool used[6])
{
    const char* labels[6] = 
    {
        "Aces", "Twos", "Threes", "Fours", "Fives", "Sixes"
    };

    cout << "\nCurrent Score Table:\n";
    for (int i = 0; i < 6; i++)
    {
        cout << (i + 1) << ". " << labels[i] << ": ";
        if (used[i])
            cout << scores[i] << endl;
        else
            cout << "Not scored" << endl; 
    }
    cout << endl;
}
