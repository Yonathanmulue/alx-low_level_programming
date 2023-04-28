#include "lists.h"
#include <stdio.h>
/**
 * print_list - this function prints the list
 * size_t - we use this function to print lists
 * @h: parameter
 * Return: if null prints nill
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return s;
}
