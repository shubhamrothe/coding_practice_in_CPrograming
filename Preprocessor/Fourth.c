#include<stdio.h>
#define NUM 3
void main()
{
	#ifdef NUM
		printf("it is defined");
	#else
		printf("it is not defined");
	#endif

	#if NUM >4
		printf("greater");
	#elif NUM==4
		printf("it is equal");
	#else
		printf("neither 4 nor more\n");
	#endif		
}
