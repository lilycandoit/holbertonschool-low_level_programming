#include "main.h"
#include "string.h"

/**
* _strstr - finds the first occurrence of the substring
*
* @haystack: the main string
* @needle: the substring
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *a;

	while (*needle)
	{
		a = haystack;

		while (*a)
		{
			if (*needle == *a)
			{
				/* return the pointer at the point of the first match found */
				return (needle);
			}
			a++;
		}
		needle++;
	}
	return (NULL);
}

