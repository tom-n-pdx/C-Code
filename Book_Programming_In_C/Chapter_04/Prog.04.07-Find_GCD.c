// Prog 4.7 Find GCD with while loop

#include <stdio.h>

int main (void)
{
  int u, v;

  printf("Pease type two non-negative integers.\n");
  scanf("%i%i", &u, &v);

  
  int temp;
  while( v!= 0){
    temp = u % v;
    u = v;
    v = temp;
  }

  printf("Their GCD is %i\n", u);

}




