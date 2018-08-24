#include <stdio.h>

int a;
int b;

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

  return 0;
}
