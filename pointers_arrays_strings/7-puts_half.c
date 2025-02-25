#include "main.h"

/**
 * puts_half - print half of the string
 *
 * @str: The string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, i, start;

	len = 0;
	while (str[len] != '\0')
		len++;

	/* Check the starting index */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	/*Print 2nd half of the string */
	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');

}
