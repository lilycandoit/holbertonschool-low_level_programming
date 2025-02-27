#include "main.h"

/**
* _strcat - to concatenate two strings

* @dest: the destination string with enough memory
* @src: the string will be added to dest

* Return: the pointer to the dest string
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest; /* save the start of dest */

	/* Find the end of dest string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy src and add to dest */
	while (*src != '\0')
	{
		/* ptr now is starting from the end of the original dest */
		*ptr = *src;
		ptr++;
		src++;
	}

	/* after all, add null terminator */
	*ptr = '\0';

	return (dest);
}
