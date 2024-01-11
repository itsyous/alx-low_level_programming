#include "lists.h"

/**
 * print dlistint_t - prints doubly linked list
 * @h: address of head node
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
