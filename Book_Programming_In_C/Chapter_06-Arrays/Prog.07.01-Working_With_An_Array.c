//
// Prog. 7.1 - Working with an Array
//

#include <stdio.h>
#define SIZE 10

int main(void){

  int values[SIZE];
  // int index;

  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[3] = values[0] + values[5];      
  values[9] = values[5] / 10;  
  --values[2];

  for ( int index = 0; index < SIZE; index++)
    printf( "values[%i] = %i\n", index, values[index]);

}

