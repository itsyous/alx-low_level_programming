#include "lists.h"

/**
 * _strlen - adds node to end of linked list
 * @str: pointer to struct pointer
 * Return: lenght of the string
 */
int _strlen(const char *str)
{
	unsigned int lennght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/**
 * add_node_end - adds a nide to the end of the list
 * @head: addres of pointer to head node
 * @str: str field of node
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *end_node;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = _strlen(str);
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		list = *head;

		while (list->next)
		{
			list = list->next;
		}
		list->next = end_node;
	}
	return (end_node);
}
