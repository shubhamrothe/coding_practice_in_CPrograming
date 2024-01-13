//Logic 1:

#include<stdio.h>
#include<malloc.h>
void main()
{
	char* ptr;
	int rec, i;
	puts("How many characters");
	scanf("%d", &rec);
    //scanf_s("%d", &rec);
	getchar();
	ptr = (char*)malloc((rec + 1) * sizeof(char));
	for (i = 0; i < rec; i++)
	{
		scanf_s("%c", &ptr[i],1);
        //scanf_s("%c", &ptr[i],1);
	}
	ptr[i] = '\0';
	puts(ptr);
}

//Logic 2:
// #include<stdio.h>
// #include<malloc.h>
// void main()
// {
// 	char* ptr;
// 	int rec, i;
// 	puts("How many characters");
// 	scanf_s("%d", &rec);
// 	getchar();
// 	ptr = (char*)malloc((rec + 1) * sizeof(char));
// 	puts("enter your name now");
// 	gets_s(ptr, rec + 1);
// 	puts(ptr);
// }