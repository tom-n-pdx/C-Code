// Prog 3.2 Using Arithmetic Operators

#include <stdio.h>

int main (void)
{
  int a = 100;
  int b = 2;
  int c = 25;
  int d = 4;


  int result = a - b;			     // Subtraction
  printf ("a - b = %i\n", result);

  result = b * c;			     // Multiplication
  printf("b * c = %i\n", result);

  result = a / c;			     // Division
  printf("a / c = %i\n", result);

  result = a + b * c;			     // Precedence
  printf("a + b * c = %i\n", result);

