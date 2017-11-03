//
// Prog 5.4Dterming if a Year is a Leap Year
//

#include <stdio.h>

int main (void)
{

  int year;
  printf("Enter the year to be tested: ");
  scanf("%i",&year);

//  int rem_4 = year % 4;
//  int rem_100 = year % 100;
//  int rem_400 = year % 400;

  if ( (year % 4 == 0 && year % 100 !=0) || year % 400 == 0)
    printf("It's a leapyear\n");
  else
    printf("Nope, it's not a leapyear\n");

  return 0;
}

