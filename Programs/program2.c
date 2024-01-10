/*
Q2. Accept the marks from the user and print the grade
a. Marks>=75 grade A
b. Marks >=55 grade B
c. Marks >=35 grade C
d. Else fail
*/
#include<stdio.h>
int main()
{
    int Marks;
    printf("Enter a marks");
    scanf("%d",&Marks);
    if(Marks>=0 && Marks<=100){
    if(Marks>=75 )
    printf("Grade A");
    else if(Marks>=55 )
    printf("Grade B");
    else if(Marks>=35 )
    printf("Grade C");
    else
    printf("Fail");
    }
    else
    printf("Enter valid marks");
}