#include "dog.h"
#include "string.h"
#include "stdlib.h"

/**
* _strcpy - to coppy a string
* @dest: the dest string
* @src: the src string to be coppied
* Return: a pointer to dest string
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

/**
* _strlen - to get the length of a string
*
* @s: The string
*
* Return: The length of the string (int)
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* new_dog - to create a new dog function
* @name: the dog name
* @age: the dog age
* @owner: the dog owner
* Return: a pointer to a new_dog of type dog_t
* or NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/* allocate memory for the struct */
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}


	/* allocate memory and copy name */
	new_dog->name = malloc(_strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	/* assign age */
	new_dog->age = age;

	/* allocate memory and copy owner */
	new_dog->owner = malloc(_strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name); /* if its memory existed */
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);


	return (new_dog);
}

