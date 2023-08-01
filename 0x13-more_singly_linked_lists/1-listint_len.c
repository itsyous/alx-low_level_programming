#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
