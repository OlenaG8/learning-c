#include <stdio.h>

//Create a program that will find the lowest age among defferent ages

int main(void) {

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70, 5};
    int length = sizeof(ages) / sizeof(ages[0]);

    int minAge = ages[0];

    for(int i=0; i< length; i++) {
        if (ages[i] < minAge) {
            minAge = ages[i];
        }
    }

    printf("%d", minAge);

    return 0;
}