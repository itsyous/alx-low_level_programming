#include "lists.h"

/**
 * print dlistint_t - print a doubly linked list
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
