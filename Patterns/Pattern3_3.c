/*
         A
        A B
       A B C
      A B C D
     A B C D E
    A B C D E F 
     A B C D E 
      A B C D 
       A B C 
        A B 
         A 
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
            printf(" ");
        }
        printf("\n");
    }
    for(char i=ch-1;i>='A';i--)
    {
        for(int s=i;s<=ch;s++)
        printf(" ");
        for(char j='A';j<=i;j++)
        {
            printf("%c",j);
            printf(" ");
        }
        printf("\n");
    }
}   