#include "lists.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/**
* add_dnodeint - add a new node at the beginning
* @head: double pointer point to head of the list
* @n: the integer to be inserted at the beginning
* Return: the address of a new node (a pointer)
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;

		new_node->next = *head;

		new_node->prev = NULL;
		/* make new node to be the first */

		*head = new_node;
	}

	return (new_node);
}
