//take a string input from user using %c
#include<stdio.h>

int main()
{
   char str[100];
   char ch;
   int i=0;

   while(ch!='\n')
   {
    scanf("%c",&ch);
    str[i]=ch;
    i++;
   }
    str[i]='\0';//it is required to add '\0' at the end bez using %c compiler doesnt add it automatically. 
    //using %s compiler add it automatically. 
    puts(str);

}