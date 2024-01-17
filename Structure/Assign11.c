/*d)Define a function which will accept address of entire structure and display them.*/

#include<stdio.h>

struct emp
	{
		char name[20];
		int age;
	};
void disp(struct emp*);
int main()
{
	struct emp e1={"abc",20};
	disp(&e1);
}
void disp(struct emp *temp)
{
	printf("%s\t%d\n",temp->name, (*temp).age);
}
