//
// Prog 7.12 Sort An Array
//
#include <stdio.h>


//
// Function Sorts the Array
//


void sort(int array[], int length){

  for (int i=0; i < length - 1; i++)
    for (int j=i+1; j < length; j++)
      if ( array[i] > array[j]){
	int temp = array[i];
	array[i]   = array[j];
	array[j]   = temp;
      }
}



int main (void) {

  int array1[5] = { 1, 7, 2, 15, 2 };
  
  void sort(int array[], int length);                               /* Function Defination */

  printf ("The array before the sort:\n");
  for(int i=0; i<5; ++i) 
    printf ("%i ", array1[i]);
  printf("\n");

  sort(array1, 5);

  printf ("\nThe array after the sort:\n");
  for(int i=0; i<5; ++i) 
    printf ("%i ", array1[i]);
  printf("\n");



}

