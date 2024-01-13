//Reading from a file

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Testdemo7.txt","r");
     
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Characture=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Characture=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Characture=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Characture=%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Characture=%c\n",ch);

    fclose(fptr); 

    return 0;
}  