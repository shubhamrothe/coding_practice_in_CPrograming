/*strcpy_s - copy second string to first*/

//Logic1: using strcpy()
// #include<stdio.h>
// #include<string.h>

// int main()
// {
// 	char str1[40] = "Welcome";
// 	char str2[40] = "hello";

// 	strcpy(str1,str2);

// 	puts(str1);
// 	puts(str2);
// }

//Logic2: without using strcpy()
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[40] = "Welcome";
	char str2[40] = "hello";
	for(int i=0;str1[i]!='\0';i++)
    {
        str1[i]=str2[i];
    }
	puts(str1);
	puts(str2);
}