#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list
 * @head: This is the pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = list;
		list = *head;
		*head = next;
	}

	*head = list;

	return (*head);
}

