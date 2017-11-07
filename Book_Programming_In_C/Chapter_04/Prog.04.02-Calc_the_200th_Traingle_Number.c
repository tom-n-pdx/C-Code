// Prog 4.=2 Calculating 200th Triangular NUmber

#include <stdio.h>

int main ()
{
  int n; 

  int triNum = 0;

  for( n = 1; n <= 200; n = n + 1){
    triNum += n;
  }

  printf("200th Tringular Number is %i\n", triNum);

}


