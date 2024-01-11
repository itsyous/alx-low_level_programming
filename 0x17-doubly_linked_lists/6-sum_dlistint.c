#include "lists.h"

/**
 * sum_dlistint - returnthe sum of all data in list
 * @head: pointer to first node
 * Return: the sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
