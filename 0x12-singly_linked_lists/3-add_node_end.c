#include "lists.h"
#include <string.h>

/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer to pointer to list_t
* @str: value of the node
*
* Return: address of the new element, or NULL if it failed
**/

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	while (str[len])
		len++;

	if (new_node == NULL)
		return (NULL);
	new_node->str == str;
	new_node->len == len;
	new_node->NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	list_t *current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = new_node;

	return (new_node);

}
