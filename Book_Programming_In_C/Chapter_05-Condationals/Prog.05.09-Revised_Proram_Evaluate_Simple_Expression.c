//
// Prog 5.9 Evaluate a expression of form value op vaue
//

#include <stdio.h>

int main (void)
{

  float value1, value2;
  char op;

  printf("Type in your expression (value op value): ");
  scanf("%f %c %f", &value1, &op, &value2);

  float result;
  switch (op)
    {
    case '+':
      //  printf("%.2f\n", value1 + value2);
      result = value1 + value2;
      break;

    case '-':
      result = value1 - value2;
      break;

    case '*':
      result = value1 * value2;
      break;

    case '/':
      if (value2 == 0){	
	printf("Division by Zero\n");
	return 1;
      } else
	result = value1 / value2;
      break;

    default:
      printf("Unknown Operator\n");
      return 1;
      break;

    }

  printf("%.2f\n", result);

  return 0;

}

