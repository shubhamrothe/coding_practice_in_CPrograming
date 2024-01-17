/*
Accept a number from the user and print that many prime numbers after the number.
Example: Input: 3
Output: 5,7,11
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true; 
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Prime numbers after %d are:\n", number);
    int count = 0;
    for (int i = number + 1; count < number; i++) 
    {
        if (isPrime(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    return 0;
}
