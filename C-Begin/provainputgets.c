#include <stdio.h>

int main () {
  char firstname[5];
  char lastname[5];
  printf("Enter your first name: ");
  gets(firstname);
  printf("Enter your last name: ");
  gets(lastname);
  printf("Hello %s %s\n", firstname, lastname);
  return 0;
}
