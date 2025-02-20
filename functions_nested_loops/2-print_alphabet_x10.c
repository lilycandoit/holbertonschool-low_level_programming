#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Description: prints lowercase letters a-z
 * followed by a newline
 * Return: void
 */
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

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Description: print alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
