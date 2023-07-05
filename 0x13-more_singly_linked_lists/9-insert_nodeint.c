#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in the linked_list,
 * in a given position
 * @head: ptr to the first node in the list
 * @idx: the index where new node is added
 * @n: the data to be inserted in the new node
 *
 * Return: ptr to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
