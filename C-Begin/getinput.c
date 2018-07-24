#include <stdio.h>

void flush_input() {
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
}

void getinput_with_gets() {
  char firstname[5];
  char lastname[5];
  printf("Enter your first name: ");
  gets(firstname);
  printf("Enter your last name: ");
  gets(lastname);
  printf("Hello %s %s\n", firstname, lastname);
}


void getinput_with_fgets () {
  char firstname[5];
  char lastname [5];
  printf("Enter your first name: ");
  fgets(firstname, 5, stdin);
  printf("Enter your last name: ");
  // fflush(stdin); // this function may not (invarably) work
  flush_input();
  //rewind(stdin); on windows machines
  fgets(lastname, 5, stdin);
  printf("Hello %s %s\n", firstname, lastname);
}

void getinput_with_scanf () {
  char firstname[5];
  char lastname[5];
  printf("Enter your first name: ");
  scanf("%s\n", firstname);
  printf("Enter your last name: ");
  scanf("%s\n", lastname);
  printf("Hello %s %s\n", firstname, lastname);
}

int main(int argc, char **argv) {
  //getinput_with_gets();
  getinput_with_fgets();
  //getinput_with_scanf();
  return 0;
}
