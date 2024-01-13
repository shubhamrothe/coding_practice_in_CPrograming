/*
8) write 3 functions 
add(),modify() and delete() with simple statements like "in add","in modify" etc.
in main() function accept a character from user . 
if the character is 'a' or 'A' call add()
if it is 'm' or 'M' call modify()
if it is 'd' or 'D' call delete()*/
#include<stdio.h>

void add();
 void modify();
void delete();
int main()
{
    char ch;
    printf("Enter  any one characture in between A,a,M,m,D,d ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='a')
    {
        add();
    }
    if(ch=='M' || ch=='m')
    {
        modify();
    }
    if(ch=='D' || ch=='d')
    {
        delete();
    }

}
void add(){
    printf("In add");
}
 void modify()
 {
    printf("In modify");
 }
void delete(){
    printf("In delete");
}