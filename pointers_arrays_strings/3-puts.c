#include "main.h"

/**
 * _puts - to print a string
 *
 * @str: The string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
