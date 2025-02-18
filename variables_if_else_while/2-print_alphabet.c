#include <stdio.h>

/**
 * Main entry
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
