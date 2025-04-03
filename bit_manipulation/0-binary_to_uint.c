#include "main.h"
#include "string.h"

/**
* binary_to_uint - convert binary number to an unsigned int
* @b: pointer to the string of 0 and 1 chars
* Return: the unsigned integer or 0 if
* - there is one or more chars in the string b that is not 0 or 1
* - b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/* handle NULL pointer */
	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if ((*b != '0') && (*b != '1')) /* invalid char */
			return (0);

		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
