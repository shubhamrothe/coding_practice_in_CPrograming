/*
Q19. Accept a start and end range from the user and print all even number between them. (Give minimum two solutions)*/
#include<stdio.h>
int main()
{
    int start,end;
    printf("Enter the start and end of range");
    scanf("%d%d",&start,&end);
    if(start%2!=0)
        start++;
        //case 1
   /* for(int i=start;i<=end;i+=2)
    {
       printf("%d\t",i);
    }*/
        //case2 
     while(start<=end)
        {
            printf("%d\t",start);
            start+=2;
        }
}