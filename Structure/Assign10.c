/*c) Given following structure

struct emp
{
	char name[20];
	int age;
};
struct emp e1={"abc",20};

define a function which will accept  above structure and display its members. */
#include<stdio.h>
	struct emp
	{
		char name[20];
		int age;
	};
void disp(struct emp);
int main()
{
	struct emp e1={"abc",20};
	disp(e1);
}
void disp(struct emp temp)
{
	printf("%s\t%d\n",temp.name,temp.age);
}
