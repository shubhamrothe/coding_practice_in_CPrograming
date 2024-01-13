//Make a program to read 5 integers rom a file

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("ReadInteger.txt","r");
    int num;
    fscanf(fptr,"%d\n",&num);
    printf("number=%d\n",num);
      fscanf(fptr,"%d\n",&num);
    printf("number=%d\n",num);
      fscanf(fptr,"%d\n",&num);
    printf("number=%d\n",num);
      fscanf(fptr,"%d\n",&num);
    printf("number=%d\n",num);
      fscanf(fptr,"%d\n",&num);
    printf("number=%d\n",num);

    fclose(fptr);
}