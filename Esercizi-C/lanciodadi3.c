#include <stdio.h>
#include <stdlib.h>

int main (void) {

int frequency1 = 0; /* counter relative to tally 1 */
int frequency2 = 0; /* counter relative to tally 2 */
int frequency3 = 0; /* counter relative to tally 3 */
int frequency4 = 0; /* counter relative to tally 4 */
int frequency5 = 0; /* counter relative to tally 5 */
int frequency6 = 0; /* counter relative to tally 6 */

int roll; /* counter of dice rollings, value ranges between 1 and 6000*/

int face; /* represent the result of one rolling, value ranges between 1 and 6*/

/*iterates 6000 times and summarise results*/
for ( roll = 1; roll <= 6000; roll++) {
  face = 1 + rand() % 6; /* random number between 1 and 6 */

  /* determinates the value of the face of the dice, and increases the corrispondent counter */
  switch ( face ) {
    case 1: /* rolling shows 1 */
    ++frequency1;
    break;

    case 2: /* rolling shows 2 */
    ++frequency2;
    break;

    case 3: /* rolling shows 3 */
    ++frequency3;
    break;

    case 4: /* rolling shows 4*/
    ++frequency4;
    break;

    case 5: /* rolling shows 5 */
    ++frequency5;
    break;

    case 6: /* rolling shows 6 */
    ++frequency6;
    break;
  } /* end of switch command */
} /*end of for command */

/*visualise results/tallies in a table format */
printf("%s%13s\n", "Face", "Frequency" );
printf("  %13d\n", frequency1 );
printf("  %13d\n", frequency2 );
printf("  %13d\n", frequency3 );
printf("  %13d\n", frequency4 );
printf("  %13d\n", frequency5 );
printf("  %13d\n", frequency6 );

return 0;
} /* end of main function */
