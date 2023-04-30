#include "lists.h"
/**
 * sum_listint - This calculates the sum of all the data in a listint_t list
 * @head: This is the first node in the linked list
 *
 * Return: The result will be sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
