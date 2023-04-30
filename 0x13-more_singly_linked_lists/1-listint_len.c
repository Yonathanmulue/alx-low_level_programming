#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a linked list
 * @h: This is the linked list of type listint_t to traverse
 *
 * Return: we return number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}

	return (num);
}
