#include <stdio.h>

int main() 
{
    int array [100], numberOfElements, counter, secondCounter, temp, flag = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Enter %d integers:\n", numberOfElements);

    for (counter = 0; counter < numberOfElements; counter++) {
        scanf("%d", &array[counter]);
    }

    for (counter = 0; counter < (numberOfElements - 1); counter++) {
        temp = array[counter];
        for (secondCounter = (counter - 1); secondCounter >= 0; secondCounter--) {
            if (array[secondCounter] > temp) {  
                array[secondCounter + 1] = array[secondCounter]
                flag = 1;
            } else {
                break;
            }
        }

        if (flag) {
            array[secondCounter + 1] = temp;
        }
    }

    printf("The sorted list in ascending order:\n");

    for (counter = 0; counter < (numberOfElements - 1); counter++) {
        printf("%d\n", array[counter]);
    }

    return 0;
}
