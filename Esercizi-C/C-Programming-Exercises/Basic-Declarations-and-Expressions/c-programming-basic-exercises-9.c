#include <stdio.h>

int main(void) {

int first;
  printf("Choose a number :");
  scanf("%d", &first);

int second;
printf("Very well, now insert a another one:");
scanf("%d", &second);

int sum = first + second;
printf("\nThe sum of the numbers you have inserted is %llu!\n", sum);

}

// or, even better:


int second (void) {
  int x, y, sum;
  printf("\nInsert the first integer: ");
  scanf("%d", &x );
  printf("\nInput the second integer: ");
  scanf("%d", &y );
  sum = x + y;
  printf("\nThe sum of the integers you've choosen above is: %d\n", sum);

  return 0;
}
