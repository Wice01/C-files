#include <stdio.h>

int main()
{
    int number, number1, sum;

    printf("Welcome\n");

    printf("Enter first number: ");
    fflush(stdout);
    scanf("%d", &number);
    printf("Enter second number: ");
    fflush(stdout);
    scanf("%d", &number1);

    sum = number1 + number;
    printf("The sum of the two numbers is: %d", sum);
}