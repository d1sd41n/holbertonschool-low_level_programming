#include "lists.h"
/**
 * add_dnodeint - struct
 * @head: pointer to head
 * @n: pointer to n
 * Return: head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
		node->next = NULL;
	else
	{
		node->next = *head;
		(*head)->prev = node;
	}
	node->prev = NULL;
	*head = node;
	return (*head);

}
