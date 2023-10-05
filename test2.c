#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check if the number of command-line arguments is correct
    if(argc != 2) {
        printf("Usage: %s <hours>\n", argv[0]);
        return 1;
    }

    // Convert the command-line argument to an integer
    int hours = atoi(argv[1]);

    // Check if the input is a positive integer
    if(hours <= 0) {
        printf("Please enter a positive integer for hours.\n");
        return 1;
    }

    // Calculate the number of seconds in the given hours
    int seconds = hours * 3600;

    // Display the result
    printf("%d hours is equal to %d seconds.\n", hours, seconds);

    return 0;
}

