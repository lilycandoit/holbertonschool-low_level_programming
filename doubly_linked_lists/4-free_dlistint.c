#include "lists.h"
#include "stdlib.h"

/**
* free_dlistint - to free the allocated memory of the linked list
* @head: the pointer to head of the linked list
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		/* store the current node into temp */
		temp = head;
		head = head->next; /* move to next node */
		free(temp); /* then free that current node */
	}
}

