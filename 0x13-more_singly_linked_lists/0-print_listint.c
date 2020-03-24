#include "lists.h"
/**
 * print_listint - prints string
 * @h: pointer to string
 * Return: n nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
