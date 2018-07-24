#include <stdio.h>
#include <string.h>

#define STRLEN 5

int readln(char s[], int maxlen) {
  int len_s;
  fgets(s, maxlen, stdin);
  len_s = strlen(s);
  if (s[len_s - 1] == '\n') {
    s[len_s - 1] = '\0';
    len_s -= 1;
  }
  rewind(stdin);
  return len_s;
}


void getinput_with_fgets () {
  char firstname[5];
  char lastname [5];
  printf("Enter your first name: ");
  fgets(firstname, 5, stdin);
  printf("Enter your last name: ");
  // fflush(stdin); // this function may not (invarably) work
  //flush_input();
  //rewind(stdin); //on windows machines
  readln();
  fgets(lastname, 5, stdin);
  readln();
  printf("Hello %s %s\n", firstname, lastname);
}

int main () {
  getinput_with_fgets();

  return 0;
}
