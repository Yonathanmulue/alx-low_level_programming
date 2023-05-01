#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 0;

	if (!head)
		return (nodes);

	tortoise = head;
	hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			do {
				nodes++;
				tortoise = tortoise->next;
			}
			while (tortoise != hare);
			{
				hare = head;
			}
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			nodes++;
			return (nodes);
		}
	}
	return (nodes);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	while (head && nodes < 30)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;
		if (((size_t)head->next) <= ((size_t)head))
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (nodes);
}
