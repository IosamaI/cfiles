//Write a C program that calculates the number of seconds in a given amount of hours, enter the number via command prompt.
#include <stdio.h>
//#include <stdlib.h>


int calculate_seconds_in_hours(int hours) {
   int b = hours * 3600;
   return b;
}

int main() {
  int hours;
  printf("Enter the number of hours: ");
  scanf("%d", &hours);

  int seconds = calculate_seconds_in_hours(hours);

  printf("The number of seconds in %d hours is %d\n", hours, seconds);

  return 0;
}
