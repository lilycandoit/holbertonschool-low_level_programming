#include "main.h"
#include "stdlib.h"

/**
* _realloc - reallocare memory using alloc and free
* @ptr: the pointer to a string
* @old_size: size of old memory
* @new_size: size of new memory
*
* Return: the pointer to a new memory with new size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, min_size;

	/* If new_size == old_size, do nothing and return ptr*/
	if (new_size == old_size)
		return (ptr);


	/* If new_size == 0 and ptr is not NULL, free ptr and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return NULL;
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));



	/* allocate new memory */
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	/* Copy the old content to the new memory */
	/* (minimum of old/new size) */
	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	/* need to cast because malloc returns void - generic type*/

	/* free old memory */
	free(ptr);

	return (new_ptr);
}