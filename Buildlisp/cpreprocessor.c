#include <stdio.h>
#include <stdlib.h>

//If we are compiling on windows, compiles these functions
#ifdef _WIN32
#include <string.h>

static char buffer [2048];


//Fake readline function
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

//Fake add_history functions
void add_history(char* unused) {}

//Otherwise, include the edit line headers
#else
#include <editline/readline.h>
#include <editline/history.h>
#endif
