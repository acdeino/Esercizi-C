#include <stdio.h>

int a;
int b;


void showPrefixandPostfixOps ()
{
  int num1;
  int num2;
  printf("\nPrefix and Postfix operators. . . (num = 10)");
  num1 = 10;
  num2 = num1++; // num2 = 10; num1 = 11
  printf("\nnum2 = ++num1; so num2 = %d and num1 = %d", num2, num1);

  num1 = 10;
  num2 = --num1;
  printf("\nnum2 = --num1; so num2 = %d and num1 = %d", num2, num1);
}

int main ()
{
  a = 10;
  b = 2;
  a = a + b;
  printf("\na + b : %d\n", a);
  a = 10;
  a += b;
  printf("a += b : %d\n", a);
  a = 10;
  a = a - b;
  printf("a - b : %d\n", a);
  a = 10;
  a -= b;
  printf("a -= b : %d\n", a);
  a = 10;
  a = a * b;
  printf("a * b : %d\n", a);
  a = 10;
  a *= b;
  printf("a *= b : %d\n", a);
  a = 10;
  a = a / b;
  printf("a / b : %d\n", a);
  a = 10;
  a /= b;
  printf("a /= b : %d\n", a);
  a = 10;
  a ++;
  printf("a++ : %d\n", a);
  a = 10;
  a --;
  printf("a-- : %d\n", a);
  printf("\n");
  printf("\n");
  printf("Prefix & Postfix operators... (num = 10)\n");
  printf("num2 = num1++; so, num2 = 10 & num1 = 11\n");
  printf("num2 = ++num1; so, num2 = 11 & num1 = 11\n");
  printf("\n");
  printf("\n");

  showPrefixandPostfixOps();

  return 0;
}
