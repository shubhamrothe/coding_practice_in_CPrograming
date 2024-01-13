#include<stdio.h>
void fun()
{
	extern int cnt;
	puts("in fun");
	printf("%d\n",cnt);
}