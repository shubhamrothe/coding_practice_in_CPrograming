/*
10) accept 4 names in an array and display them.*/
#include<stdio.h>
int main()
{
    char names[4][20];// 4 strings of size 20 or 4 rows 0 columns
    int i;
    puts("Enter 4 names");
    for(i=0;i<=3;i++)
    {
        gets(names[i]);
    }
    puts("printing");
    for(i=0;i<=3;i++)
    {
        puts(names[i]);
    }

}