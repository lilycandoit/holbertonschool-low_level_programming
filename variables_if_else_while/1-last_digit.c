#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This task is to extract and display the last number
 */

int main(void)
{
    int n, last_digit;

    srand(time(0));  // Initialize random number generator
    n = rand() - RAND_MAX / 2;  // Generate a random number

    last_digit = n % 10;  // Extract the last digit

    printf("Last digit of %d is %d ", n, last_digit);

    if (last_digit > 5)
        printf("and is greater than 5\n");
    else if (last_digit == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

    return (0);
}

