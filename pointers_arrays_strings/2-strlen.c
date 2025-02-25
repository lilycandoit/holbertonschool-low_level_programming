#include "main.h"

/**
 * _strlen - to get the length of a string
 *
 * @s: The string
 *
 * Return: The length of the string (int)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
