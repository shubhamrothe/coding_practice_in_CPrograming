#include<stdio.h>
#define square()   puts("Enter a number"); scanf("%d",&num);printf("%d\n",num*num);
void main()
{
	int num;
		square();
		puts("second time");
		square();
		puts("third time");
		square();
		puts("fourth time");
		square();
}