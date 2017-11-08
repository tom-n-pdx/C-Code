//
// Prog 5.7 CHaracterize a character
// Warning: Remember to NOT use " " with chars
//
// Ok - this depends upon system using ASCII internally. You should use islower(), isupper in ctype.h
//

#include <stdio.h>

int main (void)
{

  char c;
  printf("Enter a single character to be tested: ");
  scanf("%c",&c);

  if (  (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    printf("It's a alpabetic\n");
  else if (c >= '0' && c <= '9')
    printf("It's a numeric\n");
  else
    printf("It's a special character\n");

  return 0;
}

