/*
5) function to accept int array elements and display them.

(Hint:- create array in main() function and pass its elements one by one to a function and print)*/

#include<stdio.h>

void printArray(int arr1[],int x);
int main()
{
    int size;
    printf("Enter a size of array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr,size);
}
 void printArray(int arr1[],int x)
 {
    printf("Printing an array elements \n");
    for(int i=0;i<x;i++)
    {
        printf("%d\t",arr1[i]);
    }
 }