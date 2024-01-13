/*
7) function which returns some number.*/
#include<stdio.h>

int square(int num);
int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    int result=square(number);
    printf("Square of a number %d = %d",number,result);
}
int square(int num)
{
    return num*num;
}