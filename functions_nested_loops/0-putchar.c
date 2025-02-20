#include "main.h"

/**
 * main - Entry point
 *
 * Description: Loop through an array of characters to print a word
 * using putchar only
 * followed by a newline
 *
 * Return: Always 0 (Success)
 *
 */


int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return (0);
}
