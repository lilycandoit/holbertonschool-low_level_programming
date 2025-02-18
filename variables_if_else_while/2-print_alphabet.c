#include <stdio.h>

/**
 * main: Entry point to print out alphabet letter
 *
 * Description: Uses a loop to print all lowercase letters from a to z
 * using only the putchar function twice.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
