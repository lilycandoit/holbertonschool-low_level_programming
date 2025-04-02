#include "lists.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/**
* add_dnodeint_end - add a new node at the end of list
* @head: double pointer point to head of the list
* @n: the integer to be inserted at the end
* Return: the address of a new node (a pointer)
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL; /* new node is the last node */

	/* handle empty list */
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	/* in case head is there (not empty list) */
	temp = *head;
	/* traverse through to last node of the list */
	while (temp->next != NULL)
	{
		temp = temp->next;
		/* increase step, move to
		 the next node*/
	}
	temp->next = new_node;
	/* link the last node to new_node */
	new_node->prev = temp;
	/* link the new_node to last node */
	return (new_node);
}

