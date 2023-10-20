#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    for(int i=0;i<argc;i++){
        printf("argv[%d]: %s\n",i,argv[i]);
    }

 int re = 1;
  for (int i =1; i<argc;i++){
    int number=atoi(argv[i]);
   re *= number;
   
  }
 printf("the num is: %d\n ",re);
  return 0;
}
