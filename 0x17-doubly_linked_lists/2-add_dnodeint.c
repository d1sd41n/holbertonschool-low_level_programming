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

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = *head;
	node->n = n;
	node->prev = NULL;
	*head = node;
	return (*head);

}
