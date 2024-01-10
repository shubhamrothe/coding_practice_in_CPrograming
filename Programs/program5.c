/*
Q5. Accept a number from the user check if it is odd or even number (Do not use % operator)*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        num=num-2;
    }
    if(num==0)
    printf("It is even number");
    else
     printf("It is odd number");
    
}