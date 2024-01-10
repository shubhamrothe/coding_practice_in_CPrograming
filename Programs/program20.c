/*
Q20. Accept start and end range from the user and print all odd numbers between them. (Give minimum two solutions)*/
#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter the start and end of range");
    scanf("%d",&start);
    scanf("%d",&end);
            if(start%2==0)
            start+=2;
    for(int i=start;i<=end;i+=2)
    {
         
        printf("%d\t",i);
    }
    /*while(start<=end)
    {
        
        printf("%d\t",start);
        start+=2;
    }*/
}