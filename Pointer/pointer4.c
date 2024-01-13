//pointer increment
#include<stdio.h>
int main()
{
    int num1=50;
int *ptr1=&num1; // initialization of a pointer

printf("%d\n",*ptr1);

ptr1++;  // pointer arithmetic
}