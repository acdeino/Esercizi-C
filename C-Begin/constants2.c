#include <stdio.h>

int main (int argc, char **argv) {

  #define TAXRATE_DEFINED 0.175
  const double TAXRATE_CONST = 0.175;

  double subtotal;
  double tax;
  double grandtotal;
  double taxrate;

  // first example:

  taxrate = 0.175;
  subtotal = 200;
  taxrate = 0.2;    //variable redefined - as in html/css, the last value counts
  tax = subtotal * taxrate;
  grandtotal = subtotal + tax;

  printf("(Taxrate is %.3f)| The tax on %.2f is %.2f, so the grandtotal is %.2f.\n", taxrate, subtotal, tax, grandtotal);


  // second example:

  subtotal = 200;
  // #define TAXRATE_DEFINED 0.2 //redefine a #define "constant"
  tax = subtotal * TAXRATE_DEFINED;
  grandtotal = tax + subtotal;

  printf("(Defined Taxrate is %.2f)| The tax on %.2f is %.2f, so the grandtotal is %.2f.\n", TAXRATE_DEFINED, subtotal, tax, grandtotal);


  // third example:

  subtotal = 200;
  // TAXRATE_CONST = 0.2; //CANNOT redefine a true constant!
  tax = subtotal * TAXRATE_CONST;
  grandtotal = tax + subtotal;

  printf("(Defined const taxrate is %.2f)| The tax on %.2f is %.2f, so the grandtotal is %.2f\n", TAXRATE_CONST, subtotal, tax, grandtotal);

  return 0;
}
