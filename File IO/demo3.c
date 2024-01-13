//Writing to a file

#include<stdio.h>
int main()
{
    FILE *fptr;
    //fptr=fopen("Testdemo7.txt","w");
    fptr=fopen("Testdemo7.txt","a"); 
    char ch;
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
    

    fclose(fptr); 

    return 0;
}  