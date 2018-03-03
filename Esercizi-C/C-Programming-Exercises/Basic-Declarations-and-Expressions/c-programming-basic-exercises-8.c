#include <stdio.h>

int main (void) {

int days, years, weeks, hours;

days = 1329;
years = days / 365;
weeks = days / 7;
hours = (years/365)*24;

//Converts days to years, weeks and hours

printf("1329 days are\n");
  printf(" %d years,\n", years);
  printf(" %d weeks,\n", weeks);
  printf("and %e hours!\n", hours);

  return 0;
}
