// Prog 4.5 Nested for loops to generate 5 values

#include <stdio.h>

int main (void)
{
  int n, number; 

  int i = 5;
  for( ; i > 0; i--){

    printf("What Triangular Number do you want? ");
    scanf("%i", &number);

    int triNum = 0;
    for( n = 1; n <=number; n++){
      triNum += n;
    }

    printf("Triangular number %i is %i\n\n", number, triNum); 
  }

}


