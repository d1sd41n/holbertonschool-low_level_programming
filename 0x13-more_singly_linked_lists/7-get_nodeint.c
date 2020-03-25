#include "lists.h"
/**
 * get_nodeint_at_index - pwwqwqrwdwqdints swdwdqtring
 * @head: pwdwqointwwqdqer to wdwstrwewing
 * @index: pwdwqointwwqdqer to wdwstrwewing
 * Return: ndffdone
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head != NULL)
	{
		head = head->next;
		if(i == index)
			return (head);
		i++;
	}
	return (NULL);
}
