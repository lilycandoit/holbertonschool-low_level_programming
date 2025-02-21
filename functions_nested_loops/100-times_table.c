#include "main.h"

/**
 * times_table - to print the n times table
 * @n: the number of rows and collums
 *
 * Description: to print the n times table
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int row, col, product;

	if (n < 0 || n > 15)
		return;

	row = 0;

	while (row <= n)
	{
		_putchar('0');

		col = 1;
		while (col < n)
		{
			product = row * col;
			_putchar(',');
			_putchar(' ');


			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			col++;
		}

		_putchar('\n');
		row++;
	}

}
