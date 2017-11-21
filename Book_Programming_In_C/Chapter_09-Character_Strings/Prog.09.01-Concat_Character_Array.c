//
// Prog 9.1 Concat Character Array (not Strings)
//

#include <stdio.h>

void concat (char result[], const char str1[], int n1,
	                    const char str2[], int n2){

  // copy str1 to result
  for(int i = 0; i < n1; i++)
    result[i] = str1[i];

  // copy str2 to result
  for(int i = 0; i < n2; i++)
    result[n1 + i] = str2[i];
}

int main(void){
  
  void concat (char result[], const char str1[], int n1, const char str2[], int n2);

  const char s1[] = {'T', 'e', 's','t', ' '};
  const int  n1   = sizeof(s1) / sizeof(s1[0]);        // Calc size array allocated

  const char s2[] = {'w', 'o', 'r','k', 's', '.'};
  const int  n2   = sizeof(s2) / sizeof(s2[0]);        

  const int  n3 = n1 + n2;
  char       s3[n3];                                  // Uses variable size array - not 100% 
  concat(s3, s1, n1, s2, n2);                         // Compatible 

  for(int i = 0; i < n3; i++)
    printf("%c", s3[i]);
    
  printf("\n");

  return 0;
}




