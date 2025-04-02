#include "lists.h"

/**
* get_dnodeint_at_index - get the node of a given index
* @head: the pointer to head of the list
* @index: the index of the node
* Return: the node of a given index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node != NULL)
	{
		if (i == index)
		{
			return (node);
		}

		node = node->next;
		i++;
	}

	return (NULL);
	/* in case the node does not exist or not find given index */
}


