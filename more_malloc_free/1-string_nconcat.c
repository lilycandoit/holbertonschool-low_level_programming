#include "main.h"
#include "stdlib.h"

/**
* _strlen - to get the len of a string
* @s: the string to be checked
* Return: the length in int
*/

int _strlen(char *s)
{
	int len = 0;

	/* if NULL passed, treat it as empty string */
	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
* string_nconcat - to concatenate 2 strings
* with the first n bytes of 2nd string
*
* @s1: the first string
* @s2: the 2nd string
* @n: number of bytes to concatenate from s2
*
* Return: pointer to allocated memory
* or NULL if fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat_ptr;
	unsigned int len_s1, len_s2, len_concat, i, j;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	/* use full length of s2 if n is greater than length of s2*/
	if (n >= len_s2)
	{
		n = len_s2;
	}

	len_concat = len_s1 + n + 1; /* +1 for null terminator */

	/* allocate memory for the nconcat string */
	nconcat_ptr = malloc(len_concat * sizeof(char));

	if (nconcat_ptr == NULL)
		return (NULL);

	/* first, copy s1 */
	i = 0;
	while (s1 != NULL && i < len_s1)
	{
		nconcat_ptr[i] = s1[i];
		i++;
	}

	/* then copy n characters from s2 */
	j = 0;
	while (s2 != NULL && j < n)
	{
		nconcat_ptr[i + j] = s2[j];
		j++;
	}

	/* after all, add null terminator at the end of nconcat str */
	nconcat_ptr[len_concat - 1] = '\0';

	return (nconcat_ptr);
}
