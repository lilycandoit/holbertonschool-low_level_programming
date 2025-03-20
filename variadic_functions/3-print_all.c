#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include "variadic_functions.h"
#include "3-format_types.c"

/**
* get_type - function to get correct function pointer
* Return: void
*/
void (*get_type(char c))(va_list)
{
	ft all_types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	int i = 0;

	while (all_types[i].c != '\0')
	{
		if (all_types[i].c == c)
		return (all_types[i].f);

		i++;

	}

	return (NULL);
}

/* the main print_all function  */
/**
* print_all - print all the arguments passed to the function
* @format: any type of arguments passed in function
* Retunr: void
*/
void print_all(const char * const format,  ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
	void (*func)(va_list) = get_type(format[i]);

	if (func)
	{
		printf("%s", separator); /* print separator before next value */
		func(args);
		separator = ", "; /*update separator after 1 element */
	}
	i++;

	}

	printf("\n");  /* Print a newline at the end */

	va_end(args);  /* Clean up the va_list */

}

