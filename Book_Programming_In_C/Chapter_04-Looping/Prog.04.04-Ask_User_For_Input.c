// Prog 4.3 Generate a table of Triangular Numbers

#include <stdio.h>

int main (void)
{
  int n, number; 

  printf("What Triangular Number do you want? ");
  scanf("%i", &number);

  int triNum = 0;
  for( n = 1; n <=number; n++){
    triNum += n;
  }

  printf("Triangular number %i is %i\n", number, triNum); 

}


