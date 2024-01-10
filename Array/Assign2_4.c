/*
4) accept 5 characters in an array. display them. Now toggle them. display them.*/
#include<stdio.h>
int main()
{
   
   char arr[5];
   
   printf("Enter 5 characters in array");
   for(int i=0;i<5;i++)
   {
    scanf("%c",&arr[i]);
   }
 printf("printing all characters of array \n");
  for(int i=0;i<5;i++)
  {
    printf("%c\t",arr[i]);
  }
  printf("printing all characters of array  after toggle\n");
  for(int i=0;i<5;i++)
  {
    if(arr[i]>=65 &&arr[i]<=90)
    {
        arr[i]+=32;
    }
    if(arr[i]>=97 &&arr[i]<=122)
    {
        arr[i]-=32;
    }
    //printf("%c\t",arr[i]);
  }
  for(int i=0;i<5;i++)
  {
    printf("%c\t",arr[i]);
  }

}