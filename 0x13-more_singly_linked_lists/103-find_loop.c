
#include "lists.h"

/**
 * find_listint_loop - This function uses to find the loop in a linked list
 * @head: This pointer is linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	for (; slow && fast && fast->next; slow = slow->next, fast = fast->next->next)
	{
		if (slow == fast)
		{
			slow = head;
			for (; slow != fast; slow = slow->next, fast = fast->next)
				;
			return (fast);
		}
	}

	return (NULL);
}

