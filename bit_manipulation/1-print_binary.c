#include "main.h"

/**
* print_binary - to print binary of a number
* @n: the mumber to be printed
* Description: without using arrays, malloc, % or /
* Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int divide, remainder;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* n >>1 meaning n/2 */
	divide = n >> 1;

	if (divide != 0)
	{
		print_binary(divide);
	}

	/* n & 1 is like getting the remainder when divived by 2 */
	remainder = n & 1; /* n is updated from the last recursion */
	/* odd number always has the last bit is 1 */
	/* and even number has last bit is 0 */

	_putchar(remainder + '0'); /* make it char type */
}

