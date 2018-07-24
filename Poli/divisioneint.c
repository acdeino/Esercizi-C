#include <stdio.h>


main () {

  int a, b;

  printf("Dammi un numero  A: ");
  scanf("%d\n", &a);
  printf("\n");

  printf("Adesso inserisci un numero B: \n");
  scanf("%d\n", &b);
  printf("\n");

  printf("A div B = %d\n", a/b);
  printf("A mod B = %d\n", a%b);
}
