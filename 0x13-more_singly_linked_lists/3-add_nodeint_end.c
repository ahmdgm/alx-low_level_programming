#include "lists.h"

/**
* add_nodeint_end - adds a node at the end of a linked list
* @head: pointer to the first element in the list
* @n: data required to insert
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tempNode;
	listint_t *lastNode;

	tempNode = (listint_t *)malloc(sizeof(list_t));
	if (tempNode == NULL)
		return (NULL);
	tempNode->n = n;
	tempNode->next = NULL;

	if (*head == NULL)
	{
		*head = tempNode;
	} else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
			lastNode->next = tempNode;
		}
	}

}
