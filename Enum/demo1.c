#include<stdio.h>
void main()
{
	/*enum col
	{
		red,blue,green
	};
	enum col c=green;
	printf("%d\n",c);*/
	typedef enum col
	{
		tom,dick,harry
	}tdh;
	tdh var=tom;
	printf("%d\n",var);
    
}