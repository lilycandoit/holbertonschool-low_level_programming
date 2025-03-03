#include "main.h"
#include "string.h"

/**
* _strpbrk - return a pointer to the byte in s that matches one
* of the bytes in accept, or NULL if no such byte is found
*
* @s: the string to be searched from
* @accept: the pattern get searched
*
* Return: a pointer to the byte in s that matches one
* of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				/* return the pointer to `s` at the point of the first match found */
				return (s); /* the same as &s[i]*/
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

