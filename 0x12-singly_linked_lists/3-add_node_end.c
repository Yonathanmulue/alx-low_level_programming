#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - we use this function to add a new node at the end of a list
 * @head: pointer to the list_t list pointer
 * @str: string to put in the new node
 *
 * Return: NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	list_t *current = *head;

	char *new_str = strdup(str);

	if (!head || !str)
		return (NULL);

	if (!new_node)
		return (NULL);

	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
