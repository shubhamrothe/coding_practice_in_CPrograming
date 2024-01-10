/*
Q.24 Accept 10 numbers from the user and print the highest and the 2nd highest number.*/
#include<stdio.h>
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++) {
        //printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
   int highest = num[0];
   int secondHighest = num[1];
    for (int i = 2; i < 10; i++) {
        if (num[i] > highest) {
            secondHighest = highest;
            highest = num[i];
        } else if (num[i] > secondHighest && num[i] != highest) {
            secondHighest = num[i];
        }
    }
    printf("The highest number is: %d\n", highest);
    printf("The second highest number is: %d\n", secondHighest);
}