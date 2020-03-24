#include "lists.h"
/**
 * free_list - prints string
 * @head: pointer to string
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
