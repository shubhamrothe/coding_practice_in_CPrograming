/*
Q16. Go on accepting numbers from the user till the user enters 0 and calculate the sum of these numbers.*/
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Accept numbers from user till he/she enters 0");
    while(n!=0)
    {
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("sum=%d",sum);
}
