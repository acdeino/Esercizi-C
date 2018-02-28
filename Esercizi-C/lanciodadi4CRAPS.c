#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* enumeration constants that represent the state of play */
enum Status { CONTINUE, WON, LOST};

int rollDice (void);

/* execution of the app starts from main function */

int main (void) {

int sum; /*sum of the tally of the dice rolling */
int myPoint; /* points won */

enum Status gameStatus; /* may contain CONTINUE, WON, or LOST */

/* randomises random number generator using present time */
srand( time( NULL ));

sum = rollDice(); /*first rolling of the dice */

/* determinates the state of play, based on the rolling dices' tally */
switch( sum ) {

  /* wins at the first rolling */
  case 7:
  case 11:
  gameStatus = WON;
  break;

  /* loses at the first rolling */
  case 2:
  case 3:
  case 12:
  gameStatus = LOST;
  break;

  /*memorises the tally */
default:
  gameStatus = CONTINUE;
  myPoint = sum;
  printf("Point is %d\n", myPoint );
  break;
} /* end of switch command */

/* until the game is not over */
while ( gameStatus == CONTINUE) {
  sum = rollDice(); /* keeps rolling */

/*  determinates the state of play */
if ( sum == myPoint ) {
  /* wins obtaining the score */
  gameStatus = WON; /* the game's over: player has won */
} /* end of if command */

else {
  if (sum == 7 ) { /* loses obtaining a 7 */
    gameStatus = LOST; /* game's over, player has lost */
     } /* end of if command */
} /* end of else command */
} /* end of while command */

/* visualises a Victory or Defeat message on the screen */
if (gameStatus == WON )
{ /* if the player has won */
  printf("YOU WON!\n" );
}
else { /* if the  player has lost */
  printf("YOU LOST!\n" );
}

return 0;
} /* end of main function */

/* rolls dices, calculates the sum and prints the results */
int  rollDice ( void )
{
  int die1; /* tally of the first dice */
  int die2; /* tally of the second dice */
  int workSum; /* sum of the tallies */

die1 = 1 + ( rand () % 6); /* generates randomly the tally of die1 */
die2 = 1 + ( rand () % 6); /* generates randomly the tally of die2 */
workSum = die1 + die2;

  /* prints the results   */
printf("Player rolled %d + %d = %d\n", die1, die2, workSum );
return workSum; /* prints the sum of the tallies  */

} /* end of rollDice function */
