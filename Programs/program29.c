/*
2)Write C program to remove duplicate values from array and create new array with all unique values.
Example: 
Input : {1,2,3,1,4,5,6,1,2} 
Output: {1,2,3,4,5,6}*/
#include <stdio.h>

int main() 
{
    int originalArray[] = {1, 2, 3, 1, 4, 5, 6, 1, 2};
    int n = sizeof(originalArray) / sizeof(originalArray[0]);

    // Create a new array to store unique elements
    int newArray[n];
    int newSize = 0;

    // Iterate through the original array
    for (int i = 0; i < n; i++) 
    {
        // Check if the current element is not already in the new array
        int isUnique = 1;
        for (int j = 0; j < newSize; j++) 
        {
            if (originalArray[i] == newArray[j]) {
                isUnique = 0;
                break;
            }
        }

        // If the element is unique, add it to the new array
        if (isUnique) {
            newArray[newSize] = originalArray[i];
            newSize++;
        }
    }

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", originalArray[i]);
    }

    // Display the new array with unique elements
    printf("\nNew Array with Unique Elements: ");
    for (int i = 0; i < newSize; i++) 
    {
        printf("%d ", newArray[i]);
    }

    return 0;
}
