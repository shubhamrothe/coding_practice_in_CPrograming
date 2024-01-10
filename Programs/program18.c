/*
Q18. Accept a number from the user and print those many numbers after the number.*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int count=num;
    printf("next %d numbers after %d :\n",num,num);
    for(int i=0;i<count;i++)
    {
        num++;
        printf("%d\t",num);
    }
}