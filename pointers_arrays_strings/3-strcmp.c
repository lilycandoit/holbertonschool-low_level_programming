#include "main.h"
#include <stdio.h>

/**
* _strcmp - to compare two strings
*
* @s1: the first string
* @s2: the second string
*
* Return: the diference of the first unmatched one (int)
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			/* return ASCII diference of the 1st unmatched character */
			return (s1[i] - s2[i]);
			/* return immediately to stop the loop */
		}
		i++;
	}

	return (s1[i] - s2[i]); /* in case 2 strings have different lengths or both null */
}


