/*
Given a binary string, write a C program to find the number of patterns of form "101".
example:
input :00010101000001101
output: 3

input: 1111111111111111110
output: 0
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int count=0;
    char num[20]={"00010101000001101"};
    int len=strlen(num);
    for (int i = 0; i<len-2; i++)
    {
        if (num[i] == '1' && num[i + 1] == '0' && num[i + 2] == '1' )
        {   count++; }
    }
    printf("%d",count);
}