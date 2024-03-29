#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: pointer to the list_t list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		 else
			printf("[%u] %s\n", h->len, h->str);
		t++;
		h = h->next;
	}

	return (t);
}
