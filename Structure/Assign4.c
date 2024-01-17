#include<stdio.h>

void main()
{
	struct emp
	{
		char name[20];
		int age;
	}e1={"abc",20};
	struct emp *ptr=&e1;
	printf("%s\t%d\n",e1.name,e1.age);
	printf("%s\t%d\n",ptr->name,ptr->age);
	printf("%s\t%d\n",(*ptr).name,(*ptr).age);
}