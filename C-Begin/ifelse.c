#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {

  char agestring[10];
  int age;
  int bonus;

  printf("Enter your age: ");
  gets(agestring);
  age = atoi(agestring);

  if (age == 0) {
    printf("You entered an invalid age, so your bonus can't be calculated.\n");
  } else {
  if (age > 45) {
    bonus = 1000;
  } else if (age >= 1) {
    bonus = 500;
  } else {
    bonus = 500;
  }
}
  printf("Your age is %d, so your bonus is %d\n", age, bonus);
   {
  if (age <= 21 && age >= 1) {
    printf("You are one of our youngest employees!\n");
  } else if (age >= 70) {
    printf("Is time to retire, innit?\n");
  }
  else {
    printf("You're average.\n");
  }
}
  if (bonus >= 1000) {
    printf("You've earned a high bonus!\n");
  } else {
    printf("Your bonus is average\n");
  }

  return 0;
}
