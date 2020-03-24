#include "lists.h"
/**
 * pop_listint - psdsrsidnsatsass ssadsadtring
 * @head: pointer
 * Return: none
 */
int pop_listint(listint_t **head)
{
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	*head = (*head)->next;
	return (i);
}
