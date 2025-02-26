# include "main.h"
# include "stdio.h"
# include "stddef.h"

/**
 * _strcpy - copy array one to array b
 *
 * @src: the source array which to be copied
 * @dest: the destination array
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/*
	 * This way is copying directly, copy first,
	 * then check condition if it reach the ends
	 */
	while ((dest[i] = src[i]) != '\0')
		i++;

	return (dest);
}
