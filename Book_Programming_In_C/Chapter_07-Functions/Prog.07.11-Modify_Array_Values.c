//
// Prog 7.11 Modify values of an array
//
#include <stdio.h>


//
// Function modifys values of array
// Arrays passed by refrence not by value
//

void multBy2(float array[], int length){

  for (int i=0; i < length; i++)
    array[i] *= 2.0;

}


int main (void) {

  float farray1[4] = { 1.2f, -3.7f, 6.2f, 8.55f };
  
  void multBy2(float array[], int length);                               /* Function Defination */

  multBy2 (farray1, 4);

  for(int i = 0; i < 4; i++)
    printf("Float array [%i]  = %f\n", i, farray1[i]);


}

