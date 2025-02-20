#include "main.h"

/**
 * print_alphabet - to print alphabet
 *
 * Description: print alphabet letter
 * followed by a newline
 *
 * Return: No return type (void)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
