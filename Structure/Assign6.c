
// structure member can be a pointer
#include<stdio.h>
struct mystruct
	{
		int *ptr;
	};
void main()
{
	int cnt=30;
	struct mystruct m1;
	m1.ptr=&cnt;
    printf("%d\n",cnt);
	printf("%d\n",*m1.ptr);

}
