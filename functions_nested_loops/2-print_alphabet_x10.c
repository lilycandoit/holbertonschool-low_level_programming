#include "main.h"

/**
 * 2-print_alphabet_x10.c - to print the alphabet  10 times
 *
 * Description: print alphabet 10 times
 *
 * Return: void
 *
 */

/* Print alphabet one time */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

/* Reuse the function to print 10 times */	
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
