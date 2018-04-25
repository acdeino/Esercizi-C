/* program for calculating a class' marks' average with a counter-controlled counter */

#include <stdio.h>

int main (void) {

  int counter; //number of the marks to be Inserted
  int grade; // value of the mark
  int total; //sum of user-inserted values
  int average; //average value of the marks

  /* initialising phase */
  total = 0; //initialise the total value
  counter = 1; //initialise the counter

  /* computing */
  while (counter <= 10) {
    printf("Enter grade: ");
    scanf("%d\n", &grade );
    total = total + grade; //adds the grade to the total
    counter = counter + 1; //adds one value to the counter
  }

  /* closing phase */
  average = total / 10; //division between integers

  printf("Class average is: %d\n", average);

  return 0;
}
