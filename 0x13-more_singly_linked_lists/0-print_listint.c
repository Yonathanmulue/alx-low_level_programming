#include "lists.h"

/**
 * print_listint - This function prints all the elements of a linked list
 * @h: the linked list of type listint_t to print
 *
 * Return: We return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}

	return (num);
}
