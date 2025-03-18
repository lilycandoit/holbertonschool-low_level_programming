#include "stdio.h"
#include "stdarg.h"

/**
 * sum_them_all - get the sum of all its params
 * @n: the number of arguments
 * Return: the sum of all it params
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	
	if (n == 0)
		return (0);
	
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		sum = sum + x;
	}
	
	va_end(args);
	
	return (sum);

}

