/*
1)Write C program to read N array elements and swap adjacent elements. 
Example
Enter total number of elements: 4
Enter array elements:
Enter element 1:10
Enter element 2: 20
Enter element 3: 30 
Enter element 4:40

Array elements after swapping adjacent elements:
20
10
40
30
*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the size of N\n");
    scanf("%d",&N);
    int arr[N];
    
    for(int i=0;i<N;i++)
    {
        printf("Enter element %d\n",i);
        scanf("%d",&arr[i]);
    }
    int t;
    for(int i=0;i<N-1;i+=2)
    {
        t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
    }
    printf("After swapping\n");
    for(int i=0;i<N;i++)
    {
        printf("%d\n",arr[i]);
    }

}