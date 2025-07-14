#include "GameLogic.h"
#include "ConsoleUI.h"
/*
Dice:
#1 has the value of 5
#2 has the value of 5
#3 has the value of 4
#4 has the value of 1
#5 has the value of 4

Roll 2
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 2
Die number to reroll (1-5 or 0 to finish): 3
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 5
#2 has the value of 6
#3 has the value of 1
#4 has the value of 2
#5 has the value of 4

Roll 3
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 2
Die number to reroll (1-5 or 0 to finish): 3
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 6
#2 has the value of 2
#3 has the value of 4
#4 has the value of 4
#5 has the value of 4


Current Score Table:
1. Aces: Not scored
2. Twos: Not scored
3. Threes: Not scored
4. Fours: Not scored
5. Fives: Not scored
6. Sixes: Not scored

Choose a category to score:
1. Aces
2. Twos
3. Threes
4. Fours
5. Fives
6. Sixes
Enter choice (1-6): 4

Current Score Table:
1. Aces: Not scored
2. Twos: Not scored
3. Threes: Not scored
4. Fours: 12
5. Fives: Not scored
6. Sixes: Not scored

Dice:
#1 has the value of 1
#2 has the value of 6
#3 has the value of 4
#4 has the value of 4
#5 has the value of 4

Roll 2
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 2
Die number to reroll (1-5 or 0 to finish): 3
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 3
#2 has the value of 1
#3 has the value of 3
#4 has the value of 4
#5 has the value of 2

Roll 3
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 2
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 3
#2 has the value of 1
#3 has the value of 3
#4 has the value of 5
#5 has the value of 5


Current Score Table:
1. Aces: Not scored
2. Twos: Not scored
3. Threes: Not scored
4. Fours: 12
5. Fives: Not scored
6. Sixes: Not scored

Choose a category to score:
1. Aces
2. Twos
3. Threes
5. Fives
6. Sixes
Enter choice (1-6): 5

Current Score Table:
1. Aces: Not scored
2. Twos: Not scored
3. Threes: Not scored
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Dice:
#1 has the value of 2
#2 has the value of 6
#3 has the value of 4
#4 has the value of 1
#5 has the value of 4

Roll 2
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 2
Die number to reroll (1-5 or 0 to finish): 3
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 6
#2 has the value of 3
#3 has the value of 4
#4 has the value of 5
#5 has the value of 3

Roll 3
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 3
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 2
#2 has the value of 3
#3 has the value of 2
#4 has the value of 5
#5 has the value of 3


Current Score Table:
1. Aces: Not scored
2. Twos: Not scored
3. Threes: Not scored
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Choose a category to score:
1. Aces
2. Twos
3. Threes
6. Sixes
Enter choice (1-6): 3

Current Score Table:
1. Aces: Not scored
2. Twos: Not scored
3. Threes: 6
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Dice:
#1 has the value of 3
#2 has the value of 1
#3 has the value of 6
#4 has the value of 3
#5 has the value of 1

Roll 2
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 3
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 5
#2 has the value of 1
#3 has the value of 3
#4 has the value of 6
#5 has the value of 1

Roll 3
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 3
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 6
#2 has the value of 1
#3 has the value of 6
#4 has the value of 2
#5 has the value of 1


Current Score Table:
1. Aces: Not scored
2. Twos: Not scored
3. Threes: 6
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Choose a category to score:
1. Aces
2. Twos
6. Sixes
Enter choice (1-6): 1

Current Score Table:
1. Aces: 2
2. Twos: Not scored
3. Threes: 6
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Dice:
#1 has the value of 2
#2 has the value of 4
#3 has the value of 2
#4 has the value of 5
#5 has the value of 3

Roll 2
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 2
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 2
#2 has the value of 6
#3 has the value of 2
#4 has the value of 1
#5 has the value of 1

Roll 3
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 2
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 2
#2 has the value of 4
#3 has the value of 2
#4 has the value of 2
#5 has the value of 4


Current Score Table:
1. Aces: 2
2. Twos: Not scored
3. Threes: 6
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Choose a category to score:
2. Twos
6. Sixes
Enter choice (1-6): 2

Current Score Table:
1. Aces: 2
2. Twos: 6
3. Threes: 6
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Dice:
#1 has the value of 4
#2 has the value of 6
#3 has the value of 6
#4 has the value of 1
#5 has the value of 2

Roll 2
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 4
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 4
#2 has the value of 6
#3 has the value of 6
#4 has the value of 6
#5 has the value of 2

Roll 3
Enter dice numbers (1-5) one at a time to reroll.
Enter 0 when you're done choosing.
Die number to reroll (1-5 or 0 to finish): 1
Die number to reroll (1-5 or 0 to finish): 5
Die number to reroll (1-5 or 0 to finish): 0
Dice:
#1 has the value of 1
#2 has the value of 6
#3 has the value of 6
#4 has the value of 6
#5 has the value of 2


Current Score Table:
1. Aces: 2
2. Twos: 6
3. Threes: 6
4. Fours: 12
5. Fives: 10
6. Sixes: Not scored

Choose a category to score:
6. Sixes
Enter choice (1-6): 6

Current Score Table:
1. Aces: 2
2. Twos: 6
3. Threes: 6
4. Fours: 12
5. Fives: 10
6. Sixes: 18

Final Score: 54
*/
int main() 
{
   
        GameLogic mygame;
        mygame.playGame();
    
   
}

