//WAP to allocate memory for 5 numbers.Then dynamically increase it to 8 numbers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("Enter 5 numbers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d\t",&ptr[i]);
    }
    printf("Printing 5 numbers\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }
    //free(ptr);
    printf("Reallocating memory of 8 numbers\n");
    ptr=realloc(ptr,8);
    printf("Enter 8 numbers\n");
    for(int i=0;i<8;i++)
    {
        scanf("%d\t",&ptr[i]);
    }
    printf("Printing 8 numbers\n");
    for(int i=0;i<8;i++)
    {
        printf("%d\t",ptr[i]);
    }
    free(ptr);

}