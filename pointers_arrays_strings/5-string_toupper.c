#include "main.h"

/**
* string_toupper - to change all lowercase letters to uppercase
*
* @a: the string to be uppercased
*
* Return: a string with all uppercase
*/

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}

		i++;
	}

	return (a);
}



