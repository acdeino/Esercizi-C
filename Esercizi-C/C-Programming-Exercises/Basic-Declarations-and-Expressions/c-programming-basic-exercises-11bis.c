#include <stdio.h>

int main(void)
{
double numberofitem1, numberofitem2, weightitem1, weightitem2, result;

    printf("Insert here how many pieces do you have of the first type of Item:");
    scanf("%lf", &numberofitem1);
    printf("Now insert here the weight of type one item");
    scanf("%lf", &weightitem1);
    printf("Please insert here the number of type 2 items");
    scanf("%lf", &numberofitem2);
    printf("One more thing! How much do type 2 items weight? Please insert the value here:\n");
    scanf("%lf", &weightitem2);

    result = ((numberofitem1*weightitem1)+(numberofitem2*weightitem2))/(numberofitem1+numberofitem2);
    printf("The average weight of the goods is:%f\n", result);
  return 0;
}
