// 6) accept a 3 digit no do the sum of digits
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a 3 digit number");
    scanf("%d", &num);
    if (num >= 100 && num <= 999)
    {
        int rem, sum = 0;
        while (num > 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        printf("sum of digits =%d", sum);
    }
    else
    printf("Enter a valid number");
}