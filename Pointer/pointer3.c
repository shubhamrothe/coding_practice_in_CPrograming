
//accept 2 numbers and swap them using pointer notation.
#include<stdio.h>
void main()
{
	int num1,num2,temp,*ptr1,*ptr2;
	puts("Enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	ptr1=&num1;
	ptr2=&num2;
	printf("Before Swapping %d\t%d\n",*ptr1,*ptr2);
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;

printf("After Swapping %d\t%d\n",*ptr1,*ptr2);
}