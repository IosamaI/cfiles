#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numDigits(int input);

int main(int argc, char *argv[]){
    int number, remainder, sum, temp, count = 0;
    
    for (number = 1; count < 15; ++number) {
        temp = number;
        int n = numDigits(number);
        sum = 0;
        while (temp != 0) {
            remainder = temp % 10;
            int powResult = 1;
            for (int i = 0; i < n; ++i) {
                powResult *= remainder;
            }
            sum += powResult;
            temp /= 10;
        }
        
        if (sum == number) {
            printf("Armstrong number %d: %d\n", count + 1, number);
            ++count;
        }
    }
    return 0;
}

int numDigits(int input) {
    int count = 0;
    while (input != 0) {
        input /= 10;
        ++count;
    }
    return count;
}
