#include <stdio.h>

int main(int argc, char **argv) {

  double subtotal;
  double tax;
  double taxrate;
  double grandtotal;

  taxrate = 0.175;
  subtotal = 200;
  tax = subtotal * taxrate;
  grandtotal = tax + subtotal;

  printf("The tax on %.2f is %.2f, so the grandtotal is %.2f.", subtotal, tax, grandtotal);

  return 0;
}
