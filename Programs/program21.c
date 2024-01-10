/*
Q.21  Accept a number from the user and print the Fibonacci series till that number.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int first = 0, second = 1, next;
    printf("Fibonacci series upto %d:\n", n);
    while (first < n) {
        printf("%d", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}
