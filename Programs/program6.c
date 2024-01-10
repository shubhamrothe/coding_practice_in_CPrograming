/*
Q6. Accept principal amount, rate of interest and years of investment then find the simple interest interest=(principle_amt*rate*years)/100;*/
#include<stdio.h>
int main()
{
    int principal_amount,years;
    float rate_of_interest;
    printf("Enter the values of principal amount,rate of interest and years of investment");
    scanf("%d%f%d",&principal_amount,&rate_of_interest,&years);

    float simple_interest=(principal_amount*rate_of_interest*years)/100;
    printf("Simple interest = %0.2f",simple_interest);
}