#include <stdio.h>


//this void function allows to perform input flushing
void flush_input() {
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
}

int main () {
  char firstname[5];
  char lastname [5];
  printf("Enter your first name: ");
  fgets(firstname, 5, stdin);
  printf("Enter your last name: ");
  flush_input(); // recalls the void function above in order to flush input
  fgets(lastname, 5, stdin);
  printf("Hello %s %s\n", firstname, lastname);
  return 0;
}
