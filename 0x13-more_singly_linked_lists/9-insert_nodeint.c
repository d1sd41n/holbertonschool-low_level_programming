#include "lists.h"
/**
 * *insert_nodeint_at_index - pr*insert_nodein
 * @head: pointer to string
 * @idx: poewrwerinter to strierweng
 * @n: poewrewinter to strerwrrerewing
 * Return: nonerewwee
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	unsigned int i = 0;

	node = NULL;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
