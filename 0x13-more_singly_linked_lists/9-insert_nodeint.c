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
	unsigned int j;
	listint_t *few;
	listint_t *hood = *head;

	few = malloc(sizeof(listint_t));
	if (!few || !head)
		return (NULL);

	few->n = n;
	few->next = NULL;

	if (idx == 0)
	{
		few->next = *head;
		*head = few;
		return (few);
	}

	for (j = 0; hood && j < idx; j++)
	{
		if (j == idx - 1)
		{
			few->next = hood->next;
			hood->next = few;
			return (few);
		}
		else
			hood = hood->next;
	}

	return (NULL);
}

