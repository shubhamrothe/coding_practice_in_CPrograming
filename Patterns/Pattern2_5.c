/*
1 
2 2 
3 3 3 
4 4 4 4 
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
            for (int j = 1; j <= i; j++)
            {
                printf("%d",i);
                printf(" ");
            }
            printf("\n");
        
    }
}