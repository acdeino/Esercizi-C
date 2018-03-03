#include <stdio.h>

/*Calculates the area and the perimeter of a rectangle*/
int width;
int height;

int perimeter;
int area;

int main () {
width = 7;
height= 5;

perimeter = 2*( width + height);
printf("The perimeter is %d centimeters long,\n", perimeter);

area = width * height;
printf("while the area is %d centimeters wide!\n", area);

return 0;
}
