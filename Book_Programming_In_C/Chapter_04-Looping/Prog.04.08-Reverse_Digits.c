// Prog 4.8 Reverse order digits with while loop
// Bug - if number is zero it's not printed

#include <stdio.h>

int main (void)
{
  int number;

  printf("Enter your number. \n");
  scanf("%i", &number);

  int right_digit;

  while( number != 0){
    right_digit = number % 10;
    printf("%i", right_digit);
    // number = number / 10;
    number /= 10;
  }

  printf("\n");
}




