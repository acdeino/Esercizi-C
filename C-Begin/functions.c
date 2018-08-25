#include <stdio.h>
#include <string.h>

int STRLEN;

int readln(char s[], int maxlen)
{
  char ch;
  int i;
  int chars_remain;
  i = 0;
  chars_remain = 1;
  while(chars_remain) {
    ch = getchar();
    if ((ch == '\n') || (ch == EOF)) {
      chars_remain = 0;
    } else if (i < maxlen - 1){
      s[i] = ch;
      i++;
    }
  }
  s[i] = '\0';
  return i;
}

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
