/* Print all prime number between 51 to 100 */
#include<stdio.h>
int main()
{   
    for(int num=51;num<=100;num++)
    {   int flag=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
             printf("%d\t",num);
    }
}