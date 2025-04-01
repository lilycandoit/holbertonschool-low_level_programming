#include "stdio.h"
#include "lists.h"
#include "stdlib.h"
#include "string.h"

/**
* _strlen - to get the length of a string
* @str: the string to be checked
* Return: the length of the string
*/
int _strlen(const char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}



/**
* add_node - add a new node at the beginning of a linked list
* @head: the head of the linked list
* @str: the string to be added at the beginning
*
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
