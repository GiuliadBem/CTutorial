#include <stdio.h>

int main() {

  // Arithmetic operators = + - * / % ++ --

  int x = 2;
  float y = 3;
  int z = 0;
  float a = 0;
  int b = 10;
  int c = 3;

  z = x + y;
  z = x - y;
  z = x * y;
  a = x / y;
  z = b % c;

  printf("%d\n", z);
  printf("%f\n", a);

  z++;

  printf("%d\n", z);

  z--;

  printf("%d\n",z);

  z += 4;

  printf("%d\n",z);

  z -= 1;

  printf("%d\n",z);

  z /= 2;

  printf("%d\n",z);

  z *= 3;

  printf("%d\n",z);

  return 0;
}