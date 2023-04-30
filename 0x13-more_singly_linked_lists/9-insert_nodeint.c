#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node in a linked list
 * @head: This is a pointer to the first node in the list
 * @idx: the index where the new node is added
 * @n: the data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	current = *head;
	for (i = 0; current && i < idx - 1; i++)
		current = current->next;

	if (i != idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->next = current ? current->next : NULL;
	if (idx == 0)
		*head = new;
	else if (current)
		current->next = new;
	return (new);
}
