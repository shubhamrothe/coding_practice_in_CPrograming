/* Write a program to store the data of  studets  of different cources(eg. DAC,DDA,etc)*/
#include<stdio.h>
#include<string.h>
struct student{
    int rollno;
    char name[10];
    float cgpa;
};
int main()
{
    struct student DAC[120];
    DAC[0].rollno=1;
    DAC[0].cgpa=8.6;
   // DAC[0].name="Rishabh";  //error
   strcpy(DAC[0].name,"Rishabh");
   printf("Information of 1st student\n");
   printf("Name=%s\n",DAC[0].name);
   printf("Rollno=%d\n",DAC[0].rollno);
   printf("CGPA=%f\n",DAC[0].cgpa);
    
    return 0;
}