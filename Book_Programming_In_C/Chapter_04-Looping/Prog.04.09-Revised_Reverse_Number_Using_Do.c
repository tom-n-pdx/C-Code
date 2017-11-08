// Prog 4.9 Revised Reverse order digits with while loop
// Use do, fixes bug if number is zero, one executatiuon before exit loop

#include <stdio.h>

int main (void)
{
  int number;

  printf("Enter your number. \n");
  scanf("%i", &number);

  int right_digit;


  do {
    right_digit = number % 10;
    printf("%i", right_digit);
    number /= 10;
  }
  while ( number != 0 );

  printf("\n");
}




