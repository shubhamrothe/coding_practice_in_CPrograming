/*
 accept a name and display whether its initial is small case , upper case or not an alphabet.*/
#include<stdio.h>

int main()
{
    char name[20];
    puts("Enter a string");
    gets(name);
   // printf("%s",name);
   puts(name);
   if(name[0]>=65 && name[0]<=90)
   puts("capital");
   else if(name[0]>=97 && name[0]<=122)
   puts("small");
   else
   printf("not alphabate");
}