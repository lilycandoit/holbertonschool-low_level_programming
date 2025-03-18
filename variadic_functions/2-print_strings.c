#include<stdio.h>
#include<stdarg.h>
#include<string.h>

/**
 * print_strings - to print strings from command arguments
 * @separator: the separator between the arguments
 * @n: the number of the arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (separator != NULL && i < n-1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);

}

