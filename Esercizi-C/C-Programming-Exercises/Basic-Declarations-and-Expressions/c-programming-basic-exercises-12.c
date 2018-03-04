#include <stdio.h>

int main (void) {

double id, salary, workinghours, result;

printf("Please insert your employeeID: ");
scanf("%ld", &id);
printf("Please insert your hourly salary in US Dollars: ");
scanf ("%ld", &salary);
printf("Please insert the amount of working hours: ");
scanf("%ld", &workinghours);



result = (((salary*workinghours)*12)*30);
printf("The gross pay is %f USD. ", result);

return 0;
}
