//WAP to allocate memory to store 5 prices

#include<stdio.h>
#include<malloc.h>
int main()
{
    float *ptr;
    ptr=(float *)malloc(5*sizeof(float));
    printf("Enter prices");
    // for(int i=0;i<5;i++)
    // {
    //     scanf("%f",&ptr[i]);
    // }
    printf("Printing prices");
    for(int i=0;i<5;i++)
    {
        printf("%f\t",ptr[i]);
    }
    free(ptr);
}