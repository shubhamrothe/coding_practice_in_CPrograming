/*
Q4. Accept a number from the user and check if it is odd or even number (Hint: use % operator)*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%2==0)
    printf("It is even number");
    else
     printf("It is odd number");
    
}