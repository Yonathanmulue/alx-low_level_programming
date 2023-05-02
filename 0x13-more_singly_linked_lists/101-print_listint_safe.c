#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This function Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head:This is a pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *person, *fade;
	size_t codes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	person = head->next;
	fade = (head->next)->next;

	while (fade)
	{
		if (person == fade)
		{
			person = fade;
			while (person != fade)
			{
				codes++;
				person = person->next;
				fade = fade->next;
			}

			person = person->next;
			while (person != fade)
			{
				codes++;
				person = person->next;
			}

			return (codes);
		}

		person = person->next;
		fade = (fade->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - We use this function to Prints a listint_t list safely.
 * @head: This is a pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t codes, fedex = 0;

	codes = looped_listint_len(head);

	if (codes == 0)
	{
		for (; head != NULL; codes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (fedex = 0; fedex < codes; fedex++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (codes);
}

