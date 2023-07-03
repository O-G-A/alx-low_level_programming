#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: the ptr to the list_t list
 *
 * Return: number of elements (NL) in the h
 */
size_t list_len(const list_t *h)
{
	size_t NL = 0;

	while (h)
	{
		NL++;
		h = h->next;
	}
	return (NL);
}
