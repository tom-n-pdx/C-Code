//
// Prog 3.1 Using Basic Data Types
//

#include <stdio.h>			                                  // os x - at /usr/include
#include <stdbool.h>                                               // can not find where really located

int main (void)
{
  int        integerVar = 100;
  float      floatingVar = 331.79;
  double     doubleVar = 8.44e+11;
  char       charVar = 'W';

  /* _Bool    boolVar = 0; */
  bool boolVar = true;			                          // Needs stdbool.h  included

  printf("intergerVar\t= %i\n", integerVar);
  printf("floatingVar\t= %f\n", floatingVar);
  printf("doubleVar\t= %e\n", doubleVar);
  printf("doubleVar\t= %g\n", doubleVar);
  printf("charVar\t\t= %c\n\n",     charVar);

  printf("boolVar\t\t= %i\n",     boolVar);
  printf("boolVar\t\t= %s\n",            boolVar ? "true" : "false");

  return 0;
}
