//
// Prog 7.6 Function to ginf GCD and return results
//

#include <stdio.h>

int gcd (int u, int v) {

  while( v != 0 ) {
    int temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}



int main (void) {

  int result = gcd (150, 35);
  printf("The gcd of 150 and 35 is %i\n", result);

  result = gcd (1026, 405);
  printf("The gcd of 1026 and 405 is %i\n", result);

  printf("The gcd of 83 and 240 is %i\n", gcd (83, 240));

}
