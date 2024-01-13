//accept 2 numbers and print them using pointer notation.
#include<stdio.h>
void main()
{
	int num1,num2,*ptr1,*ptr2;
	puts("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	ptr1=&num1;
	ptr2=&num2;
	printf("%d\t%d\n",*ptr1,*ptr2);
	printf("%d\n",*ptr1+*ptr2);
	printf("%d\n",*ptr1-*ptr2);
	printf("%d\n",*ptr1**ptr2);
	printf("%d\n",*ptr1/ *ptr2);
	printf("%d\n",*ptr1%*ptr2);
}