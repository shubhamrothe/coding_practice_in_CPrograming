/*
    * * * *
      * * *
        * *
          *   
*/

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size");
    scanf("%d", &size);
    for(int i=1;i<=size;i++)
    {
         for(int s=1;s<=i;s++)
         printf(" ");
        for(int j=size;j>=i;j--)
        {
            printf("*");
        }
         printf("\n");
    }
}