#include "main.h"

/**
* _strlen_recursion - get the length of a string
*
* @s: the string to be check
*
* Return: the length of a string in integer
*/

int _strlen_recursion(char *s)
{
	int length;

	/* base case: when reach null terminator */
	if (*s == '\0')
	{
		return (0);
	}

	length = _strlen_recursion(s + 1) + 1;
	return (length);
}
