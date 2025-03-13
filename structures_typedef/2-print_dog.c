#include "dog.h"
#include "stdio.h"
#include "string.h"

/**
* print_dog - to print a struct dog
* @d: the variable
* Return: void
*/

void print_dog(struct dog *d)
{
	/* check the struct itself if it is NULL */
	if (d == NULL)
		return;

	/* check the child elements */
	if (d->name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age); /* float is never NULL */

	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
