
<<<<<<< HEAD
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
=======
int main (void) {

int types;
int weight1;
int nmbritem1;
int weight2;
int nmbritem2;

start:

  printf("Please insert here how many types of items you have gotten:\n");
  scanf("%d", &types);

  if (types > 2){
    printf("Please insert a number be greater than 1, but no greater than 2.\n");
    goto start;
  }
  else
  if ( types <= 1 ){
    printf("The number of the items measured must be greater than 1, but no greater than 2.\n");
    goto start;
  }
  else
  if ( types == 2 ){
  printf("Insert here how many pieces do you have of the first type of Item:");
  scanf("%d\n", nmbritem1);
  printf("Now insert here the weight of type one item\n");
  scanf("%d\n", weight1);
  printf("Please insert here the number of type 2 items\n");
  scanf("%d\n", nmbritem2);
  printf("One more thing! How much do type 2 items weight? Please insert the value here:\n");
  scanf("%d\n", weight2);

int totalweight = (weight1*nmbritem1)+(weight2*nmbritem2);
int totalnumbers = nmbritem1+nmbritem2;
float avgweight = totalweight / totalnumbers;

averageweight:
printf("The average weight of the items is %f\n", avgweight);
}
>>>>>>> master
  return 0;
}
