#include <stdio.h>

int main(int argc, char **argv) {
  int subtotal;
  int tax;
  int grandtotal;
  double taxrate;

  taxrate = 0.175;
  subtotal = 200;
  tax = subtotal * taxrate;
  grandtotal = tax + subtotal;

  printf("The tax on %d is %d, so the grandtotal is %d.", subtotal, tax, grandtotal);

return 0;
}
