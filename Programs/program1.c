//Q1. Swap 2 variable without using 3rd variable. (Give minimum three solutions)

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    puts("Before swapping:");
    printf("a=%d\t b=%d",a,b);
    printf("\n");
    puts("After swapping:");
    //case:1
   /*
   a=a*b;
    b=a/b;
    a=a/b;
    printf("a=%d\t b=%d",a,b);
    */

   //case:2 
   /*
   a=a^b;
   b=a^b;
   a=a^b;
   printf("a=%d\t b=%d",a,b);
   */

  //case:3
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a=%d\t b=%d",a,b);
}