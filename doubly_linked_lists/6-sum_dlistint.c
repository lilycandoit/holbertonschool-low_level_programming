#include "lists.h"

/**
* sum_dlistint - get the sum of all int data in the list
* @head: the pointer to head of the list
* Return: the sum of the list's data
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head; /*save the original head */
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		sum = sum + (node->n);
		node = node->next;
	}

	return (sum);
}


