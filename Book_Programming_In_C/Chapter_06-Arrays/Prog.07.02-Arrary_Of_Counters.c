//
// Prog. 7.2 - Array of Counters
//

#include <stdio.h>

int main(void){

  int ratingCounters[11];		     /* element 0 unused */

  for( int i = 1; i <= 10; ++i)
    ratingCounters[i] = 0;

  printf("Enter your responses\n");

  for(int i=1, response; i <= 10; i++){
    scanf("%i", &response);

    if ( response < 1 || response > 10)
      printf("Bad response: %i\n", response);
    else
      ++ratingCounters[response];
  }

  printf("\n\nRating    Number Responses\n");
  printf(    "------    ----------------\n");

  for (int i = 1; i <= 10; i++)
    printf( "%4i%14i\n\n", i, ratingCounters[i]);

}

