#include "main.h"

/**
 * puts2 - print every other character
 *
 * @str: The string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		if (str[i + 2] == '\0')
			break;

		i += 2;
	}

	_putchar('\n');
}

