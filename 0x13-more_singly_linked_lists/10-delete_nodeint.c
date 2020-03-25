#include "lists.h"
/**
 * *delete_nodeint_at_index - pr*insert_nodein
 * @head: pointer to string
 * @index: poewrwerinter to strierweng
 * Return: nonerewwee
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (temp != NULL || i <= index)
	{
		if (i == index - 1)
		{
			node = temp->next;
			temp->next = node->next;
			free(node);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
