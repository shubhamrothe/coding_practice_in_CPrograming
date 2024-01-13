/*
 write following call stack
main->disp1->disp2
(i.e. call disp2 from disp1 and call disp1 from main function)
observe how it works.*/
#include<stdio.h>

void disp1();
void disp2();
int main()
{ 
    printf("Inside main\n");
    disp1();
}
void disp1(){
    printf(" Inside disp1()\n");
    disp2();
}
void disp2(){
    printf(" Inside disp2()\n");
}