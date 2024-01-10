/*
Q3. Accept a number from the user - if it is divisible by 3 print “three” , if it is divisible by 7 print “seven” and if it is divisible by both 3 & 7, print “three -seven”
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%3==0 && num%7==0)
    {
        printf("three-seven");
    }
    else if(num%3==0)
    {
        printf("three");
    }
    else if(num%7==0)
    {
        printf("seven");
    }
   else
    {
        printf("Number is not divisible by 3 or 7");
    }
    
}