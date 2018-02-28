#include <stdio.h>

int main(void)
{
  int num1;
  int num2;

  printf("Inserisci due numeri interi, premi invio e ti dico\n" );
  printf("quale relazione hanno fra di loro!" );

scanf("%d%d", &num1, &num2 );

if (num1==num2) {
  printf("%d e'uguale a %d\n", num1, num2);
}

if (num1!=num2) {
  printf("%d non e' uguale a %d\n", num1, num2);
}

if (num1<num2) {
  printf("%d e' inferiore a %d\n", num1, num2);
}

if (num1>num2) {
  printf("%d e' superiore a %d\n", num1, num2);
}

if (num1<=num2) {
  printf("%d e' minore o uguale a %d\n", num1, num2);
}

if (num1>=num2) {
  printf("%d e' maggiore o uguale a %d\n", num1, num2);
}

return 0;
}
