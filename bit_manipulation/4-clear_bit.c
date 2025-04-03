#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
*
* @n: the pointer to the number converted
* @index: the index to get the bit, starting from 0
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int range = sizeof(unsigned long int) * 8;

	/* check if index is out of range */
	if (index >= range)
		return (-1);

	/* create mask with only the bit at position index set to 1 */
	mask = 1UL << index;
	/* move number 1 to the left index spaces */

	/* flip the bits first, then use AND operator */
    *n = *n & (~mask); /* ~ has higher order than & */

	return (1);
}



