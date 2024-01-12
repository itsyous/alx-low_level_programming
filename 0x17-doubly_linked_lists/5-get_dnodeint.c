#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node
 * @head: pointer to first node
 * @index: index of node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
