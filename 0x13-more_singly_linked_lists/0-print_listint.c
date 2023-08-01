#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (h)
	{
		printf("%d\n", tp->n);
		tp = tp->next;
		cntr++;
	}
	return (cntr);
}
