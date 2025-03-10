#include "main.h"
#include "stdlib.h"

/* check the length of a string */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;
	/* treat NULL string as empty string */
	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
* str_concat - to concatenate 2 strings
* using dynamic memory allocation
* @s1: first string
* @s2: second string
*
* Return: Return pointer to the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1, len_s2, len_total;
	char *concat, *concat_final;

	/* get length of s1, s2 - treat NULL as empty string */
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	len_total = len_s1 + len_s2 + 1;
	/* +1 for null terminator */

	/* allocate memory for the concat string */
	concat = malloc(len_total * sizeof(char));
	if (concat == NULL)
		return (NULL);

	concat_final = concat; /* IMP - store the start of allocated memory */

	/* copy s1 to concat */
	while (s1 != NULL && *s1 != '\0')
	{
		*concat = *s1;
		concat++;
		s1++;
	}

	/* copy s2 to concat string */
	while (s2 != NULL && *s2 != '\0')
	{
		*concat = *s2;
		concat++;
		s2++;
	}

	/*after concat the 2 string, add null terminator */
	*concat = '\0';

	return (concat_final);
}

