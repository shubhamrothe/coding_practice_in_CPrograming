
//concat second string into first

//logic 1: using strcat()
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[40] = "hello ";
	char str2[] = "world!";
	strcat(str1,str2);
	puts(str1);
}

// Logic 2: without using  strcat()
/*
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[40] = "hello ";
	char str2[] = "world!";
    int temp=0;
    int i,j;
    for( i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++)
    {
        str1[i+j]=str2[j];
    }
    str1[i + j] = '\0';
      puts(str1); 
}
*/