#include "main.h"

/**
 * times_table - to print the 9 times table
 *
 * Description: to print the 9 times table
 *
 * Return: void
 *
 */

void times_table(void)
{
	int row, col, product;
	row = 0;

	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			product = row * col;

			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' ');
			}


			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			col++;
		}

		_putchar('\n');
		row++;
	}

}
