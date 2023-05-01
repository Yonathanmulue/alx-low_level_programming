#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list
 * @head: This is the pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current->next;

		current->next = prev;
		prev = current;
		current = temp;
	}
	*head = prev;

	return (*head);
}
