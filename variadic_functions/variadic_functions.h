#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>

/*struct for mapping format specifiers to functions */
typedef struct format
{
	char c;
	void (*f)(va_list);
} ft;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format,  ...);

#endif
