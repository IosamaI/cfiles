#include <stdio.h>

int main(){

    char name[20];
    int age;
    char address[20];

    
    printf("Enter your full name: ");
    fgets(name, 20, stdin);  // Using fgets to capture spaces in the name

    printf("Enter your age: ");
    scanf("%d", &age);

     // Clear the input buffer
        while(getchar()!='\n');
 

    printf("Enter your address: ");
    fgets(address, 20, stdin); // Using fgets to capture spaces in the address

    // Output in a formatted manner
    printf("\n--- Information ---\n");
    printf("Name   : %s\n", name);   
    printf("Age    : %d\n", age);
    printf("Address: %s\n", address);




return 0;
}
