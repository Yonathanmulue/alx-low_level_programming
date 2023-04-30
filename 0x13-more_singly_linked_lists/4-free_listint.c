#include "lists.h"
/**
 * free_listint - This function frees a linked list
 * @head: pointer to the first node of the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
