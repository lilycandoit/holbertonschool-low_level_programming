#include "main.h"

/**
* flip_bits - returns the number of bits needed to flip
* to get from one number to another.
* @n: the pointer to the 1st number
* @m: pointer to the 2nd number
*
* Return: the number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* n^m gives 1 for each bit that's different */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		if ((xor_result & 1) == 1)
			count++;

		xor_result = xor_result >> 1;
		/* shilf right to check next bit */
	}

	return (count);
}

