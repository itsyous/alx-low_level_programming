#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node
 * @head: pointer to first node
 * @index: index of node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	int n = 0;

	if (head == 0)
		return (0);
	while (tmp != 0 && n < index)
	{
		tmp = tmp->next;
		n++;
	}
	return (tmp);
}
