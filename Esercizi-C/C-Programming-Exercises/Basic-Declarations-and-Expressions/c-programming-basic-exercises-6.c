#include <stdio.h>

/*Calculates the area and the circumference of a cirle given its radius */
int radius;

float circumference, area;


int main (void) {

radius = 6.00;

  circumference = (3.14*2)*radius;
  printf("The circumference is %f centimeters long,\n", circumference);

  area = (radius*radius)*3.14;
  printf("while the area is %f centimeters wide!\n", area);

return 0;
}
