//
// Prog. 7.7 - Convert a positive number to another base
//

#include <stdio.h>

int main(void){

  const char baseDigits[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

  int convertedNumber[64];
  // int nextDigit, index = 0;


  // Get a number and the base

  long int  numberToConvert;
  printf("Number to be converted? ");
  scanf("%ld", &numberToConvert);

  int base;
  printf("Base? ");
  scanf("%i", &base);

  // Convert to indicated base
  int index = 0;
  do {
    convertedNumber[index++] = numberToConvert % base;
    numberToConvert /= base;
  }
  while (numberToConvert > 0);

  // Display in reverse order
  printf("Converted number = ");

  for (--index; index >= 0; index--)
    printf("%c", baseDigits[convertedNumber[index]]);

  printf("\n");

  // Test generate error
  // baseDigits[15] = 'f';
  
}

