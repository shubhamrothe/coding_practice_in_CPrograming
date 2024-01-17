/*Accept a number from the user and check if it is a prime number or not*/

#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++)
    {
         if(num%i==0) 
         {
            flag=1;
            break;
         }
    }
    if(flag==1)
    printf("Enter number is a prime number");
     else
     printf("Enter number is not a prime number");
    
}