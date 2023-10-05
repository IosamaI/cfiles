#include <stdio.h>

int main() {
    int numbers[3];
    int max, min, sum = 0;

    // Taking input for A, B, and C
    printf("Enter three integers (A, B, C) separated by space: ");
    scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]);

    // Initializing max and min with the first number
    max = min = numbers[0];

    // Using for loop to find max, min, and calculate sum
    for(int i = 0; i < 3; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
        sum += numbers[i];
    }

    // Calculating average
    float avg = sum / 3.0;

    // Displaying results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %.2f\n", avg);

    return 0;
}

