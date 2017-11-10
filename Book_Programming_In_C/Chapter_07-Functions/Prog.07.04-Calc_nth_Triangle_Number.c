//
// Prog 7.4Calc nth Traiangle Number
//

#include <stdio.h>

void calculateTriangularNumber(int n) {

  int i, triangularNumber = 0;

  for (i = 1; i <= n; i++)
    triangularNumber += i;

  printf("Triangulat number %i is %i\n", n, triangularNumber);
}


int main (void) {

  calculateTriangularNumber(10);
  calculateTriangularNumber(20);
  calculateTriangularNumber(50);

}

