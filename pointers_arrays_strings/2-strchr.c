#include "main.h"
#include "string.h"

/**
* _strchr - refer to first occurence of a character from a given string
*
* @s: a string to be searched from
* @c: the character to get searched
*
* Return: a pointer to the first occurrence of the character c
* in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		/*
		* if found matching character, return pointer
		* to that string from that matching point
		*/
		if (*s == c)
			return (s);
		s++;
	}

	/* in case the searching char is null terminator */
	/* and the loop already run through the string */
	if (c == '\0')
		return (s); /* return the pointer to '\0' */

	return (NULL); /* if c is NOT FOUND */
}
