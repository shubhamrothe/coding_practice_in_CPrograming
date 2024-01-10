/*3)Accept a no from user and print the table till that no
eg. if user enter 5 it should print table from 1 to 5 one bellow another
eg.
1*1=1
1*2=2----
2*1=2
2*2=4---
3*1=3
3*2=6--*/
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++) 
//     {
//         for (int j = 1; j <= 10; j++) 
//         {
//         printf("%d * %d = %d\n", i, j, i * j);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
        printf("%d * %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }
}