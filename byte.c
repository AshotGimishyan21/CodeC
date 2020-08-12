#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int n;
  long int res;
  scanf("%d", &n);
  res = (n*(pow(2,30)-pow(10,9)));
  printf("%ld\n", res);
  return 0;
}
