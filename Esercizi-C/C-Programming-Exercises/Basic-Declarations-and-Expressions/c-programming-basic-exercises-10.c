#include <stdio.h>
/*this function multiplicates two integers entered by the user*/

int main (void) {

int x, y, multiplication;

printf("\nChoose a number and insert it:");
scanf("%d", &x);
printf("\nVery well, now choose another one:");
scanf("%d", &y);

multiplication = x * y;
printf("This is the product between the numbers you've choosen: %d\n", multiplication);

return 0;
}
