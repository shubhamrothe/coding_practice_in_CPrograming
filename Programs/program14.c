/*
Q14. Accept a number from the user check if it is special number or not? Example: 145
1!=1
4!=1*2*3*4
5!=1*2*3*4*5
sum of the factorials is (1+24+120=145) */
#include<stdio.h>
int factorial(int rem);
int main()
{
    int num,rem,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
         rem=num%10;
         int x=factorial(rem); 
         sum=sum+x;
         num=num/10;
    }
    printf("sum=%d",sum);
}
int factorial(int rem)
{
    int fact=1;
    for(int i=rem;i>0;i--)
    {
        fact=fact*i;
    }
    //printf("%d",fact);
    return fact;
}
