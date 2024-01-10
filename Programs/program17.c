/*
Q17. Accept a number from the user and print the next 5 numbers.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int count=5;
    printf("next 5 numbers after %d :\n",num);
    for(int i=0;i<count;i++)
    {
        num++;
        printf("%d\t",num);
    }
}