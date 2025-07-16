#pragma once
#include "Die.h"

class GameLogic 
{

private:
    //create array of five dice
    Die dice[5];
    //create array used to hold scores for each category
    int scores[6];
    //creates array holding the categories the user has already chosen to score
    bool usedCategories[6];
public:
    //constructor
    GameLogic();
    //used in main function to start playing the game
    void playGame();
    //tells dice to roll when called
    void rollDice(bool toRoll[5]);
    //add the score for each 
    int calculateScore(int category);
};
