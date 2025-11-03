#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int x = 9;
  int y = 2;
  float z = 3.14;
  int a = -3;
  float b = 3;
  float c = 3;
  float d = 3;
  float e = 3;

  x = sqrt(x);
  y = pow(y, 4);
  z = round(z);
  z = ceil(z);
  z = floor(z);
  a = abs(a);
  b = log(b);
  c = sin(c);
  d = cos(d);
  e = tan(e);


  printf("%d\n", x);
  printf("%d\n", y);
  printf("%f\n", z);
  printf("%d\n", a);
  printf("%f\n", b);
  printf("%f\n", c);
  printf("%f\n", d);
  printf("%f\n", e);

  return 0;
}