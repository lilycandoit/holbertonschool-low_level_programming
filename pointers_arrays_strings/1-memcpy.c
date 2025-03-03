#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
*
* @dest: a destination array
* @src: the source array to be coppied
* @n: number of bytes to be coppied
*
* Return: a pointer to dest array
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
