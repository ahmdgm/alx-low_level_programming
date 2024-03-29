#include "lists.h"
/**
* free_listint - free linked list
* @head: node to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
