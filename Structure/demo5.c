/* pointers to structue  and arrow operator(->)*/

#include<stdio.h>

struct student{
    char name[20];
    int rollno;
    float cgpa;
};
int main()
{
    struct student s1={"Rishabh",1,8.6};
    //using . operator
    printf("Student.rollno=%d\n",s1.rollno);
   //using pointer
   struct student *ptr=&s1;
    printf("Student rollno=%d\n",(*ptr).rollno);
    //using -> operator
     printf("Student -> rollno=%d\n",ptr->rollno);
    //printf("Student rollno=%\n",*ptr);

}