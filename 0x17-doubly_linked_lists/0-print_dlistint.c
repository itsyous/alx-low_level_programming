#include "lists.h"

/**
 * print dlistint_t - prints doubly linked list
 * @h: address of head node
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
