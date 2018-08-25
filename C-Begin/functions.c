#include <stdio.h>

int main (int argc, char **argv)
{
  char firstname[STRLEN];
  char lastname[STRLEN];
  int len_firstname;
  int len_lastname;
  printf("Enter your firstname: \n");
  len_firstname = readln(firstname, STRLEN);
  printf("Enter your lastname: \n");
  len_lastname = readln(lastname, STRLEN);
  printf("\n");
  printf("\n");
  printf("Hello, %s %s!\n", firstname, lastname);
  printf("Lenght of firstname = %d | Lenght of lastname = %d\n", len_firstname, len_lastname);

  return 0;
}
