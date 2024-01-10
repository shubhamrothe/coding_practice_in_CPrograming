/*Q.22 Accept 5 numbers from the user and print the highest number.
*/
#include<stdio.h>
int main()
{
    //int n1,n2,n3,n4,n5;
    int num[5];
    printf("Enter 5 numbers");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&num[i]);
    }
    int higest=num[0];
    for(int i=1;i<5;i++)
    {
       if(num[i]>higest)
            higest=num[i];
    }
    printf("%d",higest);
    
}