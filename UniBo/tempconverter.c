#include <stdio.h>

#define MIN 0
#define MAX 300

int main() {
  int fahr, celsius, step;
  step = 20;     // scanf("%d", &step);
  fahr = MIN;
  while (fahr <= MAX) {
    celsius = (fahr - 32) * 5 /9;
    printf("%d\t%d\n", fahr, celsius);
    fahr += step;
  }

  return 0;
}
