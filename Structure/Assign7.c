// can we have function as a member of structure ?

// in C directly no.
// But we can achieve it using function pointer inside structure.

#include<stdio.h>

void main()
{
	struct mystruct
	{
		void (*ptr)();
	};
	struct mystruct m1;
	void disp();
	m1.ptr=disp;
	m1.ptr();
}
void disp()
{
	puts("in disp");
}
