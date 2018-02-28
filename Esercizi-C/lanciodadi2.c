#include <stdio.h>
#include <stdlib.h>

/* the execution of this app starts from main function */
int main(void) {

  int i; /* counter */

  /* iterates 20 times */
  for (i=1; i<=20; i++) {

    /*generates a random number within 1-6 range, and printes it on screen */
    printf("%10d", 1+(rand()%6) );

    /*if the counter is divisible by 5, starts a new line within the visualisation */
    if (i % 5 == 0) {
      printf("\n" );
    } /*end if command*/
  } /*end for command*/

  return 0; 
} /* end main function */
