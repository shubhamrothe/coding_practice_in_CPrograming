/*
a
ab
abc
*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the size");
    scanf("%c", &ch);
    for(char i='a';i<=ch;i++)
    {
        for(char j='a';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }

}