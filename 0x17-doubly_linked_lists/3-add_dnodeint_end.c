#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to first node
 * @n: element of new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
