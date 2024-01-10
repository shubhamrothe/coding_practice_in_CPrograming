/*
Q9. Accept 10 numbers from the user and calculate their sum. (Do not use array)*/
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the 10 numbers");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("Summation=%d",sum);
}