// Prog 4.3 Generate a table of Triangular Numbers

#include <stdio.h>

int main (void)
{
  int n; 

  printf("Table of Triangular Numbers\n\n");
  printf(" n\tSum from 1 to n\n");
  printf("------------------------\n");


  int triNum = 0;

  for( n = 1; n <= 20; n++){
    triNum += n;
    // printf(" %i\t%i\n", n, triNum);
    printf(" %2i\t%i\n", n, triNum);	     // Use %2i to line up
  }

}


