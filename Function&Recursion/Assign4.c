/*
4)function to accept a character and return toggle of it.*/
#include<stdio.h>

char Toggle( char ch);
int main()
{   
    char ch;
    char toggle;
    printf("Enter a characture");
    scanf("%c",&ch);
     toggle=Toggle(ch);
     if(toggle==0)
     printf("Enter a valid characture");
     else
    printf("Toggle of %c = %c",ch,toggle);
 
}
char Toggle (char ch)
{
    char toggle;
    if(ch>=65 && ch<=90)
    {
       toggle= ch+32;
       return toggle;
    }
    else if(ch>=97 && ch<=122)
    {
       toggle= ch-32;
        return toggle;
    }
    else
    return 0;
}