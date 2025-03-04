#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 *
 * @: the matrix to work on
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
        int i = 0; /* rows = columns, i == j */
	int sum1 = 0;
	int sum2 = 0;

        while (i < size)
        {
                /* folmula: index = i * size + j */
		sum1 = sum1 + a[i * size + i];
                /* with 2nd diagonal line: i + j = size -1 */
                sum2 = sum2 + a[i * size + size - 1 - i];
                i++;
        }

        printf("%d, %d\n", sum1, sum2);
}
