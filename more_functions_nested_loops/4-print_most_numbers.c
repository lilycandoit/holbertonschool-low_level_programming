#include "main.h"

/**
 * print_most_numbers - print numbers excluding 2 and 4
 *
 * Description: Print numbers from 1 -9 without 2,4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
		num++;

	}

	_putchar('\n');
}
