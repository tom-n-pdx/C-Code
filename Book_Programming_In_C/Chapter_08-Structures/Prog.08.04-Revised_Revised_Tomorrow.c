//
// Prog 8.03 - Revised Calculate tomorrow's date
// Pass structure to a function
//

#include <stdio.h>
#include <stdbool.h>

struct date  dateUpdate( struct date d);
int numberOfDays(struct date d);

struct date {                                 // Make struct global
  int month;
  int day;
  int year;
};



int main(void){

  struct date  today, tomorrow;
  struct date  dateUpdate(struct date today);

  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  
  tomorrow = dateUpdate(today);

  printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);

  return 0;

}


//
// Calc tomorrows date
//
struct date dateUpdate(struct date today){
  
  struct date tomorrow;


  tomorrow = today;
  tomorrow.day++;                                     // Assume normal next day

  if ( today.day >= numberOfDays(today) ){
    tomorrow.day = 1;
    if (today.month == 12){                          // Next Year
      tomorrow.month = 1;
      tomorrow.year++; 
    } else {                                            // Next Month
      tomorrow.month++;
    }
  }

  return tomorrow;
}


//
// Find number of days in a month
//
int numberOfDays(struct date d){

  
  int days;
  bool isLeapYear (struct date d);
  const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
				 31, 31, 30, 31, 30, 31 }; 
  
  if ( d.month == 2 && isLeapYear(d) )
    days = 29;
  else 
    days = daysPerMonth[d.month - 1];

  return days;
  
}


//
// Is it a leap year?
//
bool isLeapYear (struct date d){


  bool leapYearFlag = false;

  if ( (d.year % 4 == 0 && d.year % 100 != 0) ||
       d.year % 400 == 0)
    leapYearFlag = true;

  return leapYearFlag;

}

