#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int rollno;
    float cgpa;
};
int main()
{
    struct student s1;
    s1.rollno=52;
    s1.cgpa=7.6;
    //s1.name="Shubham"; //error
    /* if any string is defined by array notations(i.e. char name[20]) we can't change its value but we can perform string inbuilt functions on it  
    if it was characture pointer then it was possible*/
    strcpy(s1.name,"Shubham");
    printf("Name of a student=%s\n",s1.name);
    printf( "Roll no of a student =%d\n",s1.rollno);
    printf("cgpa of a student=%.2f",s1.cgpa);
    return 0;

}