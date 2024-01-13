/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 
1 2 
1 
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
                printf("%d",j);
                printf(" ");
            }
            printf("\n");
        
    }
/*
1 2 3 
1 2 
1 
*/
    for (int i = size-1; i >=1; i--)
    {
            for (int j = 1; j <= i; j++)
            {
                printf("%d",j);
                printf(" ");
            }
            printf("\n");
        
    }
}