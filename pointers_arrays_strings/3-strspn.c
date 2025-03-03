#include "main.h"

/**
* _strspn - return the length of new string starting from unmatched
* character
*
* @s: the string to be searched from
* @accept: the pattern get searched
*
* Return: number of bytes or the length of new string
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0; /* character not found */
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break; /* stop searching a in this current s[i]*/
			}
			a++;
		}

		if (!found)
			break; /*  stop the loop through s string immediately */

		count++; /* if match, increase count */
		s++;
	}

	return (count);
}
