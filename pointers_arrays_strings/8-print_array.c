#include "main.h"
#include "stdio.h"

/**
 * print_array - print an array with n elements
 *
 * @a: the array to be printed
 * @n: the number of elements in that array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i=0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
			printf(", ");
	}

	printf("\n");

}
