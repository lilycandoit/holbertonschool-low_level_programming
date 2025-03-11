#include "main.h"
#include "stdlib.h"

/**
* _calloc - allocate memory for an array with malloc
* @nmemb: the number of elements
* @size: number of bytes to allocate for each element
*
* Return: pointer to allocated memory or NULL if fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	/* check invalid input */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory using malloc */
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	/* initilize memory to 0 */
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
