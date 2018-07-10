#include <stdio.h>

/* Declare a buffer for user input of 2048 bit size */
static char input[2048];

int main (int argc, char** argv){

  //Prints version and exit information
  puts("Lispy version 0.0.0.0.1");
  puts("Press CTRL+C to Exit.\n");


  //In a never ending loop
  while (1) {

    //Outputs our prompt
    fputs("Lispy> ", stdout);

    //Reads a line of user input of maximum size 2048
    fgets(input, 2048, stdin);

    //Echoes input back to user
    printf("No you are a %s\n", input);
  }

  return 0;
}
