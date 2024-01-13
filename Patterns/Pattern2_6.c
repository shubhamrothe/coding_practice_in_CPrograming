/*
5 4 3 2 1 
5 4 3 2
5 4 3
5 4
5
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size");
    scanf("%d", &size);
    for(int i=1;i<=size;i++)
    {
        for(int j=size;j>=i;j--)
        {
            printf("%d",j);
            printf(" ");
        }
         printf("\n");
    }
}