#include "main.h"
#include "stdlib.h"

/**
* create_array - create an array of chars
* @size: the size of the array
* @c: the character to initialize the array
*
* Return: A pointer to an array of characters
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/* if size is 0, return NULL */
	if (size == 0)
		return (NULL);

	/* Allocate memmory */
	arr = malloc(size * sizeof(char));
	if (arr == NULL) /* if malloc fails, return NULL*/
		return (NULL);

	/* initialize the array with char c */
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
