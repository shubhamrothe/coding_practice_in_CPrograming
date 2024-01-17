/*
1)X and Y are two numbers. Write a C program to find out if Y is the power of X.
example:
input : 2 and 8
output: 8 is a power of 2

input 3 and 6
output 6 is not a power of 3
*/

#include<stdio.h>
void isPower(int a,int b);
int main()
{
    int X,Y;
    printf("Enter value of X and Y");
    scanf("%d%d",&X,&Y);
    isPower(X,Y);

}
void isPower(int a,int b)
{
    if(b==a*a*a)
   printf("%d is a power of %d ",b,a);
    else
    printf("%d is not a power of %d ",b,a);
}