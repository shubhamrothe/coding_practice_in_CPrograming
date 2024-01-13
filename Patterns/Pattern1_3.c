/*
    * 
   * * 
  * * * 
 * * * * 
  * * * 
   * * 
    * 
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    int i,j,s;
    for(i=1;i<=size;i++)
    {
        for(s=size;s>i;s--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

   /*    * * * 
          * * 
           *          */

    for(i=size-1;i>=1;i--)
    {
        for(s=size;s>i;s--)
        printf(" ");
        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}