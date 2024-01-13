/*
2) write a function , which will take a number and print whether it is negative,positive or zero.*/
#include<stdio.h>

int check(int num);
int main()
{
    int num;
    printf("Enter value of a number");
    scanf("%d",&num );
   int var= check(num);
   if(var==1)
   printf("Entered number is positive");
   if(var==-1)
   printf("Entered number is negative");
   if(var==0)
   printf("Entered number is zero");
}
int check(int x)
{
    if(x>0)
    return 1;
    if(x<0)
    return -1;
    else
    return 0;
}