/*
                  * 
                * * 
              * * * 
            * * * *
                            */
#include<stdio.h>
int main()
{   int size;
    printf("Enter a size");
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
    {
        for(int s=i;s<size;s++)
        printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}                     