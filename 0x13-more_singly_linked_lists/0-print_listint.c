#include "lists.h"
/**
* print_listint - prints all elements in linked list (nodes data)
* @h: L_list of type listint_t
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
