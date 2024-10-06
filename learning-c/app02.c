#include <stdio.h>

//Write an algorithm to reverse a number:

int main(void) {

    int myNum;
    int reversedNum = 0;

    printf("Enter a number you wish to reverse: ");
    scanf("%d", &myNum);

    while (myNum) {
    reversedNum = reversedNum * 10 + myNum % 10;
    myNum /= 10;
    printf("%d \n", myNum);
    }

    printf("%d", reversedNum);
    return 0;

}