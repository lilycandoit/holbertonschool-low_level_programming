#include "stdio.h"

/**
 * main - to print number with Fizz and Buzz
 *
 * Return: void
 *
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5  == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n < 100)
			putchar(' ');
		else
			putchar('\n');

		n++;
	}

	return (0);
}
