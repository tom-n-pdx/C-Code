//
// Prog 7.9 Find Minimum.
//

#include <stdio.h>
#define SIZE 10


//
// Function Find Minimum in Array
// Version 1 - Fixed Size Array
//
int minimum(int values[SIZE]){

  int minValue = values[0];

  for (int i = 1; i < SIZE; i++){
    if (values[i] < minValue)
      minValue = values[i];
  }

  return minValue;
}


int main (void) {

  int scores[SIZE] = {69, 97, 65, 87, 69, 86, 78, 67, 92, 90}; 
  int minimum(int values[SIZE]);		     /* Function Defination */

  int minScore = minimum (scores);

  printf("Min Score = %i\n", minScore);


}

