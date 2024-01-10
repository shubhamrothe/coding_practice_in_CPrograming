/*
Write a program to print every integer between 1 and n divisible by m. Also report whether the number that is divisible by m is even or odd.*/
#include <stdio.h>
int main()
{
    int m, n;
    //int num[n];
    printf("Enter the value of m and n");
    scanf("%d%d", &m, &n);
    for (int i = 1; i < n; i++)
    {
        if (i % m == 0)
        {
            if (i % 2 == 0)
                printf("%d is even\n",i);
            else
                printf("%d is odd\n",i);
        }
    }
}