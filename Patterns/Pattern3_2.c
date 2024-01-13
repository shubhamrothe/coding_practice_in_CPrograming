/*
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
    for(char i=ch;i>='A';i--)
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