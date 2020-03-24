#include "lists.h"
/**
 * pop_listint - psdsrsidnsatsass ssadsadtring
 * @head: pointer
 * Return: none
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (i);
}
