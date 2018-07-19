#include <stdio.h>

int main () {
  printf("Hello World!\n");

  int n;
  printf("Enter a number here: ");
  scanf("%s\n", n);

  if(int n < 5 && n < 0){
    printf("The number you've inserted, %s, is less than 5.\n");
  } else if (n < 0) {
    printf("The number you've inserted, %s, is a negative number.\n", );
  } else {
    printf("%s\n", );
  }


  return 0;
}
