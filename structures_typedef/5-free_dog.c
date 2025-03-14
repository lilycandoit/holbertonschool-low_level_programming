#include "dog.h"
#include "string.h"
#include "stdlib.h"

/**
* free_dog - to dynamically free the memory after calling new_dog struct
* @d: the pointer to new_dog
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

