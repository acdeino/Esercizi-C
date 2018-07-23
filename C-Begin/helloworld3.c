#include <stdio.h>


// int main  (num of args parsed in main, sequential list of strings)
int main(int argc, char **argv) {
  printf("Hello World!\n");
  printf("3\n");
  printf("\n");
  printf("\n");

  int i;
  for (i = 0; i < argc; i++) {
    printf("Hello World: argc=%d arg %d is %s\n", argc, i, argv[i]);
  }

  return 0;
}
