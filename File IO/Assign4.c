// 2 numbers a and  are written in a file.Write a program to replace them with their sum.

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("sum.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    //int sum;
    fptr=fopen("sum.txt","w");
    fprintf(fptr,"%d",a+b);
    fclose(fptr);
    return 0;
   

}