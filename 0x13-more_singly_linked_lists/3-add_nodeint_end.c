#include "lists.h"
/**
 * add_nodeint_end - This function adds a node at the end of the linked list
 * @head: This is the pointer to the first element in the list
 * @n: We use this parameter or data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}

