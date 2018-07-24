#include <stdio.h>


//this readln function allows to perform input flushing
int readln(char s[], int maxlen){
  char ch;
  int i;
  int chars_remain;
  i = 0;
  chars_remain = 1;
  while (chars_remain){
    ch = getchar();
    if((ch == '\n') || (ch == EOF)) {
      chars_remain = 0;
    } else if (i < maxlen - 1) {
      s[i] = ch;
      i++;
    }
  }
  s[i]='\0';
  return i;
}

int main () {
  char firstname[5];
  char lastname [5];
  printf("Enter your first name: ");
  fgets(firstname, 5, stdin);
  readln(firstname, 5, stdin);
  printf("Enter your last name: ");
  readln(lastname, 5, stdin); // recalls the void function above in order to flush input
  fgets(lastname, 5, stdin);
  printf("Hello %s %s\n", firstname, lastname);
  return 0;
}
