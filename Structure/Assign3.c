#include<stdio.h>
#include<malloc.h>
void main()
{
	struct emp
	{
		char name[20];
		int age;
	};
	struct emp* ptr;
	int i, rec;
	puts("How many records");
	//scanf_s("%d",&rec);
    scanf("%d",&rec);
	getchar();
	ptr = (struct emp*)malloc(rec * sizeof(struct emp));
	printf("Enter %d records\n", rec);
	for (i = 0; i < rec; i++)
	{
		//gets_s(ptr[i].name, 20);
        gets(ptr[i].name);
		//scanf_s("%d",&ptr[i].age);
        scanf("%d",&ptr[i].age);
		getchar();
	}
	puts("displaying data");
	for (i = 0; i < rec; i++)
	{
		printf("%s\t%d\n", ptr[i].name, ptr[i].age);
	}
}