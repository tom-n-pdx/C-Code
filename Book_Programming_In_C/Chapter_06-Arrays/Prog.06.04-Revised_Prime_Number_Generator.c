//
// Prog. 7.3 - Generate the first 15 Fibonacci Numbers
//

#include <stdio.h>
#include <stdbool.h>

#define FIND_NUM 100

int main(void){

  int primes[FIND_NUM] = {2 , 3};
  int primeIndex = 2;

  // Calc Primes - count by odd's
  for(int p = 5; primeIndex < FIND_NUM && p <= 5000; p = p + 2){
    bool isPrime = true;

    // Check all earlier primes
    for(int i = 1; isPrime && p / primes[i] >= primes[i]; i++) // Checks up to square rrot value
      if (p % primes[i] == 0)
	isPrime = false;
    
    // Add prime found
    if (isPrime){
      primes[primeIndex] = p;
      ++primeIndex;
    }
  }
    
  // Print Numbers
  for (int i = 0; i < primeIndex; i++){
    printf("%4i", primes[i]);

    if ((i+1) % 10 == 0)
      printf("\n");
  }

  printf("\n");

}

