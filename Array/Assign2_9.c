/*
9) create 3 matrixes of 3*3.
		accept values in two matrixes. 3rd matrix will be the total of first two matrixes.
		Display 3rd matrix.*/
        #include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
	
	puts("Enter 9 values of arr1");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
    puts("Enter 9 values of arr2");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
//adding arr1 and arr2 in arr3

for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
            arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

puts("printing arr3");
		for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}











}