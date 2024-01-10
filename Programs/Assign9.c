//10)accept 10 No from user and count how many are +ve ,-ve and 0 
#include <stdio.h>

int main()
{
    int num;
    int count0=0,countN=0,countP=0;
      printf("Enter 10 numbers");
      for(int i=1;i<=10;i++)
      {
        scanf("%d",&num);
        if(num==0)
        count0++;
        else if(num>0)
        countP++;
        else
        countN++;
      }
      printf("Total 0's are:%d\n",count0);
      printf("Total +ve numbers are:%d\n",countP);
      printf("Total -ve numbers are:%d\n",countN);
    
}