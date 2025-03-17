#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* on each element of an array.
* @array: the array of integer
* @size: number of elements
* @action: the function pointer
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
