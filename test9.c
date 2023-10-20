//Write a C program for 3 inputs ( A , B , C ) and find the maximum and the minimum 
//numbers plus calculate the average ( max , min , avg ) using for-loop and scanf.

#include <stdio.h>

int main (){
 int a,b,c;
 int max;
 int min;
 
printf("1-write number: ");
scanf("%d",&a);
getchar();

printf("2-write number: ");
scanf("%d",&b);

printf("2-write number: ");
scanf("%d",&c);

max=min=a;

 for (int i=0;i<3;i++){
  if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
 
 }
 int avg = (a+b+c)/3;
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %d\n", avg);

    return 0;
}