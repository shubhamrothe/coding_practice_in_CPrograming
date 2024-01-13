//Make a program to input student information from a user and enter it into a file.

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Student.txt","w");

    char name[20];
    int rollno;
    float cgpa;

    printf("Enter a name: ");
    scanf("%s",name);
     printf("Enter a rollno: ");
    scanf("%d",&rollno);
     printf("Enter a cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",rollno);
    fprintf(fptr,"%f\t",cgpa);
    fclose(fptr);
    return 0;
}