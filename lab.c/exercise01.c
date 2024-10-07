#include <stdio.h>
#include <stdbool.h>

//Write a program that will perform calculations on 2 numbers provided by the user: sum, difference and multiplication.

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void invalidInput() {
    printf("Invalid input. Please enter an integer.\n");
    clearInputBuffer(); 
}

int main(void) {

    int num1, num2;
    int result1, result2;

    while (true) {
        printf("Please enter the first number: ");
        result1 = scanf("%d", &num1);
        printf("Please enter the second number: ");
        result2 = scanf("%d", &num2);;

        if (result1 != 1 || result2 != 1) {
            invalidInput();
        } else {
            int sum = num1 + num2;
            int diff = num1 - num2;
            int multip = num1 * num2;
            printf("The sum is: %d \nThe difference is: %d \nThe multiplication is: %d \n", sum, diff, multip);
        }
    }

    return 0;
}