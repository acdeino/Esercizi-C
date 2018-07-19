#include <stdio.h>

int main () {
  printf("Hello World!\n");

  int n;
  printf("Enter a number here: ");
  scanf("%s\n", n);


  if (n < 5 && n < 0){
    printf("The number you've inserted, %s, is less than 5.");
  } else if (n < 0) {
    printf("The number you've inserted, %s, is a negative number.");
  } else {
    printf("The number you've inserted, %s, is greater than 5.");
  }


  return 0;
}
