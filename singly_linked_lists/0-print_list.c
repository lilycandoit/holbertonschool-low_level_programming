#include "lists.h"
#include "stdio.h"

/**
* print_list - to print all elements of the linked list
* @h: the pointer to head of the linked list
* Return: the number of nodes (elements)
*/
size_t print_list(const list_t *h)
{
unsigned int node_count = 0;
const list_t *current = h;
/* create a temporary pointer to not modifying the original h pointer */

while (current != NULL)
{
	if (current->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", current->len, current->str);
	}
	node_count++;
	current = current->next;
	/* move to the next node */
}

return (node_count);
}