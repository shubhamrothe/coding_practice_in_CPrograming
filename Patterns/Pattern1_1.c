/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        for (int s=size-i;s>0; s--)
            printf(" ");
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        
    }
}