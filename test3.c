#include <stdio.h>

int main() {
  // 1. For loop
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  // 2. While loop
  int i = 0;
  while (i < 10) {
    printf("%d\n", i);
    i++;
  }

  // 3. If statement
  int number = 10;
  if (number > 0) {
    printf("The number is positive.\n");
  } else if (number < 0) {
    printf("The number is negative.\n");
  } else {
    printf("The number is zero.\n");
  }

  // 4. If-then-else statement
  int grade = 80;
  if (grade >= 90) {
    printf("A\n");
  } else if (grade >= 80) {
    printf("B\n");
  } else if (grade >= 70) {
    printf("C\n");
  } else if (grade >= 60) {
    printf("D\n");
  } else {
    printf("F\n");
  }

  return 0;
}