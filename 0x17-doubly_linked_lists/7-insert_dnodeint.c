#include "lists.h"
/**
 * *insert_dnodeint_at_index - pr*insert_nodein
 * @h: pointer to string
 * @idx: poewrwerinter to strierweng
 * @n: poewrewinter to strerwrrerewing
 * Return: nonerewwee
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			node->prev = temp;
			node->next = temp->next;
			temp->next->prev = node;
			temp->next = node;
			return (node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
