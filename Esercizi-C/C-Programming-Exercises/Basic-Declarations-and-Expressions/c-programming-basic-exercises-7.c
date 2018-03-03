#include <stdio.h>
/*Displays multple variables*/
int a = 125, b = 12345;
float x = 2.13459;
long ax = 1234567890;
short s = 4043;
double dx = 1.14145927;
char c = 'W';
unsigned long ux = 2541567890;

int main (void) {

  printf("[a+c] The result of a+c is %d,\n", a + c);
  printf("[x+c] the result of x+c is %f,\n", x + c);
  printf("[dx+x] the result of dx+x is %f,\n", dx + x);
  printf("[((int)dx+ax)] the result of ((int)dx+ ax) is %ld,\n", ((int)dx) + ax);
  printf("[a+x] the result of a+x is %f,\n", a + x);
  printf("[s+b] the result of s+b is %d,\n", s + b);
  printf("[ax+b] the result of ax+b is %ld,\n", ax + b);
  printf("[s+c] the result of s+c is %hd,\n", s + c);
  printf("[ax+c] the result of ax + c is %ld,\n", ax + c);
  printf("[ax+ux] and, finally, the result of ax+ux is %lu.\n", ax + ux);

  return 0;
}
