/*
7) accept values into 3*3 matrix and print the total row-wise.*/
#include <stdio.h>
void main()
{

    int arr[3][3] = { 10,20,30,40,50,60,70,80,90};
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{   
			sum += arr[j][i];
            //i++;
		}
		printf("%d\n", sum);
		sum=0;
	}

}