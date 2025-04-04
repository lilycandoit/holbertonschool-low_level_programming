#include "lists.h"
#include "stdio.h"

/**
* list_len - to count all elements
* @h: the pointer to head of the linked list
* Return: the number of nodes (elements)
*/
size_t list_len(const list_t *h)
{
	unsigned int node_count = 0;
	const list_t *current = h;
	/* create a temporary pointer to not modifying the original h pointer */

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}

	return (node_count);
}
