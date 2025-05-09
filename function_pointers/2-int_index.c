#include "function_pointers.h"
#include "string.h"

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

	if (size < 0)
		return (-1);

	/* if array is NULL or cmp is NULL */
	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1); /*if no match found */
}
