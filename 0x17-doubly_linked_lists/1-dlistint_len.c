#include "lists.h"
/**
 * dlistint_len - prints string
 * @h: pointer to string
 * Return: none
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
