#include "main.h"

/**
 * 2-print_alphabet_x10.c - to print the alphabet  10 times
 *
 * Description: print alphabet 10 times
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}

	_putchar('\n');
}
