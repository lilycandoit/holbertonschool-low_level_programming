#include "main.h"

/* Declare formating function */
void format_table(int product);


/**
 * print_times_table - to print the n times table
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
		while (col <= n)
		{
			product = row * col;
			_putchar(',');
			_putchar(' ');


			format_table(product);

			col++;
		}

		_putchar('\n');
		row++;
	}

}

/**
 * format_table - Format and prints numbers with proper spacing
 * @product: The number to format and print
 * Description: Format the number with proper spacing
 * Return: void
 */

void format_table(int product)
{
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
		_putchar(((product / 10) % 10) + '0');
		_putchar((product % 10) + '0');
	}
}
