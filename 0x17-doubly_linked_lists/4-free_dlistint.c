#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: pointer to first node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
