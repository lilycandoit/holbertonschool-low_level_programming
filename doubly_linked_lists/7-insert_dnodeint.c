#include "lists.h"
#include "stdlib.h"

/**
* insert_dnodeint_at_index - to insert node at a given index
* @h: double pointer to head of the list
* @idx: the given index to insert the node
* @n: the number to be inserted
* Return: address of the new inserted node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert_node, *node = *h; /* current node, and to save the head */
	unsigned int i = 0;

	insert_node = malloc(sizeof(dlistint_t));

	if (insert_node == NULL)
		return (NULL);

	insert_node->n = n;

	if (idx == 0)
	{
		insert_node->prev = NULL;
		insert_node->next = *h;

		if (*h != NULL) /* list is not empty */
			(*h)->prev = insert_node;

		*h = insert_node; /* the insert_node becomes the new head */
		return (insert_node);
	}

	while (node != NULL)
	{
		if (i == idx - 1)
		{
			insert_node->prev = node; /* link insert_node to previous node */
			insert_node->next = node->next; /* link insert_node to the original next node */
			if (node->next != NULL)
				node->next->prev = insert_node; /* link orignal next node back to insert_node */
			node->next = insert_node; /* link previous node to insert_node */
			return (insert_node);
		}
		node = node->next;
		i++;
	}
	return (NULL); /* if idx is out of range */
}

