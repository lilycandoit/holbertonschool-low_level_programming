#include "dog.h"
#include "string.h"

/**
* init_dog - to initialize a variable with struct dog
* @d: variable name
* @name: first child element
* @age: 2nd child element
* @owner: 3rd child element
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)/* if pointer is not valid */
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
