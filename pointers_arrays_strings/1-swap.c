#include "main.h"

/**
 * swap_int - to swap value of 2 integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
