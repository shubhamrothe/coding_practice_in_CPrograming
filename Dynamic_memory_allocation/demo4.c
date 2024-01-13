/* 
first, ask user how many numbers he/she would like to store
	allocate memory accordingly
    accept numbers and display them.
now, ask user whether he/she would like to continue. It means whether he/she would like to extend the above created array
	if yes
		ask how many more numbers to be stored
		reallocate the already allocated memory (i.e. size of old memory + size as per new requirement)
        accept the new data ( numbers)
finally display the entire array.
*/
#include<stdio.h>
#include<malloc.h>
void main()
{
	int* ptr, i, rec, morerec = 0;
	char ans;
	puts("How many nos");
	scanf("%d", &rec);
    //scanf_s("%d", &rec);
	ptr = (int*)calloc(rec, sizeof(int));
	printf("Enter %d values\n", rec);
	for (i = 0; i < rec; i++)
	{
		scanf("%d", &ptr[i]);
        //scanf_s("%d", &ptr[i]);
	}
	puts("Displaying");
	for (i = 0; i < rec; i++)
	{
		printf("%d\n", ptr[i]);
	}
	puts("Do u wish to continue ?");
	getchar();
	scanf("%c", &ans,1);
    //scanf_s("%c", &ans,1);
	if (ans == 'y' || ans == 'Y')
	{
		puts("how many more ?");
		scanf("%d", &morerec);
        //scanf_s("%d", &morerec);
		ptr = (int*)realloc(ptr, (rec + morerec) * sizeof(int));
		printf("Enter %d more numbers", morerec);
		for (i = rec; i < (rec + morerec); i++)
		{
			//scanf_s("%d", &ptr[i]);
            scanf("%d", &ptr[i]);
		}
	}
	puts("Displaying All");
	for (i = 0; i < (rec + morerec); i++)
	{
		printf("%d\n",ptr[i]);
	}
}