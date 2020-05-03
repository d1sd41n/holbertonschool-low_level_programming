#include "lists.h"
/**
 * sum_dlistint - pwwqwqrwdwqdints swdwdqtring
 * @head: pwdwqointwwqdqer to wdwstrwewing
 * Return: ndffdone
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
