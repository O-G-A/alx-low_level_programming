#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of the linked list
 * @h: the ptr to the list_t, the list to print
 *
 * Return: the printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t N = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		N++;
	}

	return (N);
}
