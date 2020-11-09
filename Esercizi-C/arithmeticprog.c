#include <stdio.h>

int nth_ap(int a, int d, int n) {
  //using formula to find the
  //n-th term t(n) = a(1) + (n-1)*d
  return (a + (n - 1) * d);
}

int main(){
// starting number
  int a = 1;
// common difference
  int d = 1;
//n-th term to be found
  int n = 100;
  printf("The %dth term of this arithmetic progression is %d\n", n, nth_ap(a, d, n));

  return 0;
}
