#include <stdio.h>
#include <stdlib.h>

#include <editline\readline.h>
#include <editline\history.h>

int main(int argc, char** argv) {

  //Prints version and exit information
  puts("Lispy Version 0.0.0.0.1");
  puts("Press CTRL+C to exit\n");

  // In a never ending loop
  while (1) {
    char* input = readline("Lispy> ");

    //Outputs our prompt and get imput
    add_history(input);

    //Echoes input back at user
    printf("No, you are a %s\n", input);

    //Free retrieved input
    free(input);
  }

  return 0;
}
