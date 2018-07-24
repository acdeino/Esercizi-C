#include <stdio.h>


int main(void) {
  char firstname[5];
  char lastname[5];
  printf("Enter your first name: ");
  scanf("%s", firstname);
  printf("Enter your last name: ");
  scanf("%s", lastname);
  printf("Hello %s %s\n", firstname, lastname);
  return 0;
}
