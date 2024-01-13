/*
1) write a function , which will take 2 numbers and return their sum.*/
#include<stdio.h>

void Add(int a,int b);
int main()
{
    int a,b;
    

    printf("Enter value of a and b");
    scanf("%d%d",&a,&b);
    Add(a,b);
}
void Add(int x, int y)
{
    int sum;
    sum =x+y;
    printf("summation=%d",sum);
}