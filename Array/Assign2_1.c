/*
1) accept 5 nos. in an array and sort them in ascending order.*/
#include <stdio.h>
int main()
{

    int arr[5];
    // int arr[3];
    printf("Enter 5 values in array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

        bubbleSort(arr, 5);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


}
    
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void bubbleSort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
        }
    }