/* passing structure to function*/
#include<stdio.h>

struct student{
    char name[20];
    int rollno;
    float cgpa;
};

void printInfo(struct student s1);//this line is always write below structure
int main()
{
    struct student s1={"Rishabh",1,8.6};
    printInfo(s1);

}
void printInfo(struct student s1){
    printf("Student.rollno=%d\n",s1.rollno);
    printf("Student.name=%s\n",s1.name);
    printf("Student.cgpa=%f\n",s1.cgpa);
}