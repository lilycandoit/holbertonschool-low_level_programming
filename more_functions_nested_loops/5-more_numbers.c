#include "main.h"

/**
 *
 * print_numbers - print numbers from 1 to 14
 *
 * Description: To print numbers from 1 to 14
 *
 * Return: void
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar('1');

		_putchar((i % 10) + '0');
	}

	_putchar('\n');
}

/**
 * more_numbers - print 10 times the numbers
 *
 * Description: To print the numbers 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_numbers();

}
