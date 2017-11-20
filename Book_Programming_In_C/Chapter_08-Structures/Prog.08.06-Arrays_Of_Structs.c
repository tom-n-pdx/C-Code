//
// Prog 8.06 - Arrays of Structs
//

#include <stdio.h>

struct time {                                 // Make struct global
  int hour;
  int minutes;
  int seconds;
};


// Complex Struct

struct date {                                 // Make struct global
  int month;
  int day;
  int year;
};

struct dateAndTime{
  struct date sdate;
  struct time stime;
};

// example usage



int main(void){

  struct time  timeUpdate(struct time now);
  struct time testTimes[5] = 
    { { 11, 59, 59}, {12,  0,  0},
      {  1, 29, 59}, {23, 59, 59},
      { 19, 12, 27}};


  // test complex struct
  struct dateAndTime event;
  event.sdate.month = 10;
  event.sdate.month++;

  int i;

  for(i = 0; i < 5; i++){
      printf("Time is %.2i:%.2i:%.2i. ", testTimes[i].hour, testTimes[i].minutes, 
	     testTimes[i].seconds);
      struct time nextTime = timeUpdate(testTimes[i]);
      printf("one second time is... %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, 
	     nextTime.seconds);


  }

  return 0;

}


//
// Update time
//

struct time timeUpdate(struct time now){
  now.seconds++;

  if (now.seconds == 60){
    now.seconds = 0;
    now.minutes++;
  }

  if (now.minutes == 60){
    now.minutes = 0;
    now.hour++;
  }

  if (now.hour == 24)
    now.hour = 0;
  
  return now;
}


