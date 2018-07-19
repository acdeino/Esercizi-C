#include <stdio.h>

int main () {
  printf("Hello World!\n");
  printf("1\n");

  double num;
  printf("Enter a number here: ");
  scanf("%s\n", num);


  if (num < 5 && num < 0){
    printf("The number you've inserted, %s, is less than 5.");
  } else if (num < 0) {
    printf("The number you've inserted, %s, is a negative number.");
  } else {
    printf("The number you've inserted, %s, is greater than 5.");
  }


  return 0;
}
