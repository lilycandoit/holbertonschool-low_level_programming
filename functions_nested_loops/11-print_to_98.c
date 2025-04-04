#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - to print all natural numbers from n to 98
 *
 * @n: param to print from
 *
 * Description: print all natural numbers from n to 98
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}

	printf("98\n");
}
