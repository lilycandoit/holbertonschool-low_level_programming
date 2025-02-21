#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting from 0
 * @n: The number to generate times table
 */
void print_times_table(int n)
{
	int row, col, product;
	
	if (n < 0 || n > 15)
		return;
	
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;
			if (col == 0)
				printf("%d", product);
			else
				printf(", %3d", product);
		}
		
		printf("\n");
	}
}

