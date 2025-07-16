#include "GameLogic.h"
#include "ConsoleUI.h"
#include <cstdlib>
#include <ctime>


int main() 
{
    srand(time(0)); //need for random number generator

   
        GameLogic mygame; //creates instance of gamelogic
        mygame.playGame(); //starts game
    
   
}

