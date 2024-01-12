#include "lists.h"

 /**
  * insert_dnodeint_at_index - insert a new node at given position
  * @h: pointer to first node
  * @idx: index at new node
  * @n: element of new node
  * Return: pointer to new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *next, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *h;
		for (i = 0; i < isx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	new_node->next = next;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
