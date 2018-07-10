

//VARIABLES

int count;
int count1 = 10;

// void = empty type
// char = single character    char last_initial = 'H';
// int = integer              int age = 23;
// long = large number        long age_of_universe = 13798000000;
// float = decimal number     float liters_per_pint = 0.568f;
// double = precise decimal   double speed_of_swallow = 0.01072896;


//FUNCTION DECLARATIONS

int add_together (int x, int y) {
  int result = x + y;
  return result;
}

int added = add_together(10, 18);


// STRUCTURE DECLARATIONS

typedef struct {
  float x;
  float y;
} point;

point p;
p.x = 0.1;
p.y = 10.1;

float lenght = sqrt(p.x * p.x + p.y * p.y);


//POINTERS

int*
char** argv

//STRINGS

char*

//CONDITIONALS

if (x > 10 && x < 100); {
  puts("x is greater than 10 and less than 100\n");
} else {
  printf("x is less than 11 or greater than 99\n");
}

//LOOPS

//While loop:
int i = 10;
while (i > 0) {
  puts("While - loop iteration");
  i = i - 1;
}

//For loop:
for (int i = 0; i < 10; i++) {
  puts("For - loop iteration ")
}
