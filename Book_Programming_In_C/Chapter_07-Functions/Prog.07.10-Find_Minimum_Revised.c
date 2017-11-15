//
// Prog 7.10 Find Minimum - Pass array size as paramater
//

#include <stdio.h>


//
// Function Find Minimum in Array
// Version 2 - Variable size array
//
int minimum(int values[], int numberOfElements){

  int minValue = values[0];

  for (int i = 1; i < numberOfElements; i++){
    if (values[i] < minValue)
      minValue = values[i];
  }

  return minValue;
}


int main (void) {

  int array1[5] = { 157, -28, -37, 26, 10 };
  int array2[7] = {  12,    45,     1, 10,   5,  3, 22 };
  
  int minimum(int values[], int numberOfElements);		     /* Function Defination */

  printf("Min array1 = %i\n", minimum(array1, 5));
  printf("Min array1 = %i\n", minimum(array2, 7));


}

