//
// Prog. 7.3 - Generate the first 15 Fibonacci Numbers
//

#include <stdio.h>

int main(void){

  int array_values[11] = {0, 1, 4, 9, 16, [10] = 100};

  for (int i = 5; i < 10; i++)
    array_values[i] = i * i;

  for (int i = 0; i < 11; i++)
    printf("array_values[%i] = %i\n", i, array_values[i]);

}

