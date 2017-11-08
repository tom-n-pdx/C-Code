//
// Prog 5.3 Determine if a number is even or odd
//

#include <stdio.h>

int main (void)
{
  int number;
  printf("Enter your number to be tested: ");
  scanf("%i",&number);

  int remainder = number % 2;

  if ( remainder == 0){
    printf("The number is even.\n");
  }

  if ( remainder != 0){
    printf("The number is odd.\n");
  }

  return 0;
}

