//
// Prog 5.2 Calculate Average of Set of Grades and count number of faling grades
//

#include <stdio.h>

int main (void)
{
  int numberOfGrades;
  printf( "How many grades will you enter? ");
  scanf( "%i", &numberOfGrades);

  int i, grade;
  int gradeTotal = 0;
  int failureCount = 0;

  for (i = 1; i <= numberOfGrades; i++){
    printf("Enter Grade #%i: ", i);
    scanf("%i", &grade);

    gradeTotal += grade;

    if (grade < 65 ){
      ++failureCount;
    }

  }

  float average = (float) gradeTotal / numberOfGrades;
  printf( "\nGrade Average = %.2f\n", average);

  printf( "Number of Failures = %i\n",failureCount);

   

  return 0;
}

