#include "stdio.h"

/* functions to print different types */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
	/* in variadic function, 'char' is promoted to 'int' */
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
	/* in variadic function, 'float' is promoted to 'double' */
}

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	s = s ? s : "(nil)";
	printf("%s", s);
}
