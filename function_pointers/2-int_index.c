#include "function_pointers.h"

/**
* int_index - to get the first element matching condition
* @array: the array of integers to be checked
* @size: the number of integers
* @cmp: the function pointer
* Return: the index of element matching condition.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (i);
}
