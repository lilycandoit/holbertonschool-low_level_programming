#include "main.h"


/**
 * print_triangle - print triangle with #
 *
 * @size: sise of triangle (number of rows)
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}


	for (i = 1; i <= size; i++)
	{
		/* Print spaces first */
		for (j = 1; j <= size - i; j++)
			_putchar(' ');



		/* Print '#' for the triangle */
		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
