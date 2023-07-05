#include "lists.h"

/**
 * free_listint_safe - frees the linked_list
 * @h: ptr to first node in the linked_list
 *
 * Return: elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t Len = 0;
	int diff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			Len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			Len++;
			break;
		}
	}

	*h = NULL;

	return (Len);
}
