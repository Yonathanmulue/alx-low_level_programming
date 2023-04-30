#include "lists.h"
/**
 * free_listint2 - This function frees a linked list
 * @head: This pointer to the pointer to the first node of the list to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;
	current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	*head = NULL;
}
