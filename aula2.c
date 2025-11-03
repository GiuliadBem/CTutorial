#include <stdio.h>
#include <stdbool.h>

int main() {
  //variable = A reusable container for a avlue
  //           Behaves as if it were the value it contains
  
  // Integer
  int age = 25;
  int year = 2025;
  int quantity = 2;

  printf("You are %d years old\n", age);
  printf("The year is %d\n", year);
  printf("You have ordered %d x items\n", quantity);

  // Float
  float gpa = 2.5;
  float price = 19.99;
  float temperature = -10.1;

  printf("Your gpa is %.1f\n", gpa);
  printf("The price is %.2f\n", price);
  printf("The temperature is %.1fºC\n", temperature);

  // Double
  double pi = 3.1459265358979;
  double e = 2.4542786568286442543;

  printf("The value of pi is %.15lf\n", pi);
  printf("The value of e is %.15lf\n", e);

  // Character
  char grade = 'A';
  char symbol = '!';

  printf("Your grade is %c\n", grade);
  printf("Your favorite symbol is %c\n", symbol);

  // Array of characters (string)
  char name[] = "Giulia de Bem Rizzeri";
  char food[] = "pizza";

  // Boolean - precisa da biblioteca: #include <stdbool.h>
  printf("Hello %s\n", name);
  printf("Your favorite food is %s\n", food);

  bool isOnline = true;

  if(isOnline){
    printf("You are online");
  }
  else{
    printf("You are offline");
  }

  return 0;
}