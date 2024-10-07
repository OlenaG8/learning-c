#include <stdio.h>

// Write a program that will receive the time from the user in the HH:MM:SS format and tell how many seconds have passed since
// the midnight 00:00:00. Additionally, count the sum of the digits in the resulting number.

int main(void) {

    int x, y, z;

    int secondsAfterMidnight = 0;
    int sumOfNumbers = 0;


    printf("Please provide the time in the given format HH:MM:SS ");
    scanf("%d:%d:%d", &x, &y, &z);

    secondsAfterMidnight = x * 3600 + y * 60 + z;

    // Below are 3 different methods:
    // sumOfNumbers = secondsAfterMidnight % 10 + (secondsAfterMidnight /10) % 10 + (secondsAfterMidnight /100) % 10 + (secondsAfterMidnight /1000) % 10 + (secondsAfterMidnight /10000) % 10 + (secondsAfterMidnight /100000) % 10 + (secondsAfterMidnight /1000000) % 10;
    
    // for (int i = 1; i < 100000; i *= 10) {
    //     sumOfNumbers = sumOfNumbers + (secondsAfterMidnight / i) % 10;
    // }

    int digits = secondsAfterMidnight;
    while (digits > 0) {
        sumOfNumbers += digits % 10;
        digits /= 10;
    }
    printf("After the midnight 00:00:00 passed %d seconds \n", secondsAfterMidnight);
    printf("The sum from the number %d is %d \n", secondsAfterMidnight, sumOfNumbers);

    return 0;
}