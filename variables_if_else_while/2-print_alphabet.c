#include <stdio.h>

/**
 * main: Entry point
 *
 * Return: Always 0 (Success)
 *
 * Print out alphabet by using loop
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
