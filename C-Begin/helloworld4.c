#include <stdio.h>

int main (int argc, char **argv) {
  int i;
  for (i = 0; i < argc; i++) {
    printf("Hello world: argc=%d arg %d is %s\n", argc, i, argv[i]);
    printf("4\n");
  }
}
