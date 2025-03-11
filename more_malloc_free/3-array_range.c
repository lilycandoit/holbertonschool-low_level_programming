#include "main.h"
#include "stdlib.h"

/**
* array_range - an array with value ranged from min to max
* @min: the min integer of the array
* @max: the max integer of the array
*
* Return: a pointer to newly created array
*/

int *array_range(int min, int max)
{
	int *arr, i;

	/* check invalid condition */
	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* populate array with value from min to max */
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
