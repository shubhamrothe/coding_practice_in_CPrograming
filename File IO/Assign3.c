//write a program to write all the odd numbers from 1 to n in a file.

# include <stdio.h>
int main()
{
    FILE *fptr;
   fptr= fopen("oddnumbers.txt","w");
   int n;
   printf("Enter a value of n");
   scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            fprintf(fptr,"%d\t",i);
        }
    }


   fclose(fptr);
   return 0;

}