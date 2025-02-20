#include <stdio.h>

/**
 * main - Entry point to print out combinations of single-digit numbers
 *
 * Description: Uses a loop to print combination of single-digit numbers
 * Numbers must be separated by ,, followed by a space
 * using only the putchar function four times.
 * not using 'char' type
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}

	putchar('\n');

	return (0);
}
