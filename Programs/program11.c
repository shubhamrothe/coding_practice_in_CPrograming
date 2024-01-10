/*
Q11. Accept a number from the user and reverse it. [ assume 3 digit no.]*/
#include<stdio.h>
int main()
{
    int num,reversedNum=0;
    printf("Enter a  3 digit number");
    scanf("%d",&num);
    while (num > 0) {
        int rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num /= 10;
    }
    printf("Reversed number is %d",reversedNum);
}