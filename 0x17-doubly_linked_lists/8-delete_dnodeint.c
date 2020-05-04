#include "lists.h"
/**
 * *delete_dnodeint_at_index - pr*insert_nodein
 * @head: pointer to string
 * @index: poewrwerinter to strierweng
 * Return: nonerewwee
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index - 1)
		{
			node = temp->next;
			temp->next = node->next;
			temp->next->prev = temp;
			free(node);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
