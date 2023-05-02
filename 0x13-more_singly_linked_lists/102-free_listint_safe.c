#include "lists.h"

/**
 * free_listint_safe - We use this function to free a linked list
 * @h: This parameter is s pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ben = 0;
	int liff;
	listint_t *fire;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		liff = *h - (*h)->next;
		if (liff > 0)
		{
			fire = (*h)->next;
			free(*h);
			*h = fire;
			ben++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ben++;
			break;
		}
	}

	*h = NULL;

	return (ben);
}

