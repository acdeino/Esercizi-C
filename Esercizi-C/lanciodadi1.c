#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int i; /*counter */
  unsigned seed; /*number used as random number generator */

  printf("Enter seed:\n");
  scanf("%u\n", &seed);

  srand( seed );

  /*itera 1000 volte */
  for (i = 1; i <= 10; i++) {
    /* code */

/*generates a random number between 1 and 6 */
printf("%10d\n", 1 + (rand() %6 ) );

/*if the counter is divisible by 5, begins a new output line */
if (i % 5 == 0) {
  printf("\n");
   }
}

return 0;
}
