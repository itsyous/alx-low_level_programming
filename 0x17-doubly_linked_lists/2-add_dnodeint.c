#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: address of first node
 * @n: element of node
 * Return: Nothing
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (head == NULL)
		return (NULL);
	else if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;
	return (*head);
}
