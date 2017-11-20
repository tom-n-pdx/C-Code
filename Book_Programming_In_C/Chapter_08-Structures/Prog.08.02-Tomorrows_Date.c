//
// Prog 8.02 - Calculate tomorrow's date
//

#include <stdio.h>

int main(void){

  struct date {
    int month;
    int day;
    int year;
  };

  struct date  today, tomorrow;
  
  const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
				 31, 31, 30, 31, 30, 31 }; 


  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  

  tomorrow = today;
  tomorrow.day++;                                     // Assume normal next day

  if ( today.day >= daysPerMonth[today.month - 1] ){
    tomorrow.day = 1;
    if (today.month == 12){                          // Next Year
      tomorrow.month = 1;
      tomorrow.year++; 
    } else {                                            // Next Month
      tomorrow.month++;
    }
  }


  printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);

  return 0;

}

