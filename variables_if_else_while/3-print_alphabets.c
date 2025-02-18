#include <stdio.h>

/**
 * main - Entry point to print out alphabet
 *
 * Description: Uses a loop to print all lowercase 
 * and uppercase letters from a to z
 * using only the putchar function three times.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
