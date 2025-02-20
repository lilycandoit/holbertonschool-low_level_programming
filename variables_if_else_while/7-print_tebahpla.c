#include <stdio.h>

/**
 * main - Entry point to print out alphabet
 *
 * Description: Uses a loop to print all lowercase in reverse
 * using only the putchar function two times.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
