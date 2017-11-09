//
// Prog. 7.3 - Generate the first 15 Fibonacci Numbers
//

#include <stdio.h>

int main(void){

  int Fib[15] = {0, 1}; // First two defiend by defination

  /* Fib[0] = 0; */
  /* Fib[1] = 1; */


  // Calc Numbers
  for( int i = 2; i < 15; i++)
    Fib[i] = Fib[i-2] + Fib[i-1];

  // Print Numbers
  for (int i = 0; i < 15; i++)
    printf("%i\n", Fib[i]);

}

