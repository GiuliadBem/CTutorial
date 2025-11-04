#include <stdio.h>

int main() {

  int age = 25;
  float price = 19.99;
  double pi = 3.1415926535;
  char currency = '$';
  char name[] = "Giulia de Bem";

  printf("%d\n", age);
  printf("%.2f\n",price);
  printf("%lf\n", pi);
  printf("%c\n", currency);
  printf("%s\n", name);


  int num1 = 1;
  int num2 = 10;
  int num3 = 100;

  printf("%3d\n", num1);
  printf("%3d\n", num2);
  printf("%3d\n", num3);

  printf("%-3d\n", num1);
  printf("%-3d\n", num2);
  printf("%-3d\n", num3);

  printf("%03d\n", num1);
  printf("%03d\n", num2);
  printf("%03d\n", num3);

  // Precision

  float price1 = 19.99;
  float price2 = 1.50;
  float price3 = -100.00;

  printf("%+10.2f\n", price1);
  printf("%.2f\n", price2);
  printf("%.2f\n", price3);

  return 0;
}