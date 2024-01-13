/* Write a program to store the data of  studets*/
#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int rollno;
    float cgpa;
};
int main()
{
    struct student s1;
    s1.rollno=1;
    strcpy(s1.name,"Shubham");
    s1.cgpa=7.6;
    printf("Rollno of a student=%d\n",s1.rollno);
    printf("Name of a student=%s\n",s1.name);
    printf("CGPA of a student=%f\n",s1.cgpa);
     struct student s2;
    s2.rollno=2;
    strcpy(s2.name,"Rishabh");
    s2.cgpa=8.6;
    printf("Rollno of a student=%d\n",s2.rollno);
    printf("Name of a student=%s\n",s2.name);
    printf("CGPA of a student=%f\n",s2.cgpa);
    struct student s3;
    s3.rollno=3;
    strcpy(s3.name,"Kapil");
    s3.cgpa=7.0;
    printf("Rollno of a student=%d\n",s3.rollno);
    printf("Name of a student=%s\n",s3.name);
    printf("CGPA of a student=%f\n",s3.cgpa);
    return 0;
}