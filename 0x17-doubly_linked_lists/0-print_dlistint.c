#include "lists.h"
/**
 * print_dlistint - prints linkeds list
 * @h: pointer to head
 * Return: none
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
