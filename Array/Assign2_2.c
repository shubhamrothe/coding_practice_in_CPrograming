/*
2) accept 5 nos. in an array. now accept one more number. Find out whether that number is there in that array.*/

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

    int num,count=0;
    printf("Enter a number");
    scanf("%d",&num);
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==num)
        count++;
        //scanf("%d", &arr[i]);
    }
    if(count==0)
    printf("number not found");
    else
     printf("number found %d times",count);
}