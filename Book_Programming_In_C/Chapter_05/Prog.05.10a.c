//
// Prog 5.10 Generate Table of Primes
//

#include <stdio.h>
#include <stdbool.h>

int main (void)
{

  int p, d;
  bool isPrime;

  for (p=2; p <= 5000; p++){
    isPrime = true;

    for (d=2; d < p; d++)
      if ( p % d == 0 )
	isPrime= false;

    if ( isPrime )
      printf("%i ", p);
    

  }

  printf("\n");
  return 0;

}

