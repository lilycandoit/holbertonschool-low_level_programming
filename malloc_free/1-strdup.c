#include "main.h"
#include "stdlib.h"

/**
* _strdup - to duplicate a string
* using dynamic memory allocation
* @str: the string to be coppied
*
* Return: Return pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *dup;

	unsigned int len = 0, i;

	/* check if the str is NULL */
	if (str == NULL)
		return (NULL);

	/* find the length of the string */
	while (str[len] != '\0')
		len++;

	/* allocate memory for the dup string */
	/* add memory for null terminator( too by +1 */
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	/* make a copy of str to dup */
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}

	/*after copying the whole string, add null terminator */
	dup[len] = '\0';

	return (dup);
}
