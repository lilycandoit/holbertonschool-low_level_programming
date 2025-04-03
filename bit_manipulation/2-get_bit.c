#include "main.h"

/**
* get_bit - to get bit from given index of a binary
*
* @n: the number to be printed
* @index: the index to get the bit, starting from 0
*
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int range = sizeof(unsigned long int) * 8;

	/* check if index is out of range */
	if (index >= range)
		return (-1);

	/* create mask with only the bit at position index set to 1 */
	mask = 1UL << index;
	/* move number 1 to the left index spaces */

	/* check if the bit at position index is set in n */
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}



