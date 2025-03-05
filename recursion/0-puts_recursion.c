#include "main.h"

/**
* _puts_recursion - to print a string, follow by a new line
* @s: the string to be printed
*
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* print the current character */
	/* s+1 is similar to s++ without modifying the s */
	_puts_recursion(s + 1);
}
