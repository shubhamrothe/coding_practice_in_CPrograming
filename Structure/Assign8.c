/* a)Given following structure

struct emp
{
	char name[20];
	int age;
};
struct emp e1={"abc",20};

define a function which will accept members of the above structure and display.*/

#include<stdio.h>
int main()
{
	struct emp
	{
		char name[20];
		int age;
	};
	struct emp e1={"abc",20};

	void disp(char *,int);

	disp(e1.name,e1.age);
}
void disp(char *ptr,int k)
{
	printf("%s\t%d\n",ptr,k);
}

