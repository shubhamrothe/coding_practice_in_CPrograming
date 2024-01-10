/*
Q.15 Accept a number from the user and check if it is an Armstrong number or not ? Example: 153
1 cube =1
5 cube =125
3 cube = 27
sum of the cubes is (1+27+125=153)*/
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    int originalnumber=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    printf("sum=%d\n",sum);
    if(sum==originalnumber)
    printf("Entered number is amstrong");
    else
    printf("Entered number is not amstrong");

}