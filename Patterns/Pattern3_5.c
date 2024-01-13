/*
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
   ABCDEFEDCBA
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the size");
    scanf("%c", &ch);
    for(char i='A';i<=ch;i++)
    {
        for(int s=i;s<=ch;s++)
        printf(" ");
        for(char j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        for(int k=i-1;k>='A';k--)
        {
            printf("%c",k);
        }
        printf("\n");
    }

}