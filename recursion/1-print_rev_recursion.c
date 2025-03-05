#include "main.h"

/**
* _print_rev_recursion - to print a string in reverse
*
* @s: the string to be printed
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case: if we reach the end of the string */
	{
		return;
	}

	_print_rev_recursion(s + 1); /* move to next character */
	/* and keep calling it until it reaches the end */

	_putchar(*s); /* then print only after the recursion returns */
	/* (meaning hit the end of string) */
}

