#include "main.h"

/**
 * print_numbers - to print numbers from 0-9
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
