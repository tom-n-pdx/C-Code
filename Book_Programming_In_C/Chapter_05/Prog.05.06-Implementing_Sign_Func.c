//
// Prog 5.6 Implementing the Sign Function
//

#include <stdio.h>

int main (void)
{

  int number;
  printf("Enter the number to be tested: ");
  scanf("%i",&number);

  int sign;
  if (number < 0)
    sign = -1;
  else if (number == 0)
    sign = 0;
  else
    sign = 1;

  printf("Sign = %i\n", sign);

  return 0;
}

