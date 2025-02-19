#include <stdio.h>

/**
 * main - Entry point to print out alphabet
 *
 * Description: Uses a loop to print all lowercase
 * and except q and e
 * using only the putchar function three times.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
