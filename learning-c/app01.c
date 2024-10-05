#include <stdio.h>
#include <stdbool.h>

//Write a program which will check if the number is positive or negative.

void myFunction( int myNum) {
    if (myNum > 0) {
        printf("%d is a positive number.\n", myNum);
    } else if (myNum == 0) {
        printf("%d is zero.\n", myNum);
    } else if (myNum < 0) {
        printf("%d is a negative number.\n", myNum);
    }
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {

    int myNum;
    int result;

    while (true) {
        printf("\nType a random number: ");
        result = scanf("%d", &myNum);

        if (result != 1) {
            printf("Invalid input. Please enter an integer.\n");
            clearInputBuffer(); 
        } else {
            myFunction(myNum);
        }
    }

    return 0;
}