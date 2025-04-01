#include "lists.h"
#include "stdio.h"

/**
* dlistint_len - get number of elements of double linked list
* @h: the pointer to head of the double linked list
* Return: the numbers of nodes in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current_node = h;
	/* to not modify the original h pointer */

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
		/* move to next node */
	}

	return (count);
}



