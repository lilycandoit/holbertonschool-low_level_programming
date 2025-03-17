#include "function_pointers.h"

/**
* print_name - to print a name
* @name: the name to be printed
* @f: the pointer function to point to a function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
