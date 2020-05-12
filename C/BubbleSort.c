#include <stdio.h>

int main() 
{
    int array [100], numberOfElements, counter, secondCounter, swap;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Enter %d integers:\n", numberOfElements);

    for (counter = 0; counter < numberOfElements; counter++) {
        scanf("%d", &array[counter]);
    }

    for (counter = 0; counter < (numberOfElements - 1); counter++) {
        for (secondCounter = 0; secondCounter < (numberOfElements - counter - 1) secondCounter++) {
            if (array[secondCounter] > array[secondCounter + 1]) {  // decreasing order would use <
                swap = array[secondCounter];
                array[secondCounter] = array [secondCounter + 1];
                array[secondCounter + 1] = swap;
            }
        }
    }

    printf("The sorted list in ascending order:\n");

    for (counter = 0; counter < numberOfElements; counter++) {
        printf("%d", array[counter]);
    }

    return 0;
}
