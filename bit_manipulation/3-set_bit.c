#include "main.h"

/**
* set_bit - to set bit to 1 at a given index of a binary
*
* @n: the pointer to the number converted
* @index: the index to get the bit, starting from 0
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int range = sizeof(unsigned long int) * 8;

	/* check if index is out of range */
	if (index >= range)
		return (-1);

	/* create mask with only the bit at position index set to 1 */
	mask = 1UL << index;
	/* move number 1 to the left index spaces */

	/* turn the bit at given index to 1 and keep others unchanged */
	*n = *n | mask;

	return (1);
}



