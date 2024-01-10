
/* Calculate length of string */
//Logic 1: using strlength()

#include<stdio.h>
#include<string.h>
void main()
{
	char string[80];
	printf("enter a string:");
	scanf("%[^\n]", string,80);
	printf("%d\n",(unsigned)strlen(string));
}


// Logic2: without using strlength()

// #include<stdio.h>
// #include<string.h>
// void main()
// {
// 	char string[80];
//     int count=0;
// 	printf("enter a string:");
// 	//scanf("%[^\n]", string);
// 	fgets(string,79,stdin);
//     for(int i=0;string[i]!='\0';i++)
//     {
//         count++;
//     }
// 		count--;
//     printf("count=%d",count);
// }
