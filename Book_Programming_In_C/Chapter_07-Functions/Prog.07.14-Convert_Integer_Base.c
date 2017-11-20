//
// Prog 7.14 Program to convert a positive integer to another base
// Use global vars to communicate
//
// prefix global with 'g'

#include <stdio.h>

int       gConvertedNumber[64];
long int  gNumberToConvert;
int       gBase;
int       gDigit = 0;


//
// Read in values
//
void getNumberAndBase (void){

  printf("Number to be converted? ");
  scanf("%li", &gNumberToConvert);


  printf("Base? ");
  scanf("%i", &gBase);

  if (gBase < 2 || gBase > 16){
    printf("Bad Base - must be between 2 and 16\n");
    gBase = 10;
  }

}
 

//
// Convert the number
//
void convertNumber(void){
  do {
    gConvertedNumber[gDigit] = gNumberToConvert % gBase;
    gDigit++;
    gNumberToConvert /= gBase;
  }
  while (gNumberToConvert != 0);
}

//
// Display Number
//
void displayConvertedNumber(void){

  const char baseDigits[16] = 
    { '0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

  printf("Converted Number = ");

  for (--gDigit; gDigit >= 0; gDigit--){
    int nextDigit = gConvertedNumber[gDigit];
    printf("%c", baseDigits[nextDigit]);
  }

  printf("\n");
}




int main (void) {


  void genNumberAndBase(void);
  void convertNumber(void);
  void displayConvertedNUmber(void);

  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();

  return 0;
}




