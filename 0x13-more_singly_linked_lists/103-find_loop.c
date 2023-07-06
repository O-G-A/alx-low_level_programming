#include "lists.h"

/**
 * find_listint_loop - finds loop in the linked_list
 * @head: linked_list to search for
 *
 * Return: the address of a node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Slow = head;
	listint_t *Fast = head;

	if (!head)
		return (NULL);

	while (Slow && Fast && Fast->next)
	{
		Fast = Fast->next->next;
		Slow = Slow->next;
		if (Fast == Slow)
		{
			Slow = head;
			while (Slow != Fast)
			{
				Slow = Slow->next;
				Fast = Fast->next;
			}
			return (Fast);
		}
	}

	return (NULL);
}
