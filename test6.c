//Write a C program that takes your full name, age, and address using the command
//prompt or scanf then prints all information in a nice appropriate format.
#include <stdio.h>


void main(){

int age;
char name[20];
char address[20];

printf("what is you name?:\n");
fgets(name,sizeof(name)/sizeof(name[0]),stdin);

printf("what is you age?: \n");
scanf("%d",&age);
getchar();

printf("what is u addres?:\n ");
fgets(address,sizeof(address)/sizeof(address[0]),stdin);



 // Display the collected information
    printf("\n--- Your Information ---\n");
    printf("Full Name: %s\n ",name);
    printf("\nAge: %d\n", age);
    printf("\nAddress: %s \n", address);


    //return 0;
}