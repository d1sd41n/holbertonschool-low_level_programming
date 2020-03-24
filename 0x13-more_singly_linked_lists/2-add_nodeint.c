#include "lists.h"
/**
 * add_nodeint - prints string
 * @head: pointer
 * @n: int
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->next = *head;
	node->n = n;
	*head = node;
	return (*head);

}
