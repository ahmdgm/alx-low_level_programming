#include "lists.h"

/**
* add_nodeint - add node at the begining
* @head: pointer to the head (first node)
* @n: data required to insert in new node
* Return: pointer to new node or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		temp->next = NULL;
		temp->n = n;
		*head = temp;
	} else
	{
		temp->next = *head;
		temp->n = n;
		*head = temp;
	}

}
