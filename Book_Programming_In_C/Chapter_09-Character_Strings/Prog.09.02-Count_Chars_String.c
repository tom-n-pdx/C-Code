//
// Prog 9.2 Count the number of characters in a string
//

#include <stdio.h>

int stringLength(const char string[]){

  int count = 0;

  //while (string[count] != '\0')
  //  count++;

  for(count = 0; string[count] != '\0'; count++);

  return count;
}

int main(void){
  
  int stringLength(const char string[]);
  const char  bad[]   = {'a', 'b', 'c'};

  const char  word1[] = {'a', 's', 't', 'e', 'r', '\0'};
  const char  word2[] = {'a', 't', '\0'};
  const char  word3[] = {'a', 'w', 'e', '\0'};

  const char  word4[7] = "String";

 
  printf("Good: %i %i %i %i\n", stringLength(word1), stringLength(word2), stringLength(word3),
	 stringLength(word4));

  // Try a string that is not null terminated - on Ubuntu with gcc works OK
  // Maybe gcc puts a extra null after array?
  printf("Bad:  %i\n", stringLength(bad));

  return 0;
}




