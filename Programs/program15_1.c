/*
Q.15 Accept a number and a single digit from the user. Then check the number of occurrences of that digit in the number.*/
#include<stdio.h>
int main()
{
    int num,digit,rem,count=0;
    printf("Enter a number and a digit");
    scanf("%d%d",&num,&digit);
    int originalnumber=num;
    while(num>0)
    {
        rem=num%10;
        if(rem==digit)
        {
            count++;
        }
        //sum=sum+(rem*rem*rem);
        num=num/10;
    }
    printf("No of occurences=%d\n",count);
   

}