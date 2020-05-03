#include "lists.h"
/**
 * add_dnodeint_end - struct
 * @head: pointer to head
 * @n: pointer to n
 * Return: head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->next = NULL;
	node->n = n;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	node->prev = tmp;
	tmp->next = node;
	return (node);

}
