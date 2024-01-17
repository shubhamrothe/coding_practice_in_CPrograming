/*
given following structure

	struct emp
	{
		char name[20];
		int age;
	};

create 2 variables of this structure.

you need to initialize one variable.

now assign this variable to the one which is not initialize.

display members of both the variables.

now make changes to one of the variables. What will happen? will that make changes to another variable also? check out.*/

#include<stdio.h>
#include<string.h>
struct emp
	{
		char name[20];
		int age;
	};
int main()
{
    struct emp e1;
    struct emp e2;

   strcpy(e1.name,"Shubham");
    e1.age=26;
    e2=e1;
    printf("Printing values of e1\n");
    printf("%s\t",e1.name);
    printf("%d\n",e1.age);
    printf("Printing values of e2\n");
    printf("%s\t",e2.name);
    printf("%d\n",e2.age);

    strcpy(e1.name,"Rishabh");
    printf("Printing values of e1 after changes\n");
    printf("%s\t",e1.name);
    printf("%d\n",e1.age);
    printf("Printing values of e2 after changes\n");
    printf("%s\t",e2.name);
    printf("%d\n",e2.age);
}