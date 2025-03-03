#include "main.h"

/**
 * print_chessboard - to print the chessboard
 *
 * @a: the array to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0; /*row */
	int j;

	while (*a[i] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
