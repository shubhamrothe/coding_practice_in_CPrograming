/*
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
    for(int i=size;i>=1;i--)
    {
        for(int s=size;s>i;s--)
        printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}