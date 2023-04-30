#include "lists.h"
/**
 * pop_listint - This function deletes the head node of a linked list
 * @head: This pointer points to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (num);
}
