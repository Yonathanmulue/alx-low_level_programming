#include "lists.h"
/**
 * delete_nodeint_at_index - This function deletes a node in a linked list
 * @head: The pointer to the first element in the list
 * @index: We use this index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (curr != NULL && i < index)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}

	if (i != index || curr == NULL)
		return (-1);

	if (prev == NULL)
		*head = curr->next;
	else
		prev->next = curr->next;

	free(curr);
	return (1);
}
