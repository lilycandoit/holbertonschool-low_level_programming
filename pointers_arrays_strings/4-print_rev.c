#include "main.h"

/**
 * print_rev - print a string in reverse order
 *
 * @s: The string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length = _strlen(s);

	int i = length - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
