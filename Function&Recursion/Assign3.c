/*
3)function to accept character,float and int and display them.
*/
#include<stdio.h>

void func();

int main()
{
    func();

}
void func()
{
    char c;float f;
    int i; 
    printf("Enter a character value");
    scanf("%c",&c);
    printf("Enter a float value");
    scanf("%f",&f);
    printf("Enter a integer value");
    scanf("%d",&i);
    printf("characture=%c\n",c);
    printf("float=%f\n",f);
    printf("integer=%d\n",i);
}