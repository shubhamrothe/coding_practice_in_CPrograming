// call by address and call by value
#include<stdio.h>

void main()
{
	int num1=-5,num2=-8;
	void change(int,int*);
	printf("Before %d\t%d\n",num1,num2);
	change(num1,&num2);
	printf("After %d\t%d\n",num1,num2);
}
void change(int x,int *y)
{
	x*=-1;
	*y*=-1;
}