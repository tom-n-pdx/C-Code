//
// Prog. 7.8 - Generate the first 15 Fibonacci Numbers using variable length arrays
//

#include <stdio.h>

int main(void){

  int numFibs;
  printf("How many Fibonacci numbers do you want (1 - 75)? ");
  scanf("%i", &numFibs);

  if (numFibs < 1 || numFibs > 75){
    printf("Bad number, sorry\n");
    return 1;
  }

  // Can not initialize variable length arrays in initilization
  unsigned long long int Fib[numFibs];
  Fib[0] = 0; // First two defiend by defination
  Fib[1] = 1;


  // Calc Numbers
  for(int i = 2; i < numFibs; i++)
    Fib[i] = Fib[i-2] + Fib[i-1];

  // Print Numbers
  for (int i = 0; i < numFibs; i++)
    printf("%llu, ", Fib[i]);

  printf("\n");
}

