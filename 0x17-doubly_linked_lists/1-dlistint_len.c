#include "lists.h"

/**
 * dlistint_len - lenght of dlist
 * @h: address of first node
 * Return: lenght of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
