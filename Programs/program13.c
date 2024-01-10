/*
Q13. Accept a number from the user and print a table for that number*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }

}