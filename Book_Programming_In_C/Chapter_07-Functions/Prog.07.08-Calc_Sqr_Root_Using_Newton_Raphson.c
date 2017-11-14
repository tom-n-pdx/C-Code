//
// Prog 7.8 Calculate square root using Newton-Raphson method.
//

#include <stdio.h>
#include <assert.h>


// Try declaring function prototype for absolueValue before the function is used, and define function later.
float absoluteValue (float x);


//
// Function Calc square root number
// Improved function with type checking of inputs
// If x is negative, print a message and return -1
//
float squareRoot( float x){

  const float epsilon = .00001;
  float       guess   = 1.0;

  // Using assert to check value
  assert(x >= 0);


  //  if (x < 0 ){
  //    printf("Illegal negative argument to squareRoot\n");
  //    return(-1.0);
  //  }


  while( absoluteValue(guess * guess - x) >= epsilon )
    guess = (x / guess + guess ) / 2.0;

  return guess;
}


int main (void) {

  printf("Square Root 2    = %f\n", squareRoot(2.0));
  printf("Square Root 144  = %f\n", squareRoot(144.0));
  printf("Square Root 17.5 = %f\n", squareRoot(17.5));
  printf("Square Root -1   = %f\n", squareRoot(-1.0));

}

float absoluteValue(float x) {

  if (x < 0)
    x = -x;

  return x;
}

