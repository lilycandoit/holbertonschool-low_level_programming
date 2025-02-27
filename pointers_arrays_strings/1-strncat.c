#include "main.h"
#include <stddef.h>

/**
* _strncat - to concatenate 2 strings with max n characters
*
* @dest: the destination string
* @src: the string to be appended
* @n: number of characters added to dest
*
* Return: the pointer of string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = 0, i;

	/* find the length of dest*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* check and appending src to dest */
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	/* Add null termination to the result */
	dest[dest_len] = '\0';

	return (dest);
}
