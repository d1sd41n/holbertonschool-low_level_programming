#include "lists.h"
/**
 * get_nodeint_at_index - pwwqwqrwdwqdints swdwdqtring
 * @head: pwdwqointwwqdqer to wdwstrwewing
 * @index: pwdwqointwwqdqer to wdwstrwewing
 * Return: ndffdone
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
