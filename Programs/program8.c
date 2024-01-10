/*
Q8. Accept a number from the user and find the factorial of the number*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int fact=1;
    while(num>0)
    {
        fact=fact*num;
        num--;
    }
    printf("Factorial of given number =%d",fact);
}