#include <stdio.h>

int main (void) {

double types, weight1, nmbritem1, weight2, nmbritem2, result;


start:
  printf("Please insert here how many types of items you have gotten:");
  scanf("%lf", &types);

  if (types > 2){
    printf("Please insert a number be greater than 1, but no greater than 2.");
    goto start;
  }
  else
  if ( types <= 1 ){
    printf("The number of the items measured must be greater than 1, but no greater than 2.");
    goto start;
  }
  else
  if ( types == 2 ){
  printf("Insert here how many pieces do you have of the first type of Item: ");
  scanf("%lf", nmbritem1);
  printf("Now insert here the weight of type one item: ");
  scanf("%lf", weight1);
  printf("Please insert here the number of type 2 items: ");
  scanf("%lf", nmbritem2);
  printf("One more thing! How much do type 2 items weight?");
  printf("Please insert the value here: ");
  scanf("%lf", weight2);

int totalweight = (weight1*nmbritem1)+(weight2*nmbritem2);
int totalnumbers = nmbritem1+nmbritem2;

result = totalweight / totalnumbers;
printf("The average weight of the items is %f\n", result);
}
  return 0;
}
