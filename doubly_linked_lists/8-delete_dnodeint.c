#include "lists.h"
#include "stdlib.h"

/**
* delete_dnodeint_at_index - to delete a node at a given index
* @head: double pointer to head of the list
* @index: the given index to delete the node
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head; /* to save the head */
	unsigned int i = 0;

	if (*head == NULL) /* if list is empty */
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		/* reassign the head of list, the 2nd node becomes the new head */
		if (*head != NULL)
			(*head)->prev = NULL; /*make it the new head */
		free(current); /* free memory of original head node */
		return (1);
	}

	while (current != NULL) /* traverse the list */
	{
		if (i == index)
		{
			current->prev->next = current->next;
			if(current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1); /* if index is out of range */
}
