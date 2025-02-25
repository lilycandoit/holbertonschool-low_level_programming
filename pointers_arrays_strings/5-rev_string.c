#include "main.h"

/**
 * rev_string - a function to reverse a string
 *
 * @s: The string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	int i;
	char temp;

	length = 0;
	while (s[length] != '\0')
		length++;

	/*Swap characters and moving forwards to middle */
	i = 0;

	while (i < length /2)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;

		i++;
	}

}
