#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
* @head: first node in the linked list
* @index: index of the node to be returned
* Return pointer to the node we are looking for
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp ? tmp : NULL);
}
