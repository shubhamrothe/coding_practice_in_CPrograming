#include<stdio.h>
void main()
{
enum SET_MOD
{
	Java,DotNet,Oracle
};
enum SET_MOD module={DotNet};
//enum module module={DotNet,Oracle}; Error

//module=Java;
//module=Oracle;
//module=SE; Error
printf("%d\n",module);

if(module==Java)
{
	puts("it is java");
}
else if(module==DotNet)
{
	puts("it is DotNet");
}
else
{
	puts("it is Oracle");
}
}