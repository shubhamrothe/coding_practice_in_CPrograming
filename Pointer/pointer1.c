#include <stdio.h>
int main()
{
    int num1 = 20;
    int *ptr1;
    ptr1 = &num1;

    printf("%d\n", num1);

    printf("%d\n", *ptr1);
}