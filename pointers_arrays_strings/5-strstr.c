#include "main.h"
#include "string.h"

/**
* _strstr - finds the first occurrence of the substring
*
* @haystack: the main string to be examined
* @needle: the substring to be searched
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	/* in case needle is empty, return haystack */
	if (*needle == '\0')
		return haystack; /* return the full haystack from beginning */

	while (*haystack)
	{
		/* need to declare with temp pointer to make sure it is reset */
		/* after each haystack++ */
		h = haystack;
		n = needle;

		while (*h && *n && *h == *n) /* step 1: comparing substring */
		{
			h++;
			n++;
		}

		if (*n == '\0') /* the match is found only when reaching the end of needle*/
			return haystack;

		haystack++;
	}
	return (NULL);
}

