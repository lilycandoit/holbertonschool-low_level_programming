#include "main.h"

/**
* reverse_array - to reverse content of an array
*
* @a: the array with pointer
* @n: the number of elements of the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	/* n is length of the array */
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;

		i++;
	}
}
